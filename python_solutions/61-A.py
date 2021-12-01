s_1 = input()
s_2 = input()
result = ""
for i in range(len(s_1)):
    if s_1[i] != s_2[i]:
        result += "1"
    else:
        result += "0"
print(result)
