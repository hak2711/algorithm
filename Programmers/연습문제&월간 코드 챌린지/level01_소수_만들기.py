from itertools import combinations


def prime_num(n):
    for i in range(2, int(n**0.5)+1):
        if n % i == 0:
            return 0
    return 1


def solution(nums):
    return sum(prime_num(sum(c)) for c in combinations(nums, 3))
