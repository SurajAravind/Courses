# Bubble Sort

# Take input list of elements
input_list = [5, 3, 2, 4, 1]
print("Before Sorting: ", input_list)

# Repeatedly swap adjacent elements if they are in wrong order
for i in range(len(input_list)):
    for j in range(0, len(input_list)-i-1):
        if input_list[j] > input_list[j+1]:
            input_list[j], input_list[j+1] = input_list[j+1], input_list[j] 
print("After Sorting: ", input_list)

# OUTPUT
Before Sorting:  [5, 3, 2, 4, 1]
After Sorting:  [1, 2, 3, 4, 5]

=== Code Execution Successful ===

