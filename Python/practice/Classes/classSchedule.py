#WAP to implemet the concept of classes and using constructor and destructor
class ClassSchedule:
    def __init__(self,course):
        self.course=course
        print("The object was succesfully created")
    def displayCourse(self):
        print(f"The course of the student is:{self.course}")
    def __del__(self):
        print("The object was succesfully destroyed")

schedule= ClassSchedule("Chemistry")
schedule.displayCourse()
del schedule