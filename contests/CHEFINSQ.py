


fact=[]
fact.append(1)
fact.append(1)

for i in range(2,52):
    fact.append(i*fact[i])

t=int(input())

for x in range(0,t):
    n,k=[int(i) for i in input().split()]
    print(n," ",k)
    
