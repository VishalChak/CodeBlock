#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



void check(char *arr)
{
   int n=strlen(arr),k;
   char *p;
   p=strstr(arr,"hackerrank");
       p=p+10;
       k=strlen(p);
       if(n-10==k&&k!=0)
        printf("1");
       else if(k==0&&(n-10)!=0)
        printf("2");
        else if(k==0&&(n-10)==0)
            printf("0");
        else
            printf("-1");




}
int main()
{
    int t,i;
    char *arr;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        fflush(stdin);
        arr=(char*)malloc(100*sizeof(char));
        gets(arr);
        puts(arr);
        check(arr);
        free(arr);

    }
    return 0;
}
