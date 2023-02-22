t = int(input())
while t:
    t-=1
    n,m = map(int, input().split())
    a = list(map(int,input().split()))
    a.sort()
    if n==2:
        if 2*(a[1]+1)<=m:
            print("YES")
        else:
            print("NO")
        continue
    x = a[n-1]+2
    y = m-a[n-1]
    for i in range(n-2, 1, -1):
        if i%2:
            x+=(a[i]+1)
        else:
            y = y-(a[i]+1)
    if y-x > a[1]:
        print("YES")
    else:
        print("NO")