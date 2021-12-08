s = input()
l = []
for i in s:
    if i != "+":
        l.append(int(i))
l.sort()
count = 1
for i in l:
    if count == len(l):
        print(i)
    else:
        print(f"{i}+", end = "")
        count += 1
