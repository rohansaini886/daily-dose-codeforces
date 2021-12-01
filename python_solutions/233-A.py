n = int(input())
if(n % 2 == 1):
    print(-1)
elif(n == 2):
    print("2 1")
else:
    for i in range(1, n+1, 2):
        print(f"{i + 1} {i}", end = " ")
