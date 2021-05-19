import sys
s = sys.stdin.readline().strip()
alphabet = 'abcdefghijklmnopqrstuvwxyz'

for i in alphabet:
    print(s.find(i), end=' ')

'''
for i in range(ord('a'),ord('z')+1):
  print(s.find(chr(i)), end=' ')
'''
