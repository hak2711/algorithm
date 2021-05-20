import sys
s = sys.stdin.readline().strip().split(" ")

for i in range(len(s)):
    if(i % 2 == 0):
        s[i] += s[i+1]
    else:
        s[i] = int(s[i-1])

print(s[1]+s[3])

'''
print(int(s[0]+s[1])+int(s[2]+s[3]))
'''