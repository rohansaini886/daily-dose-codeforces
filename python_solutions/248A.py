n=int(input())
l,r=0,0
for _ in range(n):
	a,b=map(int,input().split())
	l+=a
	r+=b
print(min(l,n-l)+min(r,n-r))
