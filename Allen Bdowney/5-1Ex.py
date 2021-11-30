import time
print(time.time())
#i ex-5.2
a=int(input())
b=int(input())
c=int(input())
n=int(input())

def check_fermat(a,b,c,n):
    if n>2 and a**n+b**n==c**n :
        print("fernmat was wrong")
    else:
        print("no,that doesn't work")

