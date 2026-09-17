from abc import ABC 

class User(ABC):
    def __init__(self,name,phone,email,address):
        self.name = name 
        self.phone = phone 
        self.email = email
        self.address = address
        

class Employee (User):
    def __init__(self, name, phone, email, address,age,designation,salary):
        super().__init__(name, phone, email, address)
        self.age = age
        self.address = address
        self.designation = designation 
        self.salary = salary


class Admin (User):
    def __init__(self, name, phone, email, address):
        super().__init__(name, phone, email, address)
        self.employees = []
        
    def add_employee (self, name, phone, email, address,age,designation,salary):
        employee = Employee (name, phone, email, address,age,designation,salary)
        self.employees.append(employee)
        print(f'Mr.{name} is added !')
        
    def view_employee (self):
        print('Employees list')
        for emp in self.employees:
            print(emp.name,emp.email,emp.phone,emp.address,emp.age,emp.designation,emp.salary)
            
class Restaurent:
    def __init__(self):
        pass 
            
admin = Admin('karim','12322111','helloworld@gmail.com','dhaka')
admin.add_employee('Sagar','s@gmail,com','1232322','moulovibazar',29,'chef',12000)
admin.view_employee()
    
        
