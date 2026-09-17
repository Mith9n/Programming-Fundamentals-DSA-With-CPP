dic = {
    'name' : 'Maruf',
     'age' : 21,
     'dob' :2003,
     'friend':{
         'name':'bithi',
         'age' : 20,
         'dob' : 2003,
     },
     'marks':[10,20,30,40],
     'his_gf':{
         'name':'Pinki',
         'age':'17',
         'occ' :'student',
         'char':'multiplag'
     },
     'her_bf':{
         'name' : 'Ropon mia',
         'age':'27',
         'dob':1997,
         'occ':'mistry',
         'char':'content-creator'
     }
}

dic['sub'] = ('math','biology')
print(dic)
print(dic['friend']['age'])
print(dic['her_bf']['name'])
print(dic['her_bf']['age'])
print(dic['her_bf']['dob'])

#print(dic.get())
print(dic.keys())
print(dic.values())
print(dic.items())
print(dic.get('name'))
dic.update({'Ex_name':'sanck'})

print(dic)

