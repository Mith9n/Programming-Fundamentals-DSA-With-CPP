# list , array collection of data-type 
# index =   0  1  2  3  4  5  6
numbers = [10,20,30,40,50,60,70]
#rev_idx = -7 -6 -5 -4 -3 -2 -1

print(numbers[3],numbers[-3])
# slice forward 
print(numbers[2:6])  # start  to ( end -1 ) index
print(numbers[:]) #first to last 
print(numbers[2:]) # 2 to last 
print(numbers[:4]) #first to 4

#reverse 
print(numbers[7:3:-1])
print(numbers[::-1]) #(70-10) shortcut recverse 

# interator step  like , cpp(for int i=0;i<=6;i++/i+=2)
print(numbers[0:6+1:2])

# when need index aslo
for i in range (0,len(numbers)) :
    print(numbers[i])
    
    
#note search on google : python list 😉

"""
append()
copy()
clear()
count()
extend()
index()
insert()
pop()
remove()
reverse() 
sort()

"""



