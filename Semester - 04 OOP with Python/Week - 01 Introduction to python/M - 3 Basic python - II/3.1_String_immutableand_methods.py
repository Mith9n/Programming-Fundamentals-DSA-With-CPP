House_name = "Blackdoor\'s"
owner = "Maruf Hasan"
House_details ='''
blackdoor's 
Maruf Hasan
house cost - 1cr
tax - 10%
'''

print(House_details)

for char in House_name:
    print(char)

# mutable = changeable (python are not mutable) 
# emutable = unchangeable (true)

# slice 
print(owner[3])
print(owner[2:5]) 
print(owner[-3])
print(owner[:5])
print(owner[6:])


if 'Hasan' in owner:
    print("exists")
else :
    print("not exists") 
