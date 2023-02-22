t=int(input())
for _ in range(t):
    n=int(input())
    lst=list(map(int,input().split()))
    sm,cpt,bl=0,0,0
    for i in range(n):
        sm+=lst[i]
        cpt+=i
        if sm<cpt:
            bl=1
            break
    if bl==1:
        print("NO")
    else:
        print("YES")