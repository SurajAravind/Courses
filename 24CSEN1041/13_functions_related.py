# default arguments
def welcome(name="Mechanical students"):
    print(f"Welcome,  {name}!")

welcome()
welcome("Sumanth")

# variable arguments
def sum_of_numbers(*num):
    return sum(num)
print(sum_of_numbers(1,2,3))
print(sum_of_numbers(4,5,6,7))

#positional arguments
def greet(name, greeting):
    print(f"{greeting}, {name}!")
greet("Shanmukesh", "Hello") 
#keyword arguments
greet(greeting = "Good morning", name = "Gurpreet")

# Anonymous functions
function_1 = lambda a, b, c: a+b+c
print(function_1(10, 20, 30))

#OUTPUT
Welcome,  Mechanical students!
Welcome,  Sumanth!
6
22
Hello, Shanmukesh!
Good morning, Gurpreet!
60

=== Code Execution Successful ===
