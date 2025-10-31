// scheduler.c
// Implements FCFS, SJF (non-preemptive), Priority (non-preemptive), Round Robin
// Compile: gcc -std=c11 -O2 -Wall -o scheduler scheduler.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

typedef struct {
    int pid;
    int arrival;
    int burst;
    int priority;
} Process;

void print_stats(int n, int wt[], int tat[], int bt[]) {
    double total_wt = 0, total_tat = 0;
    printf("PID\tArrival\tBurst\tWaiting\tTurnaround\n");
    for (int i = 0; i < n; ++i) {
        printf("%d\t%d\t%d\t%d\t%d\n", i+1, 0, bt[i], wt[i], tat[i]); // arrival value not stored here
        total_wt += wt[i];
        total_tat += tat[i];
    }
    printf("Average Waiting Time: %.2f\n", total_wt / n);
    printf("Average Turnaround Time: %.2f\n", total_tat / n);
}

void print_stats_full(int n, Process p[], int wt[], int tat[]) {
    double total_wt = 0, total_tat = 0;
    printf("PID\tArrival\tBurst\tWaiting\tTurnaround\n");
    for (int i = 0; i < n; ++i) {
        printf("%d\t%d\t%d\t%d\t%d\n", p[i].pid, p[i].arrival, p[i].burst, wt[i], tat[i]);
        total_wt += wt[i];
        total_tat += tat[i];
    }
    printf("Average Waiting Time: %.2f\n", total_wt / n);
    printf("Average Turnaround Time: %.2f\n", total_tat / n);
}

//FCFS: sort by arrival time (stable)
void fcfs(Process proc[], int n) {
    Process *p = malloc(n * sizeof(Process));
    for (int i = 0; i < n; ++i) p[i] = proc[i];
    // stable sort by arrival (simple insertion)
    for (int i = 1; i < n; ++i) {
        Process key = p[i];
        int j = i - 1;
        while (j >= 0 && p[j].arrival > key.arrival) {
            p[j+1] = p[j];
            j--;
        }
        p[j+1] = key;
    }
    int time = 0;
    int *wt = calloc(n, sizeof(int));
    int *tat = calloc(n, sizeof(int));
    for (int i = 0; i < n; ++i) {
        if (time < p[i].arrival) time = p[i].arrival;
        int start = time;
        time += p[i].burst;
        int completion = time;
        tat[i] = completion - p[i].arrival;
        wt[i] = start - p[i].arrival;
    }
    // reorder to original pid order for printing
    Process *out = malloc(n * sizeof(Process));
    int *owt = calloc(n, sizeof(int));
    int *otat = calloc(n, sizeof(int));
    for (int i = 0; i < n; ++i) {
        int idx = p[i].pid - 1;
        out[idx] = p[i];
        owt[idx] = wt[i];
        otat[idx] = tat[i];
    }
    print_stats_full(n, out, owt, otat);
    free(p); free(wt); free(tat); free(out); free(owt); free(otat);
}

//SJF non-preemptive
void sjf(Process proc[], int n) {
    Process *p = malloc(n * sizeof(Process));
    for (int i = 0; i < n; ++i) p[i] = proc[i];
    int *done = calloc(n, sizeof(int));
    int completed = 0, time = 0;
    int *wt = calloc(n, sizeof(int));
    int *tat = calloc(n, sizeof(int));

    while (completed < n) {
        int idx = -1;
        int minb = INT_MAX;
        for (int i = 0; i < n; ++i) {
            if (!done[i] && p[i].arrival <= time) {
                if (p[i].burst < minb) {
                    minb = p[i].burst;
                    idx = i;
                } else if (p[i].burst == minb && p[i].arrival < p[idx].arrival) {
                    idx = i;
                }
            }
        }
        if (idx == -1) {
            // no arrived process, advance time
            int next = INT_MAX;
            for (int i = 0; i < n; ++i)
                if (!done[i] && p[i].arrival < next) next = p[i].arrival;
            time = (next == INT_MAX) ? time + 1 : next;
            continue;
        }
        int start = time;
        time += p[idx].burst;
        int completion = time;
        tat[idx] = completion - p[idx].arrival;
        wt[idx] = tat[idx] - p[idx].burst;
        done[idx] = 1;
        completed++;
    }

    print_stats_full(n, p, wt, tat);
    free(p); free(done); free(wt); free(tat);
}

//Priority non-preemptive (lower priority value = higher priority) 
void priority_np(Process proc[], int n) {
    Process *p = malloc(n * sizeof(Process));
    for (int i = 0; i < n; ++i) p[i] = proc[i];
    int *done = calloc(n, sizeof(int));
    int completed = 0, time = 0;
    int *wt = calloc(n, sizeof(int));
    int *tat = calloc(n, sizeof(int));

    while (completed < n) {
        int idx = -1;
        int minpr = INT_MAX;
        for (int i = 0; i < n; ++i) {
            if (!done[i] && p[i].arrival <= time) {
                if (p[i].priority < minpr) {
                    minpr = p[i].priority;
                    idx = i;
                } else if (p[i].priority == minpr && p[i].arrival < p[idx].arrival) {
                    idx = i;
                }
            }
        }
        if (idx == -1) {
            int next = INT_MAX;
            for (int i = 0; i < n; ++i)
                if (!done[i] && p[i].arrival < next) next = p[i].arrival;
            time = (next == INT_MAX) ? time + 1 : next;
            continue;
        }
        int start = time;
        time += p[idx].burst;
        int completion = time;
        tat[idx] = completion - p[idx].arrival;
        wt[idx] = tat[idx] - p[idx].burst;
        done[idx] = 1;
        completed++;
    }

    print_stats_full(n, p, wt, tat);
    free(p); free(done); free(wt); free(tat);
}

//Round Robin 
void round_robin(Process proc[], int n, int quantum) {
    Process *p = malloc(n * sizeof(Process));
    for (int i = 0; i < n; ++i) p[i] = proc[i];
    int *rem = malloc(n * sizeof(int));
    for (int i = 0; i < n; ++i) rem[i] = p[i].burst;
    int *wt = calloc(n, sizeof(int));
    int *tat = calloc(n, sizeof(int));
    int completed = 0, time = 0;
    int *inqueue = calloc(n, sizeof(int));

    // simple queue using array
    int qcap = n * 2 + 10;
    int *queue = malloc(qcap * sizeof(int));
    int front = 0, rear = 0;

    // enqueue processes that arrive at current time
    while (completed < n) {
        // enqueue newly arrived processes
        for (int i = 0; i < n; ++i) {
            if (!inqueue[i] && p[i].arrival <= time && rem[i] > 0) {
                queue[rear++] = i;
                inqueue[i] = 1;
            }
        }
        if (front == rear) {
            // nothing to run now; advance time
            int next = INT_MAX;
            for (int i = 0; i < n; ++i)
                if (rem[i] > 0 && p[i].arrival < next) next = p[i].arrival;
            if (next == INT_MAX) break;
            time = (next > time) ? next : time + 1;
            continue;
        }
        int idx = queue[front++];
        int exec = (rem[idx] > quantum) ? quantum : rem[idx];
        rem[idx] -= exec;
        time += exec;

        // enqueue any new arrivals that came during execution
        for (int i = 0; i < n; ++i) {
            if (!inqueue[i] && p[i].arrival <= time && rem[i] > 0) {
                queue[rear++] = i;
                inqueue[i] = 1;
            }
        }

        if (rem[idx] > 0) {
            // still not finished, put at end
            queue[rear++] = idx;
        } else {
            // finished
            completed++;
            int completion = time;
            tat[idx] = completion - p[idx].arrival;
            wt[idx] = tat[idx] - p[idx].burst;
        }
    }

    print_stats_full(n, p, wt, tat);
    free(p); free(rem); free(wt); free(tat); free(inqueue); free(queue);
}

int main(void) {
    int n; //number of processes
    printf("Enter number of processes: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid number of processes\n");
        return 0;
    }
    Process *proc = malloc(n * sizeof(Process));
    for (int i = 0; i < n; ++i) {
        proc[i].pid = i + 1;
        printf("Process %d arrival burst priority: ", proc[i].pid);
        if (scanf("%d %d %d", &proc[i].arrival, &proc[i].burst, &proc[i].priority) != 3) {
            free(proc);
            return 0;
        }
        if (proc[i].burst <= 0) proc[i].burst = 1;
    }

    printf("Choose algorithm:\n1) FCFS\n2) SJF (non-preemptive)\n3) Priority (non-preemptive)\n4) Round Robin\nChoice: ");
    int choice;
    if (scanf("%d", &choice) != 1) { free(proc); return 0; }

    switch (choice) {
        case 1: printf("\nFirst cum First Serve\n"); fcfs(proc, n); break;
        case 2: printf("\nShortest Job First\n"); sjf(proc, n); break;
        case 3: printf("\nPriority - Non preemptive\n"); priority_np(proc, n);break;
        case 4: {
            int q;
            printf("Enter time quantum: ");
            if (scanf("%d", &q) != 1) { free(proc); return 0; }
            if (q <= 0) q = 1;
            round_robin(proc, n, q);
            break;
        }
        default: printf("Invalid choice\n"); break;
    }

    free(proc);
    return 0;
}
