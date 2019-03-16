

t=int(input())

for i in range(t):
    n=int(input())
    l=[]
    s=input()
    l=s.split()
    neg=0
    pos=0
    for j in range(n):
        if(l[j]<0):
            neg=neg+l[j]
        else:
            pos=pos+l[j]
    
    print((pos*pos))