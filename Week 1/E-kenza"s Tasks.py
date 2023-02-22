s=input()
V="AOYEUIaoyeui"
h=""
for x in s:
    if x not in V:
        h+="."+x
print(h.lower())