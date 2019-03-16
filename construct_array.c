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
long int a[100010],b[100010];
// Complete the countArray function below.
long countArray(int n, int k, int x) {
    // Return the number of ways to fill in the array.
     long int i,mod;
    mod=pow(10,9)+7;
    memset(a,0,sizeof(a[0])*100010);
    memset(b,0,sizeof(b[0])*100010);
    if(x==1)
    {
        a[0]=1;
        b[0]=0;
    }
    else
    {
        a[0]=0;
        b[0]=1;
    }

    for(i=1;i<=k;i++)
    {
        a[i]=b[i-1]%mod;
        b[i]=((a[i-1]*(k-1))+(b[i-1]*(k-2)))%mod;
    }
    printf("%ld",a[k]);
    return a[i-1];

}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char** nkx = split_string(readline());

    char* n_endptr;
    char* n_str = nkx[0];
    int n = strtol(n_str, &n_endptr, 10);

    if (n_endptr == n_str || *n_endptr != '\0') { exit(EXIT_FAILURE); }

    char* k_endptr;
    char* k_str = nkx[1];
    int k = strtol(k_str, &k_endptr, 10);

    if (k_endptr == k_str || *k_endptr != '\0') { exit(EXIT_FAILURE); }

    char* x_endptr;
    char* x_str = nkx[2];
    int x = strtol(x_str, &x_endptr, 10);

    if (x_endptr == x_str || *x_endptr != '\0') { exit(EXIT_FAILURE); }

    long answer = countArray(n, k, x);

    fprintf(fptr, "%ld\n", answer);

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
