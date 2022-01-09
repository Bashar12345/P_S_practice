file = open('/home/b/Desktop/P_S_practice/Allen Bdowney/words.txt')
# word=file.readline()
# print(word)
# for line in file:
#     word = line.strip()
#     # print(" ")
#     print(word)
#     # print(" ")
# #print(word)
count = 0
e_words=0
for line in file:
    for word in line.split():
        if "e" in word:
            
            e_words+=1
            #print(word) 
        count += 1
        if len(word) > 20:
            print(word)
            #print(len(word))
    # print(" ")
print("total words:-", count,"total words with e:-", e_words)
print("percentage :- ", ((e_words/count)*100))
#print(word)
