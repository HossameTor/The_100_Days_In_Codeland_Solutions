wire = input()
s=[]
for c in wire :
     if len(s)!=0 and s[-1]==c:
          s.pop()
     else:
          s.append(c)
if len(s):
     print('No')
else:
     print('Yes')