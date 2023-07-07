'''
Algorithm:

Step 1: Start
Step 2: Declare variables a, b, sub = 0
Step 3: Read values of a and b
Step 4: if a > b ? 
Step 5: if yes then calculate sub = a - b
Step 6: else calculate sub = b - a
Step 7: Display sub
Step 8: Stop
'''

# Declare variables a, b, sub
a = int(input("Enter a: "))
b = int(input("Enter b: "))
sub = 0

# if a > b ?
if a > b:
    sub = a - b
else:
    sub = b - a

print("Subtraction is: ", sub)