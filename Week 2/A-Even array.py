t=int(input())
for k in range(t):
  n=int(input())
  T=list(map(int,input().split()))
  p,m=0,0
  for i in range(0,n,2):
    if(T[i]%2!=0):
        p+=1
  for j in range(1,n,2):
    if(T[j]%2!=1):
        m+=1
  if(m==p):print(p)
  else:print('-1')