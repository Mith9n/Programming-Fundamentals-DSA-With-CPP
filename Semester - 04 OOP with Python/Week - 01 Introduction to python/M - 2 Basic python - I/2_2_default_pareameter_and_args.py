def sum(num1,num2):
    result = num1 + num2 
    return result 


print(sum(10,20))



# args 
def all_sum (*num):
    result = 0
    for n in num:
        result += n 
    return result 
        
print(all_sum(10,20,30,40,50))

