matrix = []
for i in range(5):
	matrix.append([int(i) for i in input().split(' ')])
a, b = (0, 0)
for i in range(5):
	if matrix[i].count(1) > 0:
		a, b = (i, matrix[i].index(1))
print(abs(2-a)+abs(2-b))
