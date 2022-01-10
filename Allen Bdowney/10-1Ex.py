t=[[1,2],[3],[4,5,6]]

def nested_sum(t):
    total=0
    for list in t:
        print(list)
        total+=sum(list)
        print(total)
    return total

total=nested_sum(t)
print(total)