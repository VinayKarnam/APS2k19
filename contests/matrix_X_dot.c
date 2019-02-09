#include<stdio.h>
#include<string.h>

int main()
{
    int n,i,j,count=0;
    char mat[510][510];
    char s[510];
    scanf("%d",&n);
    if(n<3)
    {
        printf("0");
        return 0;
    }
    
for(i=0;i<510;i++)
{
    for(j=0;j<510;j++)
    {
        mat[i][j]='.';
    }
}

for(i=1;i<=n;i++)
{
    scanf("%s",s);
    for(j=1;j<=strlen(s);j++)
    {
        mat[i][j]=s[j-1];
    }
}

// for(i=0;i<=n+1;i++)
// {
//     for(j=0;j<=n+1;j++)
//     {
//         printf("%c",mat[i][j]);
//     }
//     printf("\n");
// }

for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(mat[i][j]=='X')
            {
                if(mat[i+1][j+1]=='X' && mat[i-1][j-1]=='X' && mat[i-1][j+1]=='X' && mat[i+1][j-1]=='X')
                {
                   count++;
                   
                }
                
            }
        }
    }

printf("%d",count);
return 0;

}