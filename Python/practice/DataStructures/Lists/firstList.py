#Indexing Slicing len .append .remove .pop 
list=["avc",1,34,[2,34,23,12],"Abc","a",32]

list.append(12)
print(list)

print(list[:15:2])
print(f"Length of the list is:{len(list)}")

length=int(len(list))
print(length)

list.remove(1)
print(list)

print(f"Popped Element from the list is:{list.pop()}")