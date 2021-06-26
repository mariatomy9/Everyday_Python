#Challenge 3 (Day 2)

n = int(input())

arr = list(map(int,input().split()))

c = 0

for i in arr:
    if i % 6 == 0 and i % 5 != 0:
        c += 1
        
print(c)