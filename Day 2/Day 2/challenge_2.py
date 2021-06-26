#Challenge 2 (Day 2)

for i in range(int(input()):
    n = int(input())
    s = input()
    freq = {}

#creating dictionary with each possible substring from the start as keys and frequencies as values    
    for j in range(n,0,-1):
        freq[s[0:j]] = s.count(s[0:j])

#sorting dictionary based on values        
    freqs = {k: v for k, v in sorted(freq.items(), key=lambda item: item[1], reverse = True)}
    
    print(list(freqs.keys())[0])