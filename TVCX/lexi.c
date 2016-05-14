#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i,max,min,k;
    scanf("%d%d",&n,&k);
    int arr[n],count=0,t;
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    for(i=0;i<n;i++)
        {
        if(arr[i]!=(n-i)&&count==0)
            {
            max=i;
            count=1;
        }
        if(count==1)
            {
            if(arr[i]==arr[max]+1)
                {
                min=i;
                break;
               }
        }
    }
    if(count==1)
    {
      t=arr[max];
    arr[max]=arr[min];
    arr[min]=t;
    }

    for(i=0;i<n;i++)
        printf(" %d",arr[i]);
    return 0;
}
