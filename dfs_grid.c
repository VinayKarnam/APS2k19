// Complete the connectedCell function below.
int vis[11][11];
int max,count,m,n;

int isvalid(int i,int j,int** matrix)
{
    if(i>=0 && j>=0 && i<m && j<n && vis[i][j]==0 && matrix[i][j]==1)
    return 1;
    else
    return 0;
}

void DFS(int i,int j,int** matrix)
{
    static int row[]={-1, -1, -1,  0, 0,  1, 1, 1};
    static int col[]={-1,  0,  1, -1, 1, -1, 0, 1};
    int k;
    vis[i][j]=1;
    for(k=0;k<8;k++)
    {
        if(isvalid(i+row[k],j+col[k],matrix))
        {
            count++;
            DFS(i+row[k],j+col[k],matrix);
        }
    }
}

int connectedCell(int matrix_rows, int matrix_columns, int** matrix) {

    int i,j;
    max=0;
    memset(vis,0,sizeof(vis));
    m=matrix_rows;
    n=matrix_columns;
    for(i=0;i<matrix_rows;i++)
    {
        for(j=0;j<matrix_columns;j++)
        {
            count=0;
            if(vis[i][j]==0 && matrix[i][j]==1)
            {
                count++;
                DFS(i,j,matrix);
                if(count>max)
                {
                    max=count;
                }
            }
        }
    }


return max;


}
