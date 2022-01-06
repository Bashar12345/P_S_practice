
# i
def lowercase1(s):
    for c in s:
        if c.islower():
            return True
        else:
            return False


l = lowercase1('asass')
print(l)

l = lowercase1('asasGRHSs')
print(l)

# ii


def lowercase2(s):
    for c in s:
        if c.islower():
            return 'True'
        else:
            return 'False'


l = lowercase2('asass')
print(l)

l = lowercase2('asasGRHSs')
print(l)

# i and ii are same


def lowercase3(s):
    flag = False
    for c in s:
        flag = c.islower()
    return flag


l = lowercase3('asass')
print(l)

l = lowercase3('asasGRHSs')
print(l)


def lowercase4(s):
    flag = False
    for c in s:
        flag = flag or c.islower()
    return flag


l = lowercase4('asass')
print(l)

l = lowercase4('asasGRHSs')
print(l)


def lowercase5(s):
    flag = False
    for c in s:
        if not c.islower():
            return False
    return True


l = lowercase5('asass')
print(l)

l = lowercase5('asasGRHSs')
print(l)

#   5 are different
