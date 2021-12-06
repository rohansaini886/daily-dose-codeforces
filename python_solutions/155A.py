n = int(input())
l = list(map(int, input().split(" ")))
count  = 0
maxi = l[0]
mini = l[0]
for i in range(1, n):
    if maxi < l[i]:
        maxi = l[i]
        count += 1
    if mini > l[i]:
        mini = l[i]
        count += 1

print(count)
