#include<string.h>
void rev(int s,int e,char *arr)
{
    char temp;
    while(e>s)
    {
        temp=arr[s];
        arr[s]=arr[e];
        arr[e]=temp;
        e--;
        s++;
    }

}

int main()
{
    int i,s,e;
     char arr[99999];
     gets(arr);
     rev(0,strlen(arr)-1,arr);
     for(s=0,e=0;e<strlen(arr);e++)
     {
         if(arr[e]!=' ')
         {
             s=e;
             while(arr[e]!=' '&&e<strlen(arr))
                e++;
             e--;
             rev(s,e,arr);
         }

    }
     for(i=0;i<strlen(arr);i++)
     {
        printf("%c",arr[i]);
     }
    // printf("vv");

}
