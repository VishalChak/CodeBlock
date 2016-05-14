#include <stdio.h>

int main()
{
    int t,i;
    scanf("%d",&t);
    int arr[t];
    for(i=0;i<t;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<t;i++)
    printf("%d",arr[i]);
    return 0;
}

