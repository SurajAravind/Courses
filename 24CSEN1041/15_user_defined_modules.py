# Step 1: Create the following file and save in a local folder
# File name is suraj_module.py.  This is user defined module

def add_three(a, b, c):
    return a+b+c
def multiply_three(a, b, c):
    return a*b*c

# Step 2: create the following file

import sys
import os
module_directory = r"C:\Users\120035\Programming-for-Problem-Solving"

sys.path.append(module_directory)
import suraj_module

print(suraj_module.add_three(1, 2, 3))
print(suraj_module.multiply_three(4, 2, 3))

# Note: In case of any error messages, compile the user defined module first and run the code given in Step 2.

# OUTPUT
== RESTART: C:/Users/120035/Programming-for-Problem-Solving/module_program.py ==
6
24
