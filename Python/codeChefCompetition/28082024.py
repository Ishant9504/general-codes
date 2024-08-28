# cook your dish here
def ans(arr):
    size = len(arr)
    
    i = 0
    while i < size - 1:
        if arr[i] < 0 and arr[i + 1] < 0:
            arr[i] = abs(arr[i])
            arr[i + 1] = abs(arr[i + 1])
        elif (arr[i] < 0 and arr[i + 1] >= 0) or (arr[i] >= 0 and arr[i + 1] < 0):
            if abs(arr[i])>abs(arr[i + 1]):
                arr[i]=abs(arr[i])
            else:
                arr[i + 1]=abs(arr[i + 1])
            break
        i += 1
    
    return sum(arr)

t = int(input())
for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    print(ans(arr))

