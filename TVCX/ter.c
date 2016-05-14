int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    qsort(arr,0,n-1);

    for(i=0;i<n;i++)
        printf("%d",arr[i]);
}

qsort(int *arr,int l,int r)
{
    int p;
    if(l<r)
    {
        p=partition(arr,l,r);
        qsort(arr,l,p-1);
        qsort(arr,p+1,r);
    }
}

int partition(int *arr,int l,int r)
{
    int i=l,q=arr[l],j=r,t;
    while(i<j)
    {
        while(arr[i]<=q)
            i++;
        while(arr[j]>q)
            j--;
        if(i<j)
        {
            t=arr[i];
            arr[i]=arr[j];
            arr[j]=t;
        }
    }
    arr[i]=arr[j];
    arr[j]=q;
    return j;

}
