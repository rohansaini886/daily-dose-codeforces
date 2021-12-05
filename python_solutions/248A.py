n=int(input())
x = 0
y = 0
for i in range(n):
	a,b=map(int,input().split())
	x+=a
	y+=b
print(min(x,n-x)+min(y,n-y))
