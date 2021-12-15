#nee to Understand Questions 

a = int(input())
b = int(input())

def is_power(a,b):
    if a>b and a/b!=0 and a/b<0: 
        return True
    else:
        return False
print(is_power)