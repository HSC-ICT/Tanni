# calc largest number between three numbers
x = 3
y = 4
z = 5
if(x > y and x > z):
    print(x, "is the largest number")
if(y > x and y > z):
    print(y, "is the largest number")
if(z > x and z > y):
    print(z, "is the largest number")


# calc largest number between three numbers
a = 3
b = 4
c = 5
if(a > b):
    if(a > c):
        print(a, "is the largest number")
    else:
        print(c, "is the largest number")
else:
    if(b > c):
        print(b, "is the largest number")
    else:
        print(c, "is the largest number")

# calc smallest number between three numbers
a = 3
b = 4
c = 5
if(a < b):
    if(a < c):
        print(a, "is the smallest number")
    else:
        print(c, "is the smallest number")
else:
    if(b < c):
        print(b, "is the smallest number")
    else:
        print(c, "is the smallest number")