# Base class
class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def show_info(self):
        print(f"Name: {self.name}")
        print(f"Age: {self.age}")

# First subclass
class Employee(Person):
    def __init__(self, name, age, employee_id, salary):
        super().__init__(name, age)
        self.employee_id = employee_id
        self.salary = salary

    def show_employee(self):
        self.show_info()
        print(f"Employee ID: {self.employee_id}")
        print(f"Salary: {self.salary}")

# Second subclass (this is where multi-level inheritance happens)
class Manager(Employee):
    def __init__(self, name, age, employee_id, salary, department):
        super().__init__(name, age, employee_id, salary)
        self.department = department

    def show_manager(self):
        self.show_employee()
        print(f"Department: {self.department}")


m = Manager("Tanvir", 35, "E102", 95000, "Software Development")
m.show_manager()
