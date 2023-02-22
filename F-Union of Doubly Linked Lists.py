class Node:
    def __init__(self, a, b, c):
        self.a = a
        self.b = b
        self.c = c
node = [Node(0, 0, 0) for i in range(1000)]
n = 0
some_shit = []
 
def f(x):
    if(node[x].c == 0):
        return x
    return f(node[x].c)
 
while True:
    try:
        n = int(input())
    except:
        break
    flag = 1
    some_shit.clear()
    for i in range(1, n + 1):
        a, c = map(int, input().split())
        node[i] = Node(a, i, c)
        if(a == 0):
            some_shit.append(i)
    while len(some_shit) > 0:
        now = some_shit[0]
        some_shit.pop(0)
        if(not flag):
            node[now].a = m
            node[m].c = now
        flag = 0
        m = f(now)
    for i in range(1, n + 1):
        print(node[i].a, node[i].c)