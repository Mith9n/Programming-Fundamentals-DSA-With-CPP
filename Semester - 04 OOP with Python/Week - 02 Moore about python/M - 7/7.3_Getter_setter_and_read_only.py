class students:
    def __init__(self,name,salary):
        self.__name = name 
        self.__salary = salary
        
    @property
    def name(self):
        return self.__name 
    
    
    @property
    def salary(self):
        return self.__salary
    
    
    @salary.setter
    def salary(self,amout):
        if(amout >= 0):
            self.__salary = amout
        else:
            print("cannot be negative ")
            
    @name.setter
    def name(self,nam):
        if(len(nam)>3):
           self.name = nam
        else:
            print("name are too short")
            
        
        

rahim = students('maruf',120)
print(rahim.name)
rahim.salary  = 150 
print(rahim.salary)
rahim.name= 'ab'
print(rahim.name)




        