#WAP to implement the concept of Classes and Object using the access specifiers
class Student:
    def __init__(self,name,course,phone_number):
        self.name=name
        self.course=course
        self.__phone_number=phone_number
    def display(self):
        print(f"""Name of the student is:{self.name} \n,
              Course of the student is:{self.course}\n,
              Phone number of student is:{self.__phone_number}""")
    def __del__(self):
        print("The object was deleted")

    
A=Student("Ishant","Btech",7827054282)
A.display()
print(A.phone_number)
