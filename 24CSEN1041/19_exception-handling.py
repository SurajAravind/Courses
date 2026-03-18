# Normal code without exceptional handling

num = int(input("Enter a number: "))
result = 10 / num
print(f"Result: {result}")

OUTPUT
Enter a number: 0
ERROR!
Traceback (most recent call last):
  File "<main.py>", line 2, in <module>
ZeroDivisionError: division by zero

=== Code Exited With Errors ===


# Code with exceptional handling
try:
    num = int(input("Enter a number: "))
    result = 10 / num
    print(f"Result: {result}")
except ZeroDivisionError:
    print("Error: Division by zero!")
except ValueError:
    print("Error: Enter a valid number!")
finally:
    print("Execution complete.")

OUTPUT
Enter a number: 2
Result: 5.0
Execution complete.

=== Code Execution Successful ===

Enter a number: a
ERROR!
Error: Enter a valid number!
Execution complete.

=== Code Execution Successful ===
Enter a number: ERROR!
0
Error: Division by zero!
Execution complete.

=== Code Execution Successful ===
