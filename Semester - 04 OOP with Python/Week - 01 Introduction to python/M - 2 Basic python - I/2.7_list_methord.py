"""
List Methods :
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

numbers = [10,20,30,40,50]
numbers.append(60)
numbers.insert(3,31)
if 31 in numbers:
    numbers.remove(31)

numbers.pop()
idx = numbers.index(40)
numbers.reverse()
print(idx)

print(numbers[:])




