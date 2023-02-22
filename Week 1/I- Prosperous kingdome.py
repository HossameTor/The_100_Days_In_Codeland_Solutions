n = int(input()) 
A = [int(x) for x in input().split()] 
X = int(input()) 
 
 
s = set(A)
 
 
for i in A:
    if X - i in s:
        print("YES")
        break
else:
    print("NO")
