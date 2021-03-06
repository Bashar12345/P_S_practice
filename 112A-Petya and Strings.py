# ছোট পেটিয়া উপহার পছন্দ করে। তার মা তাকে তার জন্মদিনের জন্য একই আকারের দুটি স্ট্রিং কিনেছিলেন।
# স্ট্রিংগুলি বড় হাতের এবং ছোট হাতের ল্যাটিন অক্ষর নিয়ে গঠিত। 
# এখন পেটিয়া এই দুটি স্ট্রিং অভিধানিকভাবে তুলনা করতে চায়। 
# অক্ষরের ক্ষেত্রে কোন ব্যাপার নেই,
# এটি একটি বড় হাতের অক্ষরটিকে সংশ্লিষ্ট ছোট হাতের অক্ষরের সমতুল্য বলে মনে করা হয়। 
# পেটিয়াকে তুলনা করতে সাহায্য করুন।

#ইনপুট

# প্রথম দুটি লাইনের প্রতিটিতে একটি কেনা স্ট্রিং রয়েছে। 
# স্ট্রিংগুলির দৈর্ঘ্য 1 থেকে 100 পর্যন্ত অন্তর্ভুক্ত। 
# এটি নিশ্চিত যে স্ট্রিংগুলি একই দৈর্ঘ্যের এবং এতে বড় হাতের এবং ছোট হাতের ল্যাটিন অক্ষর রয়েছে।

#আউটপুট

# যদি প্রথম স্ট্রিংটি দ্বিতীয়টির চেয়ে কম হয় তবে "-1" প্রিন্ট করুন। 
# যদি দ্বিতীয় স্ট্রিংটি প্রথমটির চেয়ে কম হয় তবে "1" প্রিন্ট করুন।
# স্ট্রিং সমান হলে, "0" প্রিন্ট করুন। 
# মনে রাখবেন যে স্ট্রিংগুলির তুলনা করার সময় অক্ষরের ক্ষেত্রে বিবেচনা করা হয় না।
f_s = str(input()).upper()
s_s = (input()).upper()

if f_s == s_s:
    print(0)
elif f_s<s_s:
    print(-1)
else:
    print(1)