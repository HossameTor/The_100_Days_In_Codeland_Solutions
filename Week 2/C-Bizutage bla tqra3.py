n=int(input())
for i in range(n):
    c=int(input())
    h=input()
    l=[]
    s=0
    for j in h:
        if j in l:
            s+=1
        else:
            s+=2
        l.append(j)
    print(s)