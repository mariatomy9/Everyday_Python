#Challenge 3 (Day 3)

for t in range(int(input())):
    n, k = map(int,input().split())
    arr = list(map(int,input().split()))
    c = 0
    
    for i in arr:
        if i + k > sum(arr) - i:
            c += 1
    print(c)