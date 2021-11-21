def right_justify(s):
    c_space=len(s)
    count_space=70-c_space
    #print(count_space)
    print(count_space*' '+s)

right_justify('monty')