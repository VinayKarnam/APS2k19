

t=int(input())
for i in range(t):
    n=int(input())
    k=int(input())
    if(k%n==0):
        print("0")
    else:
        extra=k%n
        if(extra==(n-extra)):
            print((2*extra)-1)
        else:
            print(2*(min(extra,(n-extra))))