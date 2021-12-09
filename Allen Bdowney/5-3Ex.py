#i
print("Enter the length of three sticks")
a=int(input())
b=int(input())
c=int(input())

def is_triangle(a,b,c):
    if a> b+c or b>c+a or c>a+b:
        print("No")
    else:
        print("Yes")

is_triangle(a,b,c)