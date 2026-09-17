# use float 
# take 3 input and find leargest number 
# take 3 number and give claculated the sum
# run a loop and (find odd number 39-99)
# creat a simple calculator using (+,-,*,/,%)

# float 

number_1 = 39.0 
number_2 = 40.9

sum = number_1 + number_2 
print(sum)

# take 3 input and find leargest number 

num_1 = int (input())
num_2 = int (input())
num_3 = int (input())

if num_1 > num_2 :
    print( num_1)
elif num_2 > num_3 :
    print(num_2)
else:
    print(num_3)
    
# use max functon
print(max(num_1,num_2,num_3))
   
    
# sum
arr = [10,20,30]
sum = 0
for n in arr :
    sum += n 

print(sum)


x1 = int(input())
x2 = int(input())
x3 = int(input())

print(sum([x1, x2, x3]))
