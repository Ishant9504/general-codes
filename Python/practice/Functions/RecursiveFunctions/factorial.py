#WAP to find the factorial of a number using recursion
factorial=1
def fact(num):
    if num==1 or num==0:
        return 1
    else:

        return num*fact(num-1)
    
print(fact(5))