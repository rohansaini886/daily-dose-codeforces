n = int(input())
l = list(map(int, input().split(" ")))
count = 0
exp = 0
q = l
if l[0] == max(l):
    count = count
else:
    for i in range(n):
        
        if l[0] == max(l):
            break
        else:
            k = l.index(max(l))
            t = l[k-1]
            l[k-1] = l[k]
            l[k] = t
            count += 1
if l[-1] == min(l):
    count = count
else:
    if l.count(min(l)) > 1:
        for i in range(1, n+1):
            if l[-i] == min(l):
                exp = n - i
    for i in range(n):
        
        if l[-1] == min(l):
            break
        else:
            k = l.index(min(l))
            t = min(l)
            l[k] = t + 1
            l[k+1] = t
            count += 1

    
print(count - exp)
