A = {1, 2, 3, 4}
B = {3, 4, 5, 6}

print(type(A))

print("Union (|):", A | B)              
print("Intersection (&):", A & B)       
print("Difference (-):", A - B)         
print("Symmetric diff (^):", A ^ B)    

#OUTPUT
<class 'set'>
Union (|): {1, 2, 3, 4, 5, 6}
Intersection (&): {3, 4}
Difference (-): {1, 2}
Symmetric diff (^): {1, 2, 5, 6}

=== Code Execution Successful ===
