s=input()
t=[]
u=[]
alpha=[0]*26
for i in s:
	alpha[ord(i)-97]+=1
for i in s:
	t+=i
	alpha[ord(i)-97]-=1
	while( t and sum(alpha[:(ord(t[-1])-97)])==0):
		u+=t[-1]
		t.pop()
print("".join(u))