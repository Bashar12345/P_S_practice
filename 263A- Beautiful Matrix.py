# আপনি একটি 5 × 5 ম্যাট্রিক্স পেয়েছেন, যেখানে 24টি শূন্য এবং একটি একক সংখ্যা রয়েছে। 
# 1 থেকে 5 পর্যন্ত সংখ্যা দ্বারা ম্যাট্রিক্স সারিগুলিকে উপরে থেকে নিচ পর্যন্ত সূচী করি, 
# 1 থেকে 5 পর্যন্ত সংখ্যা দ্বারা ম্যাট্রিক্স কলামগুলিকে বাম থেকে ডানে সূচী করি। 
# একটি পদক্ষেপে, আপনাকে ম্যাট্রিক্সে নিম্নলিখিত দুটি রূপান্তরের একটি প্রয়োগ করার অনুমতি দেওয়া হয়েছে:

#   দুটি প্রতিবেশী ম্যাট্রিক্স সারি অদলবদল করুন, অর্থাৎ, 
#   কিছু পূর্ণসংখ্যা i (1 ≤ i < 5) এর জন্য সূচী i এবং i + 1 সহ সারি।



#   দুটি প্রতিবেশী ম্যাট্রিক্স কলাম অদলবদল করুন, অর্থাৎ,
#   কিছু পূর্ণসংখ্যা j (1 ≤ j < 5) এর জন্য সূচী j এবং j + 1 সহ কলাম।

# আপনি মনে করেন যে একটি ম্যাট্রিক্স সুন্দর দেখায়,
#  যদি ম্যাট্রিক্সের একক সংখ্যাটি তার মাঝখানে থাকে (তৃতীয় সারি এবং তৃতীয় স্তম্ভের ছেদকৃত ঘরে)। 
# ম্যাট্রিক্স সুন্দর করতে প্রয়োজনীয় নূন্যতম সংখ্যা গণনা করুন।

#ইনপুট

# ইনপুটটি পাঁচটি লাইন নিয়ে গঠিত, প্রতিটি লাইনে পাঁচটি পূর্ণসংখ্যা রয়েছে: 
# ইনপুটের i-ম লাইনের j-ম পূর্ণসংখ্যাটি ম্যাট্রিক্সের উপাদানটিকে প্রতিনিধিত্ব করে যা i-th সারির ছেদ 
# এবং j-th-এর সংযোগস্থলে অবস্থিত। 
# কলাম এটা নিশ্চিত যে ম্যাট্রিক্সে 24টি শূন্য এবং একটি একক সংখ্যা রয়েছে।

matrix=[]

# #row
# for i in range(5):
#     a =[]
#     # column
#     for j in range(0,5):
#         a.append(int(input()))
#     matrix.append(a)

matrix=[[0,0,0,0,1],[0,0,0,0,0],[0,0,0,0,0],[0,0,0,0,0],[0,0,0,0,0]]
#print(matrix)

# one-liner logic to take input for rows and columns
#matrix = [[int(input()) for x in range (5)] for y in range(5)]


# for x in range(0,5):
#  for i in matrix[x]:
#     if 1 in matrix[x]:
#         print(i)
print(len(matrix)//2)

for x in range(0,5):
    if 1 in matrix[x]:   
        print(matrix[x].index(1))
        locate_mid = matrix[x].index(1)
        col = abs((len(matrix)//2) - locate_mid)
        print('col',col)
        row=abs(x-locate_mid)
        print('row',row)
        sort=row+col
        print("row-",x," ",matrix[x])
        print(sort)     
    #for matrix[x][y] in matrix[x]:
    
    for y in range(0,5):
        print(matrix[x][y],end=" ")
    print('\n')


# a=[int(x) for x in input().split()]
# b=[int(x) for x in input().split()]
# c=[int(x) for x in input().split()]
# d=[int(x) for x in input().split()]
# e=[int(x) for x in input().split()]

# if sum(a)!=0:
#     x,y=1,a.index(1)+1
# elif sum(b)!=0:
#     x,y=2,b.index(1)+1
# elif sum(c)!=0:
#     x,y=3,c.index(1)+1
# elif sum(d)!=0:
#     x,y=4,d.index(1)+1
# else:
#     x,y=5,e.index(1)+1

# r,c=3,3
# print(abs(x-r)+abs(c-y))