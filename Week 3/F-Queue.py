k, q = 0, ['-1'] * int(input())
for i, a in sorted(enumerate(map(int, input().split())), key = lambda a: a[1]):
    if k < i: k = i
    else: q[i] = str(k - i - 1)
print(' '.join(q))