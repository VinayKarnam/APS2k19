

fib=[]
fib[0]=0
fib[1]=1

for i in range(2,300):
    fib[i]=(fib[i-1]+fib[i-2])/10

t=int(input())

for x in range(0,t):
    n=int(input())
    j=1
    while(n>=(1<<j))
    j=j+1
    ind=1<<(j-1)
    print(fib[ind%300])