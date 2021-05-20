import sys
s = list(sys.stdin.readline())  # 처음에 공백이 올 수 있으므로 strip을 하면 안 됨

for i in range(len(s)):
    ch = s[i]
    if ch.isupper():
        if(ord(ch)+13 > ord('Z')):
            s[i] = chr(ord(ch)-13)
        else:
            s[i] = chr(ord(ch)+13)
    elif ch.islower():
        if(ord(ch)+13 > ord('z')):
            s[i] = chr(ord(ch)-13)
        else:
            s[i] = chr(ord(ch)+13)
    else:
        continue

print(''.join(s))

'''
  if ch.isupper():
    s[i] = chr((ord(ch)-ord('A')+13)%26+ord('A'))
  elif ch.islower():
    s[i] = chr((ord(ch)-ord('a')+13)%26+ord('a'))
  else:
    continue

'''
