
from collections import Counter

n = int(input())
a = list(map(int, input().split()))

count = Counter(a) 
remove_count = 0  

for x, freq in count.items():
    if freq > x:
        remove_count += (freq - x) 
    elif freq < x:
        remove_count += freq 

print(remove_count)
