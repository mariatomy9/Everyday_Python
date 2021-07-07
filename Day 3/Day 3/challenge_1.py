#Challenge 1 (Day 3)

#function to calculate sum of odd divisors
def odivsum(n):
    s = 0
    for i in range(1, n + 1):
        if n % i == 0 and i % 2 == 1:
            s += i
    return s

for t in range(int(input())):
    a, b = map(int,input().split())
    s = 0
    for i in range(a, b + 1):
        s += odivsum(i)
    print(s)
        
        