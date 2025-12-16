# Define two numbers
num1 = 10
num2 = 20

# Add the numbers
sum_of_numbers = num1 + num2

# Print the result
print("The sum of", num1, "and", num2, "is:", sum_of_numbers)




# Simple program to perform arithmetic operations on two numbers

# accept input from user
a = float(input("Enter first number: "))
b = float(input("Enter second number: "))

# perform operations
print("Addition      :", a + b)
print("Subtraction   :", a - b)
print("Multiplication:", a * b)

# handle division carefully (avoid divide by zero)
if b != 0:
    print("Division      :", a / b)
else:
    print("Division      : Not possible (division by zero)")

Output
===================== RESTART: E:/Python-Programs/first.py =====================
Enter first number: 5
Enter second number: 6
Addition      : 11.0
Subtraction   : -1.0
Multiplication: 30.0
Division      : 0.8333333333333334

