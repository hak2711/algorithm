import sys
s = sys.stdin.readline().strip()
prefix = []

for i in range(len(s)):
    prefix.append(s[i:])

for item in sorted(prefix):
    print(item)
