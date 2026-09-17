class person:
    def __init__(self,name,age,hight,weight):
        self.name = name 
        self.age = age 
        self.hight = hight
        self.weight = weight
        
    def play(self):
        print("various kind of game , like :- football,voliball,cricket,baseball,hokey")
        
    
class cricketer(person):
    def __init__(self, name, age, hight, weight,team):
        self.team = team
        super().__init__(name, age, hight, weight)
        
    def play(self):
        print("They are play cricket .")
    
    #overloding
    def __add__ (self,other):
        return self.age + other.age 
        
    def __len__ (self):
        return self.hight
            
        

sakib = cricketer('Sakib',38,'5 feet 9 inc.','72kg','Bangladesh')
rakib = cricketer('rakib',37,'5 feet 11 inc.','92kg','Bangladesh')


sakib.play()
print(sakib.__len__())
print(sakib + rakib)


        
    

    