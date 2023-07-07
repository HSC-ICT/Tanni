'''
Algorithm for Positive Or Negative:
_________________________________
Step-1: Start
Step-2: Input number
Step-3: If number is greater than 0 ? if yes then print "Positive"
Step-4: If number is less than 0 ? if yes then print "Negative"
Step-5: If number is equal to 0 ? if yes then print "Zero"
Step-6: Stop
'''
number = int(input("Enter a number: "))
if(number > 0):
    print("Positive")
elif(number < 0):
    print("Negative")
else:
    print("Zero")