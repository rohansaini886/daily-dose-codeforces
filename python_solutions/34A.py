n = int(input())
arr = list(map(int, input().split(" ")))
l = [] 
for i in range(1, n):
    l.append(abs(arr[i] - arr[i-1]))
l.append(abs(arr[0] - arr[-1]))
idx = l.index(min(l))
if idx == n - 1:
    print(idx + 1, 1)
else:
    print(idx + 1, idx + 2)
