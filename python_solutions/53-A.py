s = input()
count_lower = 0
count_upper = 0
lower_alpha = "abcdefghijklmnopqrstuvwxyz"
upper_alpha = lower_alpha.upper()
for i in s:
    if i in lower_alpha:
        count_lower += 1
    if i in upper_alpha:
        count_upper += 1
        
if count_upper > count_lower:
    print(s.upper())
else:
    print(s.lower())
