decimalNo=17
binNo=bin(decimalNo)
print(binNo)
newString='Ishant'
newArr=list(newString)
newArr[2]="2"
newString=''
print(newArr)
for i in range(len(newArr)):
    newString=newString+newArr[i]
print(newString)