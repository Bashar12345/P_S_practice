# টেবিলে একটি সারিতে n পাথর রয়েছে, তাদের প্রতিটি লাল, সবুজ বা নীল হতে পারে।
# টেবিল থেকে নেওয়ার জন্য ন্যূনতম সংখ্যক পাথর গণনা করুন যাতে যেকোনো দুটি প্রতিবেশী পাথরের রঙ ভিন্ন হয়। 
# একটি সারিতে পাথরগুলিকে প্রতিবেশী হিসাবে বিবেচনা করা হয় যদি তাদের মধ্যে অন্য কোনও পাথর না থাকে।

#ইনপুট
# প্রথম লাইনে রয়েছে পূর্ণসংখ্যা n (1 ≤ n ≤ 50) — টেবিলে পাথরের সংখ্যা।

# পরের লাইনে স্ট্রিং s রয়েছে, যা পাথরের রঙের প্রতিনিধিত্ব করে। 
# আমরা বাম থেকে ডানে 1 থেকে n পর্যন্ত সংখ্যাযুক্ত সারির পাথরগুলি বিবেচনা করব। 
# তারপর i-th অক্ষর s সমান "R", যদি i-th পাথর লাল হয়, "G", যদি এটি সবুজ হয় এবং "B", যদি এটি নীল হয়।

#আউটপুট

#একটি একক পূর্ণসংখ্যা প্রিন্ট করুন — সমস্যার উত্তর 


#n=int(input())
s=str(input())
count=0
for i in range(0,len(s)-1):
   if s[i]==s[i+1]:
       count+=1
   else:
       continue

print(count)



# list1=[1,2,3,4]
# list2=[4,3,2,1]
# print(list1==list2)
# print(set(list1)==set(list2))

# a=['abcd','dsa']

# print(list(map(len,a)))

# def fun():
#     x=30
#     return x

# fun()
# print(x)

# z=set('abc')
# z.add('san')
# z.update(set(['p','q']))
# print(z)


# def lis(val,l=[]):
#     l.append(val)
#     return l
# l1=lis('java',[])
# print("%s" % l1)

# t='%(a)s %(b)s'
# print(t % dict(a='welcome',b='to'))

# print('welcome to TWERWSFDS'.capitalize())

#how to merge a list

# l1=[1,2,3]
# l2=[4,5,6]
# l1.append(l2)
# print(l1)