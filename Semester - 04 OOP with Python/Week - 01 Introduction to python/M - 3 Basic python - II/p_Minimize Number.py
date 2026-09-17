n = int(input())  
arr= list(map(int, input().split()))  

min_div= 10**9 

for num in arr:
    count = 0  
    
    while num % 2 == 0:  
        num //= 2  
        count += 1  
    
    min_div = min(min_div, count) 

print(min_div)  




