a, b = map(int, input().split())
sol = 0
while a<=b:
	sol+=1
	a *= 3
	b *= 2
print(sol)