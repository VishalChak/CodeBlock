csort(int *arr,int n,int k)
{
    int b[n],c[k];
    int i,j;
    for(i=0;i<k;i++)
    {
        c[i]=0;
    }
    for(j=0;j<n;j++)
        c[arr[j]]=c[arr[j]]+1;
    for(i=0;i<k;i++)
        c[i]=c[i-1]
}
int main()
{
    int n,k;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(i==0)
            k=arr[i];
        else if(k>arr[i])
            k=arr[i];
    }
    csort(arr,n,k);

}
