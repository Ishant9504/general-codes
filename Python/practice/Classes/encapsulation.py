#WAP to implement the concept of encapsulation 
class Students:
    def __init__(self,name,Class,__phone_no):
        self.name=name
        self.Class=Class
        self.__phone_no=__phone_no
    
    def __del__(self):
        print("Destructor is called")
    
    def Check_uname(self,UnametoCheck):
        if UnametoCheck.lower()==self.name.lower():
            print("Name is same")
        else:
            print("Different Name")

    def display(self):
        print(f"Name:{self.name}\nClass:{self.Class}\nPhone no:{self.__phone_no}")

stud1=Students("Ishant","CSE-1",7827054282)
stud1.display()
stud1.Check_uname("ishant")