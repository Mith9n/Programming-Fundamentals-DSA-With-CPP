# 1. Student_Database
class StudentDatabase:
    def __init__(self):
        self.student_list = [] 

    def add_student(self,student):
        self.student_list.append(student)

    def get_student_by_id(self,student_id):
        for student in self.student_list:
            if student.get_id() == student_id:
                return student
        return None

    def view_all_students(self):
        for student in self.student_list:
            student.view_student_info()


# 2. Student_class
class Student:
    def __init__(self, student_id,name,department,database):
        self.__student_id = student_id
        self.__name = name
        self.__department = department
        self.__is_enrolled = False
        self.database = database
        self.database.add_student(self)

    # 4.enroll_student
    def enroll_student(self):
        if not self.__is_enrolled:
            self.__is_enrolled = True
            print(f"Student {self.__student_id} is now enrolled.")
        else:
            print("Student is already enrolled.")

    # 5.drop_student
    def drop_student(self):
        if self.__is_enrolled:
            self.__is_enrolled = False
            print(f"Student {self.__student_id} has been dropped.")
        else:
            print("Student is not enrolled.")

    # 6.view_student_info
    def view_student_info(self):
        status = "Enrolled" if self.__is_enrolled else "Not Enrolled"
        print(f"ID: {self.__student_id}, Name: {self.__name}, "
              f"Department: {self.__department}, Status: {status}")

    def get_id(self):
        return self.__student_id

    def is_enrolled(self):
        return self.__is_enrolled


# 7. Menu_and_inside_error_handling 
def menu(database):
    while True:
        print("\nMenu:")
        print("1. View All Students")
        print("2. Enroll Student")
        print("3. Drop Student")
        print("4. Exit")

        choice = input("Enter your choice (1-4): ")

        if choice =='1':
            database.view_all_students()

        elif choice =='2':
            sid = input("Enter student ID to enroll: ")
            student = database.get_student_by_id(sid)
            if student:
                student.enroll_student()
            else:
                print("Invalid student ID.")

        elif choice =='3':
            sid = input("Enter student ID to drop: ")
            student = database.get_student_by_id(sid)
            if student:
                student.drop_student()
            else:
                print("Invalid student ID.")

        elif choice =='4':
            print("Exiting program.")
            break

        else:
            print("Invalid . Please try again.")


# 3.students
db = StudentDatabase()
s1 = Student('128411',"Ayeon","CSE",db)
s2 = Student('128412',"Maruf","CSE",db)
s3 = Student('128413',"Priya","CSE",db)

# Run the menu
menu(db)
