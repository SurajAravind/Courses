list_1 = ["2025000733", "MADA GNAN SUMANTH"]
print(list_1)
print("Memory location of the list_1", id(list_1))
print(type(list_1))
print(list_1[0])
print(list_1[0][0])
print(type(list_1[0]))

# Common List functions / methods

print(len(list_1))
list_1.append(5)
print(list_1)
list_1.insert(1, "gmada@student.gitam.edu")
print(list_1)
list_1.remove("MADA GNAN SUMANTH")
print(list_1)
list_1.pop()
print(list_1)

#OUTPUT
['2025000733', 'MADA GNAN SUMANTH']
Memory location of the list_1 139884901321152
<class 'list'>
2025000733
2
<class 'str'>
2
['2025000733', 'MADA GNAN SUMANTH', 5]
['2025000733', 'gmada@student.gitam.edu', 'MADA GNAN SUMANTH', 5]
['2025000733', 'gmada@student.gitam.edu', 5]
['2025000733', 'gmada@student.gitam.edu']
