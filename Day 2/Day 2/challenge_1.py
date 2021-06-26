#Challenge 1 (Day 2)

for t in range(int(input())):
    n ,k = map(int,input().split())
    s = input()
    ss = ''
    
    cl = 0
    
#creating string of length n*k
    for j in range(k):
        ss += s

#counting number of 'l' after each 'c'    
    for j in range(len(ss)-1):
        if ss[j] == 'c':
            for k in range(j,len(ss)):
                if ss[k] == 'l':
                    cl += 1
    print(cl)
                    