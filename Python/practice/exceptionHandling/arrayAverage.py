#WAP to find average of the elements in an integer array using try and catch

array=[]
for i in range(0,9):
    array.append(9-i)

try:
    average=sum(array)/len(array)
    print(average,"\n")
except:
    print("Make sure the array is an integer array")
finally:
    print("Hope you got the results for the average")
