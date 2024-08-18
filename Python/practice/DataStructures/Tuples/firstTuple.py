#Indicing and Slicing, len(), max(), min(), .index(), .count()
myTuple=(1,2,4,5,6,72,8,12,23,12,)

print(f"The tuple is{myTuple}")
print(f"The tuple from index 1 to 6 is:{myTuple[1:6]}")

print(f"Length of the tuple is:{len(myTuple)}")

print(f"The max element of the tuple is:{max(myTuple)}")
print(f"The min element of the tuple is:{min(myTuple)}")

print(f"The index of the element 12 of the tuple is:{myTuple.index(12)}")
print(f"The number of occurences of 12 is:{myTuple.count(12)} ")