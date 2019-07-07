#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char** split_string(char*);

int max(int arr_count,int* arr)
{
    int i,max=-999999,ind;
    for(i=0;i<arr_count;i++)
    {
       // printf("%d\t",arr[i]);
        if(max<arr[i])
        {
            max=arr[i];
            ind = i;
        }
    }
   // printf("\n");
    return ind;
}

int min(int arr_count,int* arr)
{
    int i,max=999999,ind;
    for(i=0;i<arr_count;i++)
    {
       // printf("%d\t",arr[i]);
        if(arr[i]<max)
        {
            max=arr[i];
            ind=i;
        }
    }
   // printf("\n");
    return ind;
}

int check(int arr_count,int* arr)
{
    int i,t,flag=0;
    t=arr[0];
    for(i=0;i<arr_count;i++)
    {
        if(t!=arr[i])
        {
            flag=1;
            break;
        }
    }
    return flag;
}

int diff(int arr_count,int* arr,int m,int a)
{
    int i,sum=0;
    for(i=0;i<arr_count;i++)
    {
        if(i!=m)
        {
            sum=sum+abs(arr[m]-(arr[i]+a));
        }
    }
    return sum;
}

// Complete the equal function below.
int equal(int arr_count, int* arr) {

   int flag,m,i,j,count=0,p[3],dp[3],init,mn;
   flag=check(arr_count,arr);
   p[0]=5;
   p[1]=2;
   p[2]=1;
   
   while(flag==1)
   {
         m=max(arr_count,arr);
       memset(dp,0,sizeof(dp[0])*3);
     
       
       init=diff(arr_count,arr,m,0);
       
       for(i=0;i<3;i++)
       {
           dp[i]=diff(arr_count,arr,m,p[i]);
         // printf("%d******\t",dp[i]);
       }
      // printf("\n");
        mn=min(3,dp);
       // printf("%d###\n",mn);
        for(i=0;i<arr_count;i++)
        {
            if(i!=m)
            {
                arr[i]=arr[i]+p[mn];
            }
            //printf("%d%%\t",arr[i]);
        }
       // printf("\n");
        count++;
        flag=check(arr_count,arr);
        // if(count>=4)
        // flag=0;
        //printf("FLAG %d\n",flag);

   }

return count;
}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char* t_endptr;
    char* t_str = readline();
    int t = strtol(t_str, &t_endptr, 10);

    if (t_endptr == t_str || *t_endptr != '\0') { exit(EXIT_FAILURE); }

    for (int t_itr = 0; t_itr < t; t_itr++) {
        char* n_endptr;
        char* n_str = readline();
        int n = strtol(n_str, &n_endptr, 10);

        if (n_endptr == n_str || *n_endptr != '\0') { exit(EXIT_FAILURE); }

        char** arr_temp = split_string(readline());

        int* arr = malloc(n * sizeof(int));

        for (int i = 0; i < n; i++) {
            char* arr_item_endptr;
            char* arr_item_str = *(arr_temp + i);
            int arr_item = strtol(arr_item_str, &arr_item_endptr, 10);

            if (arr_item_endptr == arr_item_str || *arr_item_endptr != '\0') { exit(EXIT_FAILURE); }

            *(arr + i) = arr_item;
        }

        int arr_count = n;

        int result = equal(arr_count, arr);

        fprintf(fptr, "%d\n", result);
    }

    fclose(fptr);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) { break; }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }

        size_t new_length = alloc_length << 1;
        data = realloc(data, new_length);

        if (!data) { break; }

        alloc_length = new_length;
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
    }

    data = realloc(data, data_length);

    return data;
}

char** split_string(char* str) {
    char** splits = NULL;
    char* token = strtok(str, " ");

    int spaces = 0;

    while (token) {
        splits = realloc(splits, sizeof(char*) * ++spaces);
        if (!splits) {
            return splits;
        }

        splits[spaces - 1] = token;

        token = strtok(NULL, " ");
    }

    return splits;
}
