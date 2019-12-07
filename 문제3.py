n = int(input())
cnt = 1
switch = True

Matrix = [[0]*n for i in range(n)]
print(Matrix)

for i in range(0, n):
    for j in range(0, n):
        if switch:
            Matrix[n - (j + 1)][i] = cnt
            cnt = cnt + 1
        else:
            Matrix[j][i] = cnt
            cnt = cnt + 1

    if switch:
        switch = False
    else:
        switch = True

print(Matrix)