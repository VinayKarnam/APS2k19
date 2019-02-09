

t=input()
count=0
for i in range(0,t):
    s=raw_input()
    val=[]
    for j in s.split():
        val.append(int(j))
    for j in range(1,val[0]+1):
        if((j%val[1]==0 and j%val[2]!=0) or j%val[1]!=0 and j%val[2]==0):
            count=count+1
    if(count==val[3]):
        print('Win')
    else:
        print('Lose')

