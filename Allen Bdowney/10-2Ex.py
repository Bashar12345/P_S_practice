t=[1,2,3,4,5,6]


def cumsum(t):
    new_list=[]
    index = 0
    ele_t=0
    #print(len(t))
    for i in range(0,len(t)):
        if i>0:
            j=i
            while j!=0:
                ele_t = ele_t +(t[j-1])
                j-=1
                #print(j)
            new_list.append(t[i]+ele_t)
            ele_t=0
        else:
            new_list.append(t[i])
    return new_list
def middle(t):
    new_list=t[1:len(t)-1]
    return new_list

print(middle(t))
print(cumsum(t))
