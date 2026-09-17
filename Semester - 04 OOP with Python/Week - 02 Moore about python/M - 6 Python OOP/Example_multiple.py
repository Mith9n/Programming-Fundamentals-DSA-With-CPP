# Parent class 1
class Employee:
    def __init__(self, employee_id, salary):
        self.employee_id = employee_id
        self.salary = salary

    def show_employee(self):
        print(f"Employee ID: {self.employee_id}")
        print(f"Salary: {self.salary}")

# Parent class 2
class Student:
    def __init__(self, student_id, grade):
        self.student_id = student_id
        self.grade = grade

    def show_student(self):
        print(f"Student ID: {self.student_id}")
        print(f"Grade: {self.grade}")

# Child class (Multiple Inheritance)
class Manager(Employee, Student):
    def __init__(self, name, employee_id, salary, student_id, grade, department):
        self.name = name
        Employee.__init__(self, employee_id, salary)  # Call Employee constructor
        Student.__init__(self, student_id, grade)     # Call Student constructor
        self.department = department

    def show_manager(self):
        print(f"Manager Name: {self.name}")
        self.show_employee()
        self.show_student()
        print(f"Department: {self.department}")
        
        
m = Manager("Tanvir", "E102", 95000, "S102", "A", "Software Development")
m.show_manager()

