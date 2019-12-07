n, m, q = map(int, input().split())
Matrix = [[0]*m for i in range(n)]

for i in range(0, q):
  a, b, c, d, k = map(int, input().split())

  for j in range(a-1, c):
    for l in range(b-1, d):
      Matrix[j][l] += k

print(Matrix)