#The four fundamental pillars of Object-Oriented Programming (OOP) are :-
# Abstraction, Encapsulation, Inheritance, and Polymorphism. 

class company:
    def __init__(self,name,address):
        self.name = name
        self.bus = []
        self.routes = []
        self.counter = []
        self.manager = []
        self.suppervisor = []
        self.drivers = []
        
        
class Driver:
    def __init__(self,name,dob,age,place,licence):
        self.name = name 
        self.dob = dob 
        self.age = age 
        self.place = place 
        self.licence = licence
        
class counter :
    def __init__(self,passenger_name,ticket,from_station,to_station,select_class,jounery_date):
        self.passenger_name = passenger_name 
        self.ticket = ticket 
        self.from_station = from_station
        self.to_station = to_station
        self.select_class = select_class
        self.jounery_date = jounery_date
        
        
        
suman_mia = Driver('sumon mia',1974,51,'mymenshing','5yr valid')
robin_ali = Driver('robin ali',1994,30,'mymenshing','5yr valid')
print(suman_mia.name,suman_mia.dob,suman_mia.age,suman_mia.place,suman_mia.licence)
print(robin_ali.name,robin_ali.dob,robin_ali.age,robin_ali.place,robin_ali.licence)

counter_01 = counter('Abdul hridoy mollah',1,'Gazipur,bypas','mirpur-10','AC_B',10-402025)
print(counter_01.passenger_name,counter_01.ticket,counter_01.from_station,counter_01.to_station,counter_01.select_class)

        
        
        

        


        
        