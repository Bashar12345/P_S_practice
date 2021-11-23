def bahu():
    print('+ - - - -',end=' ')

def plus():
    print('+')
    #print("-")

def dari():
    print('|')

def bahu2():
    print('|        ',end=" ")

def do_twice(func):
    func()
    func()

def do_four(func):
    do_twice(func)
    do_twice(func)

def p_end():
    plus()
def d_end():
    dari()

def col():
    do_twice(bahu2)
    do_twice(bahu2)

def grid():
    do_four(bahu)
    p_end()
    do_four(bahu2)
    d_end()
    do_four(bahu2)
    d_end()
    do_four(bahu2)
    d_end()
    do_four(bahu2)
    d_end()
    
   
# do_four(grid)
# do_four(bahu)
# p_end()



print()


def one_four_one(f, g, h):
    f()
    do_four(g)
    h()

def print_plus():
    print('+', end=' ')

def print_dash():
    print('-', end=' ')

def print_bar():
    print('|', end=' ')

def print_space():
    print(' ', end=' ')

def print_end():
    print()

def nothing():
    "do nothing"

def print1beam():
    one_four_one(nothing, print_dash, print_plus)

def print1post():
    one_four_one(nothing, print_space, print_bar)


# def print_grid():
#     one_four_one(print_plus, print1beam, nothing)


def print_grid():
    one_four_one(nothing,print1post,print_end)




def print4beams():
    one_four_one(print_plus, print1beam, print_end)

def print4posts():
    one_four_one(print_bar, print1post, print_end)

def print_row():
    one_four_one(nothing, print4posts, print4beams)

# def print_grid():
#     one_four_one(print4beams, print_row, nothing)

# print1beam()

print_grid()
#print_grid()