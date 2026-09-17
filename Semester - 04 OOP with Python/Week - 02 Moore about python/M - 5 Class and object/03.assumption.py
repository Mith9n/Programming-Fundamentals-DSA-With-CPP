# ➤ ক্লাস (Class) তৈরি করা হল
class Student:
    # ➤ ক্লাস অ্যাট্রিবিউট (Class Attribute) → এটি সব student object এর জন্য একই হবে
    school_name = "ABC International School"  

    # ➤ Constructor (__init__) → এটি একটি Instance Method, যা প্রতিটি নতুন Object তৈরি হলে চালু হয়
    def __init__(self, name, marks):  
        self.name = name      # ➤ Instance Attribute → প্রতিটি Object-এর জন্য আলাদা
        self.marks = marks    # ➤ Instance Attribute → প্রতিটি Student এর আলাদা marks থাকবে

    # ➤ Instance Method → এটি একটি নির্দিষ্ট student object এর জন্য কাজ করে
    def get_marks(self) -> int:  
        return self.marks  # ➤ `self.marks` মানে এই instance এর marks return করবে

    # ➤ Class Method → এটি পুরো class এর সাথে কাজ করে, নির্দিষ্ট object এর সাথে নয়
    @classmethod
    def get_school_name(cls) -> str:
        return cls.school_name  # ➤ `cls.school_name` মানে পুরো ক্লাসের school_name return করবে

    # ➤ Static Method → এটি নির্দিষ্ট Object বা Class Attribute এর উপর নির্ভর করে না, শুধু কাজ করে
    @staticmethod
    def is_passed(marks) -> bool:
        return marks >= 40  # ➤ যদি marks 40 বা তার বেশি হয়, তাহলে True return করবে

# ➤ Object (Instance) তৈরি করা হল
student1 = Student("Maruf", 85)
student2 = Student("Ayeon", 35)

# ➤ Instance Method Call (get_marks)
print(student1.get_marks())  # Output: 85 (Maruf-এর marks)
print(student2.get_marks())  # Output: 35 (Ayeon-এর marks)

# ➤ Class Method Call (get_school_name) → এটি Class থেকে ডাকা যায়
print(Student.get_school_name())  # Output: ABC International School

# ➤ Static Method Call (is_passed)
print(Student.is_passed(student1.marks))  # Output: True (85 >= 40)
print(Student.is_passed(student2.marks))  # Output: False (35 < 40)
