def solution(arr):
    answer = [arr[0]]
    for i in range(1, len(arr)):
        if arr[i-1] == arr[i]:
            pass
        else:
            answer.append(arr[i])
    return answer


'''
def solution(arr):
  answer = []
  for i in arr:
    if answer[-1:] == [i] : continue
    answer.append(i)
  return answer
'''
