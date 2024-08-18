#WAP to implement the concept of Inheritance 
class Person:
    def __init__(self,name,age,gender):
        self.name=name
        self.age=age
        self.gender=gender
    def display(self):
        print(f"Name:{self.name}\nAge:{self.age}\nGender:{self.gender}")

class Teacher(Person):
    def __init__(self,name,subject,age,gender):
        self.subject=subject
        Person.__init__(self,name,age,gender)
    def display(self):
        print(f"Name:{self.name}\nSubject:{self.subject}\nAge:{self.age}\nGender:{self.gender}")
    
Human=Person("No",16,"M")
Human.display()
print()

NewHuman=Teacher("Nope","Maths",20,"M")
NewHuman.display()
print()