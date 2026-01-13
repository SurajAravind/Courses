def convert_to_base(num, base):
    # Handle zero as a special case
    if num == 0:
        return "0"

    digits = []
    temp = num
    while temp > 0:
        digits.append(str(temp % base))
        temp //= base

    # Since digits are collected in reverse, reverse them before joining
    digits.reverse()
    return ''.join(digits)


# Main program
num = int(input("Enter a number: "))
base = int(input("Enter the base: "))

converted = convert_to_base(num, base)
print(f"The number {num} in base {base} is: {converted}")


#OUTPUT
Enter a number: 25
Enter the base: 8
The number 25 in base 8 is: 31



** Updated taking into consider hexadecimal numbering system**
def convert_to_base(num, base):
    # Handle zero as a special case
    if num == 0:
        return "0"

    digits = []
    temp = num
    while temp > 0:
        reminder = temp % base
        if reminder > 9:
            match reminder:
                case 10:
                    digits.append('A')
                case 11:
                    digits.append('B')  
                case 12:
                    digits.append('C')
                case 13:
                    digits.append('D')
                case 14:
                    digits.append('E')
                case 15:
                    digits.append('F')
        
        else:
            digits.append(str(reminder))
        temp //= base

    # Since digits are collected in reverse, reverse them before joining
    digits.reverse()
    return ''.join(digits)


# Main program
num = int(input("Enter a number: "))
base = int(input("Enter the base: "))

converted = convert_to_base(num, base)
print(f"The number {num} in base {base} is: {converted}")

