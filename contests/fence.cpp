#include <iostream> 
#include <unordered_map> 

using namespace std;

int isvalid(long long int n,long long int m,int x,int y)
{
    if(x>0 && x<=m && y>0 && y<=n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

int main()
{
    int t;
    cin>>t;
    int posi[]={0,0,1,-1};
    int posj[]={1,-1,0,0};
    while(t--)
    {
        unordered_map<long long int,long long int> umap;
       long long int n,m,k,x,y,u,sum=0;
        cin>>n>>m>>k;
        for(int i=0;i<k;i++)
        {
            cin>>x>>y;
            u=(x*n)+y;
            if(umap.find(u)==umap.end())
            {
                umap[u]=4;
            }
            for(int j=0;j<4;j++)
            {
                long long int t1,t2;
                t1=x+posi[j];
                t2=y+posj[j];
                if(isvalid(n,m,t1,t2)==1)
                {
                     long long int u1=(t1*n)+t2;
                    if(umap.find(u1)!=umap.end())
                    {
                        umap[u]=umap[u]-1;
                        umap[u1]=umap[u1]-1;

                    }
                }
                
                
                
            }

             
        }
        for(auto itr=umap.begin();itr!=umap.end();itr++)
            {
                sum=sum+itr->second;
            }
            cout<<sum<<endl;  
    }
}