'''
Algorithm for leap year from user input

Step 1: Start
Step 2: Take input from user
Step 3: Check ((year % 4 == 0 and year % 100 != 0) or year % 400 == 0) ?
Step 4: If yes, then print leap year
Step 5: If no, then print not leap year
'''

# Take input from user
year = int(input("Enter a year: "))
# Check if input is leap year or not
if (year % 4 == 0 and year % 100 != 0) or year % 400 == 0:
    # If yes, then print leap year
    print(year,"is a leap year")
else:
    # If no, then print not leap year
    print(year,"is not a leap year")
    
'''
and == &&
or == ||

and operator
True = 1
False = 0

True and True = 1 and 1 = 1
True and False = 1 and 0 = 0
False and True = 0 and 1 = 0
False and False = 0 and 0 = 0

or operator
True = 1
False = 0

True or True = 1 or 1 = 1
True or False = 1 or 0 = 1
False or True = 0 or 1 = 1
False or False = 0 or 0 = 0
'''