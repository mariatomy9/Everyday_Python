#challenge 1

t = int(input())

for i in range(t):
    	s = input()
    	o = 0
    	b = 0
    	for j in s:
        	if j == 'o':
            		o += 1
        	elif j == 'b':
            		b += 1
    	if o >= b:
        	print(b)
    	else:
        	print(o)