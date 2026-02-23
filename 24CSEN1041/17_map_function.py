def length_function(name):
    return len(name)


list_1 = ["MADA GNAN SUMANTH","SHANMUKESH VJSS DONEPUDI","GURPREET SINGH MAND","KUCHERLA SAATVIK"]
print("***The will print the number of letters in the string***")
for item in list_1:
    print(length_function(item))


length_map = map(length_function, list_1)
print(length_map)
print(id(length_map))

# convert map object to list
list_2 = list(length_map)
print(list_2)

# use of map function in a concise way
data = list(map(int, input("Enter numbers separated by space: ").strip().split()))
print(data)

#OUTPUT
***The will print the number of letters in the string***
17
24
19
16
<map object at 0x7bfe19c99ba0>
136331284552608
[17, 24, 19, 16]
Enter numbers separated by space: 1 2 3
[1, 2, 3]

=== Code Execution Successful ===
