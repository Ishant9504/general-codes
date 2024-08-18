#USING try and except

num=[1,2,3,4,5,6,7]
names=["Ishant","Devansh","Anshul","Harsh"]

#Tries to execute a piece of code
try:
    print(sum(names),"\n")

#Executes if try fails
except:
    print("cannot print the sum~ they're not numbers \n")

#Executes in either of the scenario that try or except executed
finally:
    print("Hope you got the results you wanted")
