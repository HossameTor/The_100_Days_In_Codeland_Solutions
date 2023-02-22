from math import comb as comb
t=int(input())
for _ in range(t):
    n=int(input())
    L=[int(i) for i in input().split()]
    cpt_max=L.count(max(L))
    cpt_min=L.count(min(L))
    print(min(n*(n-1),comb(cpt_max,1)*comb(cpt_min,1)*2))