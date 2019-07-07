#include<stdio.h>
#include<string.h>



int G[100][100];
int visited[100];
int n,clock;
int pp[100][2];


void DFS(int i)
{
    int j;
	//printf("\n%d",i);
    clock++;
    pp[i][0]=clock;
    visited[i]=1;
	
	for(j=0;j<n;j++)
       if(!visited[j]&&G[i][j]==1)
       {
           DFS(j);
          
       }
            
    clock++;
    pp[i][1]=clock;

    
}




int main()
{
    int nn,i,j,src,edge;
    clock=0;
    memset(G,0,sizeof(G));
    memset(visited,0,sizeof(visited));
    memset(pp,0,sizeof(pp));
    scanf("%d %d %d",&nn,&edge,&src);
    n=nn;
    while(edge--)
    {
        scanf("%d %d",&i,&j);
        G[i][j]=1;
        G[j][i]=1;
    }
    DFS(src);

   
    
        for(j=0;j<n;j++)
        {
            if(visited[j]==0)
            {
                DFS(j);
            }
        }
    
        for(i=0;i<n;i++)
        {
            printf("%d %d %d\n",i,pp[i][0],pp[i][1]);
        }
   

}