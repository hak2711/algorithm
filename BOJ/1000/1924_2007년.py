month, day = map(int, input().split())
days = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
week = ["MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"]
total = 0

for i in range(month-1):
    total += days[i]

total += (day-1)

print(week[total % 7])
