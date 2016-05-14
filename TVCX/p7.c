#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    char arr[n][100],t[100];

    for(i=0;i<n;i++)
    {
        scanf("%s",arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(arr[i],arr[j])>0)
            {
                strcpy(t,arr[i]);
                srtcpy(arr[i],arr[j]);
                strcpy(arr[j],t);
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%s",arr[i]);
    }
}
