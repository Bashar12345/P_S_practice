# t=8
# print(t/2)
def get_words():
    t = []
    file = open('/home/b/Desktop/P_S_practice/Allen Bdowney/words.txt')
    for line in file:
        words = line.split()
        t.append(words)
    t.sort()
    return t


def in_bisect(sorted_wordlist, target):
    if len(sorted_wordlist) == 0:
        return False

    i = len(sorted_wordlist) // 2

    if sorted_wordlist[i] == target:
        return True
    
    if sorted_wordlist[i] > target:
        # search the first half
        return in_bisect(sorted_wordlist[:i], target)
    else:
        # search the second half
        return in_bisect(sorted_wordlist[i+1:], target)
    


if __name__ == '__main__':
    word_list = get_words()

    for word in ['aa', 'alien', 'allen', 'zymurgy']:
        print(word, 'in list', in_bisect(word_list, word))
