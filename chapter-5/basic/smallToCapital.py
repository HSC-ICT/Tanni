''' 
Algorithm for small letter to capital letter from user input

Step 1: Start
Step 2: Take input from user
Step 3: Check if input is small letter
Step 4: If yes, then print capital letter
Step 5: If no, then print small letter
Step 6: Stop
'''

# Take input from user
letter = input("Enter a letter: ")

# Check if input is small letter
if letter.islower():
    # If yes, then print capital letter
    print("Capital letter is: ",letter.upper())
else:
    # If no, then print small letter
    print("Small letter is: ",letter.lower())
