#Q1
lst={"January":2200,"February":2350,"March":2600,"April":2130,"May":2190}
difference=lst["January"]-lst["February"]
if difference>0:
    print(difference)
else:
    print(-1*difference)
sum=lst["January"]+lst["February"]+lst["March"]
print(sum)
print(2300 in lst.values())
lst["June"]=1980
print(lst)
lst["April"]-=200
print(lst)

print("\n!!!!!!Ques 2!!!!!!\n")

#Q2
heros=['spider man','thor','hulk','iron man','captain america']
print(len(heros))
heros.append("black panther")
heros.remove("black panther")
heros.insert(3,"black panther")
print(heros)

heros.sort()
print(heros)