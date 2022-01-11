t = [1, 2, 3, 4, 5, 6]
m = ['a', 'c', 'd']


def cumsum(t):
    new_list = []
    index = 0
    ele_t = 0
    # print(len(t))
    for i in range(0, len(t)):
        if i > 0:
            j = i
            while j != 0:
                ele_t = ele_t + (t[j-1])
                j -= 1
                # print(j)
            new_list.append(t[i]+ele_t)
            ele_t = 0
        else:
            new_list.append(t[i])
    return new_list


def middle(t):
    new_list = t[1:len(t)-1]
    return new_list


def chop(t):
    #new_list = t.pop(int(len(t)-1))
    del t[len(t)-1]
    del t[0]
    #new_list= new_list.pop(0)
    return t


def is_sorted(t):
    i = 0
    while i != len(t)-1:
        if t[i] > t[i+1]:
            r = False
            break
        else:
            r = True
        i += 1
    return r


def is_anagram(word1, word2):
    r = bool()
    if len(word1) == len(word2):
        for letter in word1:
            if letter not in word2:
                r = False
                break
    else:
        return False
    if r:
        return False
    else:
        return True


d = ["add", "minus", "multi", "divide", "small", "large"]


def has_duplicates(d_list):
    bol=bool()
    new_list = d_list
    for i in range(0, len(d_list)):
        for j in range(i+1, len(d_list)):    
           
            if new_list[i] == d_list[j]:
                print(j)
                print(d_list[j])
                bol = True
                break
    if bol:
        return True
    else:
        return False


# Ex 10-7
print(has_duplicates(d))

# Ex 10-6
print(is_anagram('race', 'care'))
# Ex 10-5
print(is_sorted(m))
# Ex 10-4
print(chop(t))
# Ex 10-3
print(middle(t))
# Ex 10-2
print(cumsum(t))
