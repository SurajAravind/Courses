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

# Insertion Sort

# Take input list of elements
input_list = [5, 3, 2, 4, 1]
print("Before Sorting: ", input_list)

# Iterate through the list
for i in range(1, len(input_list)):
    # keep the element under consideration in a seperate variable as the list contents will change
    key = input_list[i]

    #Compare the key with its predecessors
    predecessor_index = i - 1
    while (predecessor_index >= 0) and (key < input_list[predecessor_index]):
        input_list[predecessor_index + 1] = input_list[predecessor_index]
        predecessor_index -= 1
    input_list[predecessor_index+1] = key
print("After Sorting: ", input_list)

Before Sorting:  [5, 3, 2, 4, 1]
After Sorting:  [1, 2, 3, 4, 5]

=== Code Execution Successful ===

# Selection Sort

# Take input list of elements
input_list = [5, 3, 2, 4, 1]
print("Before Sorting: ", input_list)

# Iterate through the list
for i in range(len(input_list)):
    # Assume the element under consideration is minumum
    minimum_element_index = i
    #Compare the minimum element with the rest of the unsorted array
    for j in range(i, len(input_list)):
        if input_list[j] < input_list[minimum_element_index]:
            minimum_element_index = j
    input_list[i], input_list[minimum_element_index] = input_list[minimum_element_index], input_list[i]

print("After Sorting: ", input_list)    

#OUTPUT
Before Sorting:  [5, 3, 2, 4, 1]
After Sorting:  [1, 2, 3, 4, 5]

=== Code Execution Successful ===

