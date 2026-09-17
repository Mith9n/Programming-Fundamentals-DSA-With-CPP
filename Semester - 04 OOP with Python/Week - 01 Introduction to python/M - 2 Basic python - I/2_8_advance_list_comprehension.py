numbers = [12,24,25,27,32,44,66,75]
odd =[]
even=[]
for num in numbers:
    if(num%2==1):
        odd.append(num)
    else:
        even.append(num)
        
        
print("odd :",odd)
print("even :",even)


digits = [1,2,3,4,5,6,7,8]

# new_list = [expression for variable in iterable if condition]
# 👉 এখানে দ্বিতীয় num হলো loop variable – digits লিস্ট থেকে প্রতিটি মান নিয়ে আসে।
#  👉 প্রথম num হলো expression – এটি নতুন লিস্টে কি রাখা হবে তা নির্ধারণ করে।

even_num = [num for num in digits if num % 2 == 0 ]
print(even_num)