t = int(input())
while t:
    t -= 1
    n, x = map(int, input().split())
    sum = 0
    l = -1
    r = -1
    lo=list(map(int, input().split()))
    for i in range(n):
        a = lo[i]
        if a % x:
            if l == -1:
                l = i
            r = i
        sum += a
    if sum % x:
        print(n)
    elif l == -1:
        print(-1)
    else:
        print(n - min(l+1, n-r))