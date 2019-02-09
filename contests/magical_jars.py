
t=int(input())

for i in range(t):
    n=int(input())
    l=[]
    s=input()
    l=s.split()
    sum=0
    for j in range(n):
        sum=sum+int(l[j])
    print(sum-n+1)