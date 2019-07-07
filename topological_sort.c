#include<stdio.h>
#include<string.h>



int G[100][100];
int visited[100];
int n,clock;
int pp[100][2];
int topo[100];
int top;

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
    top++;
    topo[top]=i;

    
}




int main()
{
    top=-1;
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
    
        for(i=top;i>=0;i--)
        {
            printf("%d\n",topo[i]);
        }
   

}