def numOfDivisor(n):
    answer = 1  # 자기 자신
    for i in range(1, n):
        if(n % i == 0):
            answer += 1
    return answer


def solution(left, right):
    answer = 0
    for i in range(left, right+1):
        if(numOfDivisor(i) % 2 == 0):
            answer += i
        else:
            answer -= i
    return answer


'''
def solution(left, right):
    answer = 0
    for i in range(left,right+1):
        if int(i**0.5)==i**0.5: #i가 제곱수인 경우에만 약수의 개수가 홀수
            answer -= i
        else:
            answer += i
    return answer
'''
