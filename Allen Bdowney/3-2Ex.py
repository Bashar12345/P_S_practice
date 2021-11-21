#i
def do_twice(f,val):
    f(val)
    f(val)

#ii
def print_twice(p):
    print(p)
    print(p)

#iii
def do_four(f,val):
   do_twice(f,val)
   do_twice(f,val)


do_twice(print,'spam')

#iv
do_four(print,'spam')

