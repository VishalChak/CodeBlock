int main()
{
    int x,i,k;
    scanf("%d",&x);
    int arr[x];
    for(i=0;i<x;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&k);
    s(arr,x,k);
    printf("%d",arr[x-1-k]);
}

void s(int *arr,int x,int k)
{
    int i,j,t;
    for(i=0;i<k;i++)
    {
        for(j=0;j<x-2-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                t=arr[j+i];
                arr[j+1]=arr[j];
                arr[j]=t;
            }
        }
    }
}
