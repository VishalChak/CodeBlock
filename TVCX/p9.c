#include<stdio.h>
int main()
{
    char arr1[256];
    char arr2[256];
    fgets(arr1,256,stdin);
    fgets(arr2,256,stdin);
    int i,j=0,l=0;
    for(i=0;i<strlen(arr1);i++)
    {
        if(arr1[i]==arr2[j]&&j!=strlen(arr2))
        {
          j++;;

        }
        else if(j!=strlen(arr2))
        {
            j=0;
        }

    }
    if(j==strlen(arr2))
    {
        printf("%s",arr1-strlen(arr2));
    }
}
