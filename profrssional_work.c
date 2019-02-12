#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



void merge(long long arr[], long long l, long long m, long long r) 
{ 
    long long int i, j, k; 
    long long int n1 = m - l + 1; 
    long long int n2 =  r - m; 
  
    /* create temp arrays */
    int L[n1], R[n2]; 
  
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
  
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray 
    j = 0; // Initial index of second subarray 
    k = l; // Initial index of merged subarray 
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    /* Copy the remaining elements of L[], if there 
       are any */
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    /* Copy the remaining elements of R[], if there 
       are any */
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  
/* l is for left index and r is right index of the 
   sub-array of arr to be sorted */
void mergeSort(long long int arr[], long long l, long long r) 
{ 
    if (l < r) 
    { 
        // Same as (l+r)/2, but avoids overflow for 
        // large l and h 
        int m = l+(r-l)/2; 
  
        // Sort first and second halves 
        mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 
  
        merge(arr, l, m, r); 
    } 
} 










int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    long long int n,x,a,b,dp[200050],i,j,temp,count,m;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        count=0;
        memset(dp,0,sizeof(dp[0])*200050);
        scanf("%lld %lld %lld",&n,&m,&x);
        for(j=0;j<n;j++)
        {
            scanf("%lld %lld",&a,&b);
            dp[j]=b-a;
        }
        temp=j;
        for(j=temp;j<temp+m;j++)
        {
            scanf("%lld",&dp[j]);
        }
        mergeSort(dp,0,n+m-1);
        // for(i=0;i<n+m-1;i++)
        // {
        //     printf("%lld\n",dp[i]);
        // }
        
        j=0;
        while(x-dp[j]>=0 && j<n+m-1)
        {
            x=x-dp[j];
            count++;
            j++;
        }
        printf("%lld\n",count);
    }
    return 0;
}