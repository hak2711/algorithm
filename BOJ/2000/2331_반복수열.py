import sys

a, p = map(int, sys.stdin.readline().split())
nums = [a]
repeated = []

while True:
    if repeated:
        x = str(repeated[-1])
    else:
        x = str(nums[-1])
    newNum = sum(int(x[i])**p for i in range(len(x)))
    if newNum in nums:
        nums.remove(newNum)
        if repeated:
            if repeated[0] == newNum:
                break
        repeated.append(newNum)
    else:
        nums.append(newNum)

print(len(nums))


'''
import sys

a,p = map(int, sys.stdin.readline().split())
nums = [a]
repeated = []

while True:
  x = str(nums[-1])
  newNum = sum(int(x[i])**p for i in range(len(x)))
  if newNum in nums:
    print(nums.index(newNum))
    break
  else:
    nums.append(newNum)
'''
