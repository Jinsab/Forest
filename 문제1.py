import timeit

def is_prime(n):
  if n < 2:
    return False
  if n in (2, 3):
    return True
  if n % 2 is 0 or n % 3 is 0:
    return False
  if n < 9:
    return True
  k, l = 5, n**0.5
  while k <= l:
    if n % k is 0 or n % (k+2) is 0:
      return False
    k += 6
    return True

n = int(input())
cnt = 0
arr = list(map(int, input().split()))

start = timeit.default_timer()

for i in arr:
  if is_prime(i) == True:
    cnt += 1

print(cnt)

stop = timeit.default_timer()
print("time is : ", stop - start)