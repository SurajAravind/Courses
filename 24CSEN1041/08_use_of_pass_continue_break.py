for i in range(1, 100):
    if i % 2 == 0:
        continue  # Skip even numbers, go to next iteration
    elif i == 25:
        break     # Exit the loop when i becomes 25
    else:
        pass      # Explicitly do nothing (dummy placeholder)

    # This block runs only for odd numbers before 25
    print(i)

# OUTPUT
1
3
5
7
9
11
13
15
17
19
21
23

=== Code Execution Successful ===
