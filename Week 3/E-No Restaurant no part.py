n=int(input())
m={}
B=[]
for j in range(n):
    a,b=[int(i) for i in input().split()]
    m[a]=b
    B.append(b)
 
ans=list(set(m.keys())-set(B))
 
ans.append(m.get(0))
for i in range(n-2):
    ans.append(m.get(ans[i]))
 
print(*ans)