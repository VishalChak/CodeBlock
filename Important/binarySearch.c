#include<stdio.h>
int main()
{
    int x,i,key;
    scanf("%d",&x);
    int arr[x];
    for(i=0;i<x;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&key);
    key =ser(arr,key,0,x-1);
    printf("%d",key+1);

}
int ser(int arr[],int key,int b,int t)
{
    int mid=(b+t)/2;

    if(key==arr[mid])
        return mid;
    else if(key>arr[mid]&&key<arr[t])
        ser(arr,key,mid+1,t);
    else if(key<arr[mid]&&key>arr[b])
        ser(arr,key,b,mid-1);
    else
    {
     printf("not found\n");
     return -1;
    }
}
