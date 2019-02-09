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

// Complete the journeyToMoon function below.
void union_set(int* arr,int a,int b,int n)
{
    int i,c;
    c=arr[a];
    for(i=0;i<n;i++)
    {
        if(arr[i]==c)
        arr[i]=arr[b];
    }

}


int find(int* arr,int a,int b,int n)
{
    int r=0;
    if(arr[a]==arr[b])
    {
        r=1;
    }
    return r;

}

int journeyToMoon(int n, int astronaut_rows, int astronaut_columns, int** astronaut) {

 int arr[100010],i,j,result,count[100010];
    for(i=0;i<n;i++)
    {
        arr[i]=i;
        count[i]=0;
    }

    for(i=0;i<astronaut_rows;i++)
    {
         union_set(arr,astronaut[i][0],astronaut[i][1],n);
    }

    for(i=0;i<n;i++)
    {
        count[arr[i]]=count[arr[i]]+1;
    }
// for(i=0;i<n;i++)
//     {
//         printf("%d\n",count[i]);
//     }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            result=result+(count[i]*count[j]);
        }
    }


return result;;
}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char** np = split_string(readline());

    char* n_endptr;
    char* n_str = np[0];
    int n = strtol(n_str, &n_endptr, 10);

    if (n_endptr == n_str || *n_endptr != '\0') { exit(EXIT_FAILURE); }

    char* p_endptr;
    char* p_str = np[1];
    int p = strtol(p_str, &p_endptr, 10);

    if (p_endptr == p_str || *p_endptr != '\0') { exit(EXIT_FAILURE); }

    int** astronaut = malloc(p * sizeof(int*));

    for (int i = 0; i < p; i++) {
        *(astronaut + i) = malloc(2 * (sizeof(int)));

        char** astronaut_item_temp = split_string(readline());

        for (int j = 0; j < 2; j++) {
            char* astronaut_item_endptr;
            char* astronaut_item_str = *(astronaut_item_temp + j);
            int astronaut_item = strtol(astronaut_item_str, &astronaut_item_endptr, 10);

            if (astronaut_item_endptr == astronaut_item_str || *astronaut_item_endptr != '\0') { exit(EXIT_FAILURE); }

            *(*(astronaut + i) + j) = astronaut_item;
        }
    }

    int astronaut_rows = p;
    int astronaut_columns = 2;

    int result =  journeyToMoon(n, astronaut_rows, astronaut_columns, astronaut);

    fprintf(fptr, "%d\n", result);

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
