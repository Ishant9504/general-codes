# WAP to implement the set data structure 

list=[1,2,3,5,6,12,1,23,42,3]
list2=set(list)
print(list2)
print(12 in list2)

list2.add(9)
print(list2)
print(9 in list2)
list=set(list)
list.update(list2)
print(list)

list.add(123)
list4=list.update(list2)
print(list4)

list3=list2.union(list)
print(list3)