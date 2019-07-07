#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<string.h>
int max(int a, int b) { return (a > b)? a : b; }

int knapSack(int W, int wt[], int val[], int n, int id[]) 
{ 
   int i, w,j; 
   int K[n+1][W+1]; 
    int t[n+1][W+1];
    memset(t,0,sizeof(t));
   // Build table K[][] in bottom up manner 
   for (i = 0; i <= n; i++) 
   { 
       for (w = 0; w <= W; w++) 
       { 
           if (i==0 || w==0) 
               K[i][w] = 0; 
           else if (wt[i-1] <= w) {
                 K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]);
                if(val[i-1] + K[i-1][w-wt[i-1]]>= K[i-1][w])
                {
                    t[i][w]=id[i];
                }
               else
                   t[i][w]=id[i-1];
           }
           else{
                 K[i][w] = K[i-1][w];
                t[i][w]=id[i-1];
           }
       } 
   } 

   for(i=0;i<n+1;i++)
   {
       for(j=0;j<w+1;j++)
       {
           printf("%d  ",t[i][j]);
       }
       printf("\n");
   }
  
   return K[n][W]; 
} 



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,id[1000],wt[1000],v[1000],c,i,val;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&id[i],&wt[i],&v[i]);
    }
    scanf("%d",&c);
    val=knapSack(c,wt,v,n,id);
    printf("%d\n",val);
    return 0;
}