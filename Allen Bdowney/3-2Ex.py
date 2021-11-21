#i
def do_twice(f,val):
    f(val)
    #f()

def print_spam():
    print("spam")

#do_twice(print_spam)

#ii
do_twice(print_spam(),2)

#iii
def print_twice(p):
    print(p)
    print(p)

#iv
do_twice(print_twice('spam'),'argument_value')