import sys

n, b = map(int, sys.stdin.readline().strip().split())

answer = ''
alpha = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'

while(n >= b):
    index = n % b
    if(index > 9):
        answer += alpha[index-10]
    else:
        answer += str(index)
    n = n//b

if(n > 9):
    answer += alpha[n-10]
else:
    answer += str(n)

print(answer[::-1])


'''
items = '0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ'
answer += str(items[n%b])
'''

'''
index += 48 + 7 * (index > 9)
answer += chr(index)
'''
