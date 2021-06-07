def solution(d, budget):
    answer = 0
    sum = 0

    for item in sorted(d):
        if(budget >= (sum+item)):
            sum += item
            answer += 1

    return answer


'''
def solution(d, budget):
    d.sort()
    while budget < sum(d):
        d.pop()
    return len(d)
'''
