n = input()
l = list(n)
code = ""
for i in range(len(l)):
    if len(l) == l.count(""):
        break
    if l[i] == ".":
        code += "0"
        l[i] = ""
    elif l[i] == "-" and l[i+1] == ".":
        code += "1"
        l[i] = ""
        l[i+1] = ""
        i += 1
    elif l[i] == "-" and l[i+1] == "-":
        code += "2"
        l[i] = ""
        l[i+1] = ""
        i += 1
print(code)
