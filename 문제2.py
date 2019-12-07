string = input('')

cnt = 0
flag = False

for i in string:
  if i == '(':
    cnt += 1
  else:
    cnt -= 1
  if cnt < 0:
    print('bad')
    flag = True
    break

if(cnt == 0 and flag is not True):
  print('good')
elif(flag is not True):
  print('bad')