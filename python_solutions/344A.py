n = int(input())
l = []
count = 0
for i in range(1, n + 1):
    l.append(input())
    if i > 1:
        if l[i - 1] != l[i - 2]:
            count += 1
print(count + 1)
