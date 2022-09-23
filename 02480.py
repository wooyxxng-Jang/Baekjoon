dice = []
a,b,c=map(int,input().split())
dice.append(a)
dice.append(b)
dice.append(c)
dice.sort()

a=dice[0]
b=dice[1]
c=dice[2]

if a<b<c:
  print(100*c)
elif a==b!=c or a!=b==c :
  print(1000+b*100)
else :
  print(10000+a*1000)
