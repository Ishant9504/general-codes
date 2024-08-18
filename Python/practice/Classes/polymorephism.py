#WAP to implemente the concept of Polymorphism 
class Person:
    def __init__(self,name,age,gender):
        self.name=name
        self.age=age
        self.gender=gender

    def display(self):
        print(f"Name:{self.name}\nAge:{self.age}\nGender:{self.gender}")

    def Type(self):
        print("A person")

class Animal:
    def __init__(self,name,species,gender):
        self.name=name
        self.species=species
        self.gender=gender

    def display(self):
        print(f"Name:{self.name}\nSpecies:{self.species}\nGender:{self.gender}")
    
    def Type(self):
        print("An animal")

person=Person("person",14,"M")
animal=Animal("animal","animal","F")

for breed in (person,animal):
    breed.display()
    breed.Type()


