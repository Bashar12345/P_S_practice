# সেই দিনগুলিতে, অনেক ছেলে ফোরামে অবতার হিসাবে সুন্দর মেয়েদের ছবি ব্যবহার করে। 
# তাই প্রথম নজরে একজন ব্যবহারকারীর লিঙ্গ বলা বেশ কঠিন। গত বছর, 
# আমাদের নায়ক একটি ফোরামে গিয়েছিলেন এবং সুন্দরীর সাথে একটি সুন্দর চ্যাট করেছিলেন (তিনি তাই ভেবেছিলেন)। 
# তারপরে তারা প্রায়শই কথা বলত এবং অবশেষে তারা নেটওয়ার্কে দম্পতি হয়ে ওঠে।

# কিন্তু গতকাল, তিনি বাস্তব জগতে "তার" দেখতে এসে জানতে পারলেন "সে" আসলে একজন খুব শক্তিশালী মানুষ! 
# আমাদের নায়ক খুব দুঃখিত এবং তিনি এখন আবার প্রেম করতে খুব ক্লান্ত. 
# তাই তিনি ব্যবহারকারীর নাম দ্বারা ব্যবহারকারীদের লিঙ্গ সনাক্ত করার একটি উপায় নিয়ে এসেছিলেন।

# এটি তার পদ্ধতি: যদি একজনের ব্যবহারকারীর নামের স্বতন্ত্র অক্ষরের সংখ্যা বিজোড় হয়, তবে তিনি একজন পুরুষ, 
# অন্যথায় তিনি একজন মহিলা। 
# আপনাকে একটি স্ট্রিং দেওয়া হয়েছে যা ব্যবহারকারীর নাম নির্দেশ করে, 
# দয়া করে আমাদের নায়ককে তার পদ্ধতি দ্বারা এই ব্যবহারকারীর লিঙ্গ নির্ধারণ করতে সহায়তা করুন৷

#ইনপুট

# প্রথম লাইনে একটি অ-খালি স্ট্রিং রয়েছে, যেটিতে শুধুমাত্র ছোট হাতের ইংরেজি অক্ষর রয়েছে — ব্যবহারকারীর নাম। 
# এই স্ট্রিংটিতে সর্বাধিক 100টি অক্ষর রয়েছে।
# আউটপুট

# যদি এটি আমাদের নায়কের পদ্ধতিতে একজন মহিলা হয়, তাহলে "তার সাথে চ্যাট করুন! " 
# (উদ্ধৃতি ছাড়া), অন্যথায়, প্রিন্ট করুন "তাকে উপেক্ষা করুন!" (উদ্ধৃতি চিহ্ন বিনা). 


username = str(input())
count=0

for j in username:
    if username[j] == username[j+1]:
        count+=1
print(count)

if len(username)%2==0:
    print("her")
else:
    print("him")

#####unfinished