n = int(input())
h = {}
for i in range(n):
    c = input()
    if c in h:
        t=h[c]
        print(c+str(t))
        h[c]+=1
    else:
        print("OK")
        h[c]=1