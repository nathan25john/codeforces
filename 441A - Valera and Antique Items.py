n, v = map(int, raw_input().split())
l = []
for i in range(n):
  if any(x < v for x in map(int, raw_input().split())):
    l.append(str(i + 1))
print len(l)
print ' '.join(l)
