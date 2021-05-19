import sys
s = list(sys.stdin.readline().strip())
alphabet = [0] * 26

for i in range(len(s)):
    alphabet[ord(s[i])-97] += 1

for i in range(len(alphabet)):
    print(alphabet[i], end=" ")

'''
alphabet = 'abcdefghijklmnopqrstuvwxyz'

for i in alphabet:
  if i in s:
    print(s.count(i), end=' ')
  else:
    print(0, end=' ')
'''
