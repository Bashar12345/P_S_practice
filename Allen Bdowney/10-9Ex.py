import time


def make_word_from_file():
    t=[]
    file = open('words.txt')
    for line in file:
        words=line.split()
        t.append(words)
    return t

def make_word_from_file2():
    t = []
    file = open('words.txt')
    for line in file:
        words = line.split()
        t=t+[words]
    return t

start_time= time.time()
print(make_word_from_file)
estimate_time = time.time()-start_time
print(estimate_time,' Seconds')

start_time = time.time()
print(make_word_from_file2)
estimate_time = time.time()-start_time
print(estimate_time, ' Seconds')
