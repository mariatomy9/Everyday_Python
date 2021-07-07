#Challenge 2 (Day 3)

for t in range(int(input())):
    n, k = map(int,input().split())
    arr = list(map(int,input().split()))
    s = arr[0]
    a = []
    
    #creating array of size n*k
    for i in range(k):
        a.extend(arr)
    
    #check sum of all sub-arrays by brute force    
    for i in range(len(a)):
        for j in range(i,len(a)):
            if sum(a[i:j+1]) > s:
                s = sum(a[i:j+1])
    
    print(s)