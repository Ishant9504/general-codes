#WAP to implement a dictionary
dict={"china":143,"india":136,"usa":32,"pak":21}

def Print():
    for i in dict:
        j=dict[i]
        print(f"{i}==>{j}")

userChoice=str(input("Enter the choice::"))

if(userChoice.lower()=="print"):
    Print()

elif userChoice.lower()=="add":
    newCountry=str(input("Enter new country name:"))
    if newCountry.lower() in dict:
        print("Cannot add country it already exists!!")
    else:
        popu=int(input("Enter the population of the country:"))
        dict[newCountry]=popu
    Print()

elif userChoice.lower()=="remove":
    newCountry=str(input("Enter new country name:"))
    if newCountry.lower() not in dict:
        print("Cannot remove country as it doesn't exists!!")
    else:
        del dict[newCountry]
    Print()

elif userChoice.lower()=="query":
    newCountry=str(input("Enter new country name:"))
    if newCountry.lower() in dict:
        print(f"The population of your given country is:{dict[newCountry.lower()]}")
    else :
        print("Country doesn't exist")