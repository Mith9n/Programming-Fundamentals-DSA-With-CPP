# similer name other programming lunguage 
# key value pair 
# dictionary
# object
# hash table 
# note :- overlap with set 

numbers = {12,14,15,17,18,19,20,21}
person ={'name': 'Maruf','address ': 'Gazipur','age' :21,'profession' : 'bekar'}

print(person)
print(person['profession'])
print(person['name'])
person['name'] ='Ayeon'
print(person['name'])


for key,value in person.items():
    print(key,value)