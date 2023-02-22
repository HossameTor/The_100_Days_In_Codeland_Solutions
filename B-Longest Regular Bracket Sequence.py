s=input()
w,c,b,l=0,1,-1,[]
for i in range(len(s)):
   if s[i]=='(':l.append(i)
   elif l:
      l.pop()
      t=i-l[-1] if l else i-b
      if t>w: w,c=t,1
      elif t==w: c+=1
   else:b=i
print(w,c)