a = 9
b = 5

# Arithmetic Operators
print("Arithmetic Operators")
print(f"{a} + {b} = {a + b}")
print(f"{a} - {b} = {a - b}")
print(f"{a} * {b} = {a * b}")
print(f"{a} / {b} = {a / b:.2f}")   # Float division for clarity
print(f"{a} % {b} = {a % b}\n")

# Relational Operators
print("Relational Operators")
print(f"{a} < {b} = {a < b}")
print(f"{a} > {b} = {a > b}")
print(f"{a} == {b} = {a == b}")
print(f"{a} != {b} = {a != b}\n")

# Logical Operators
print("Logical Operators")
print(f"AND {a} and {b} = {bool(a and b)}")
print(f"OR {a} or {b} = {bool(a or b)}")
print(f"NOT {a} = {not a}\n")

# Bitwise Operators
print("Bitwise Operators")
print(f"{a} & {b} = {a & b}")
print(f"{a} | {b} = {a | b}")
print(f"Bitwise XOR {a} ^ {b} = {a ^ b}")
print(f"Left Shift {a} << 2 = {a << 2}")
print(f"Right Shift {a} >> 2 = {a >> 2}")

# Conditional (Ternary) Operator
print("\n" + ("a is greater than b" if a > b else "b is less than a"))

# OUTPUT
Arithmetic Operators
9 + 5 = 14
9 - 5 = 4
9 * 5 = 45
9 / 5 = 1.80
9 % 5 = 4

Relational Operators
9 < 5 = False
9 > 5 = True
9 == 5 = False
9 != 5 = True

Logical Operators
AND 9 and 5 = True
OR 9 or 5 = True
NOT 9 = False

Bitwise Operators
9 & 5 = 1
9 | 5 = 13
Bitwise XOR 9 ^ 5 = 12
Left Shift 9 << 2 = 36
Right Shift 9 >> 2 = 2

a is greater than b

=== Code Execution Successful ===
