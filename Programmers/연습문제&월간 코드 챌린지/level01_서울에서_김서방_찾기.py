def solution(seoul):
    answer = ''
    for i in range(len(seoul)):
        if seoul[i] == "Kim":
            return "김서방은 "+str(i)+"에 있다"

'''
def findKim(seoul):
    return "김서방은 {}에 있다".format(seoul.index('Kim'))
'''