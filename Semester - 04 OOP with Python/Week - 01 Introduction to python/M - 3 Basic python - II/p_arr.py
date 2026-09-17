arr = []
n = input()
for n in input().split():  
    arr.append(int(n)) 
count = 0
for n in arr:
    n%2==0
    count+=1
    
print(count)


