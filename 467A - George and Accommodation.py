i = 0
for _ in range(input()):
  x = map(int, raw_input().split())
  if x[0] + 2 <= x[1]:
    i += 1
print i
