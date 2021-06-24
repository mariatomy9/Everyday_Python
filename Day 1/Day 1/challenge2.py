#Challenge 2 (Day 1)

t=int(input())
for p in range(t):
    n=int(input())
    mark=[0,0,0,0,0,0,0,0]
    for i in range(n):
        a,b=map(int,input().split())
        if a<9 and b>mark[a-1] :
            mark[a-1]=b
    print(sum(mark))