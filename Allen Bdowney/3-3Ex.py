def minus():
    print('-',end=' ')

def plus():
    print('+',end=" ")
    #print("-")

def dari():
    print('|')

def space():
    print(' ')

def do_twice(func):
    func()
    func()

def do_four(func):
    do_twice(func)
    do_twice(func)
   
def row_line():
    plus()
    do_four(minus)
    plus()
    do_four(minus)
    plus()
    
def row_line2():
    dari()
    do_four(space)
    dari()
    do_four(space)
    dari()


def grid():
    row_line()
    do_four(do_twice(row_line2()))
    row_line()
    do_four(do_twice(row_line2()))
    row_line()

    
    

grid()