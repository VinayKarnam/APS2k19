

 int min(int a,int b)
 {
     return (a>b)?b:a;
 }

 int max(int a,int b)
 {
     return (a<b)?b:a;
 }

int maxHeight(int stickPositions_count, int* stickPositions, int stickHeights_count, int* stickHeights) {

    int i,j,pos_o,pos_e,maxx=0,temp;
    for(i=0;i<stickPositions_count-1;i++)
    {
        int diffp=abs(stickPositions[i]-stickPositions[i+1]);
        int hdiff=abs(stickHeights[i]-stickHeights[i+1]);
        if(diffp<hdiff)
        {
            temp=min(stickHeights[i],stickHeights[i+1])+diffp;
        }
        else  {
            
            float rem=abs((diffp-hdiff));
            rem=ceil(rem/2.0);
            temp=max(stickHeights[i],stickHeights[i+1])+(int)rem;
        }
        if(maxx<temp)
        {
            maxx=temp;
        }
        

    }

return maxx;
}