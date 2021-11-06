#বিটল্যান্ডের ক্লাসিক প্রোগ্রামিং ভাষা হল Bit++। এই ভাষা খুবই অদ্ভুত এবং জটিল।

#ভাষাটি অদ্ভুত কারণ এটির ঠিক একটি পরিবর্তনশীল, যাকে বলা হয় x। 
# এছাড়াও, দুটি অপারেশন আছে:

#  অপারেশন ++ ভেরিয়েবল x এর মান 1 দ্বারা বৃদ্ধি করে।
#   অপারেশন -- ভেরিয়েবল x এর মান 1 দ্বারা হ্রাস করে।

#বিট++ ভাষার একটি বিবৃতি হল একটি ক্রম, যা ঠিক একটি অপারেশন এবং একটি পরিবর্তনশীল x নিয়ে গঠিত। 
# বিবৃতিটি স্পেস ছাড়াই লেখা হয়, অর্থাৎ এতে শুধুমাত্র "+", "-", "X" অক্ষর থাকতে পারে। 
# একটি বিবৃতি কার্যকর করার অর্থ এটিতে থাকা অপারেশনটি প্রয়োগ করা।

#বিট++-এ একটি প্রোগ্রাম হল স্টেটমেন্টের একটি ক্রম,
#  তাদের প্রত্যেকটিকে কার্যকর করা দরকার। 
# একটি প্রোগ্রাম চালানো মানে এতে থাকা সমস্ত স্টেটমেন্ট এক্সিকিউট করা।

#আপনাকে বিট++ ভাষায় একটি প্রোগ্রাম দেওয়া হয়েছে। 
# x এর প্রারম্ভিক মান হল 0। 
# প্রোগ্রামটি এক্সিকিউট করুন এবং এর চূড়ান্ত মান খুঁজুন (যখন এই প্রোগ্রামটি চালানো হয় তখন ভেরিয়েবলের মান)।

#প্রথম লাইনে একটি একক পূর্ণসংখ্যা n (1 ≤ n ≤ 150) রয়েছে — প্রোগ্রামে বিবৃতির সংখ্যা।

# পরবর্তী n লাইন প্রতিটি একটি বিবৃতি আছে.
# প্রতিটি বিবৃতিতে ঠিক একটি অপারেশন (++ বা --),
# এবং ঠিক একটি পরিবর্তনশীল x (অক্ষর «X» হিসাবে চিহ্নিত) রয়েছে। 
# সুতরাং, কোন খালি বিবৃতি আছে.
# অপারেশন এবং ভেরিয়েবল যেকোনো ক্রমে লেখা যেতে পারে।
n=int(input())
x=0
s='x'
if 1<=n<=150:
    for i in range(n):
       strin = input()
       print("strin",strin)
       if 'x' in strin and '++' in strin:
        #if strin=='x++' or strin=='++x' :
           x+=1
       elif 'x' in strin and '--' in strin:
            x=x-1
       else:
        print('Wrong input')
    print(x)


# x = 0
# for i in range(int(input())):
#     a = input()
#     if(a[0:2] == "++" and a[-1] == "X") or (a[0] == "X" and a[1:3] == "++"):
#         x += 1
#     elif(a[0:2] == "--" and a[-1] == "X") or (a[0] == "X" and a[1:3] == "--"):
#         x -= 1
# print(x)