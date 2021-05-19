import sys


def solution(s):
    answer = [0]*4
    for i in range(len(s)):
        x = ord(s[i])
        if 96 < x < 123:
            answer[0] += 1
        elif 64 < x < 91:
            answer[1] += 1
        elif 47 < x < 58:
            answer[2] += 1
        else:
            answer[3] += 1
    answer[3] -= 1
    for i in range(len(answer)):
        print(answer[i], end=" ")
    print()


lines = sys.stdin.readlines()

for s in lines:
    solution(s)

'''
if i.isupper():
elif i.islower():
elif i.isdigit()
elif i == " "
'''