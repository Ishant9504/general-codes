#WAP to implement Loops

#1
result = ["heads","tails","tails","heads","tails","heads","heads","tails","tails","tails"]
count=0
for i in result:
    if i=="heads":
        count+=1
print("Count of heads was:",count)

#2
for j in range(1,11):
    while j%2!=0:
        print(f"The square of {j} is:{j**2}")
        j+=1
#3
i=0
expense_list = [2340, 2500, 2100, 3100, 2980]
expense=int(input("Enter the expense for the month"))
months=["jan","feb","march","april","may"]
for i in range(len(expense_list)):
    if expense==expense_list[i]:
        print(f"Expense {expense} was in the month of {months[i]}")
    else:
        print("Expense entered doesn't match the expense of the months")
        break

#4    
for i in range(0,4):
    print("You've completed a Km, do you want to continue? Y/N")
    uChoice=str(input("Enter your choice Yes or No::"))
    if uChoice.lower()=="yes":
        if(i==3):
            print("Congratulations!! You've finished the race")
        continue
    elif uChoice.lower()=="no":
        print("You've not completed the race shame on you")
        break        

#5
for i in range(0,5):
    print("*"*(i+1))
    