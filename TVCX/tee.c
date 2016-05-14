msort(int arr[],int l,int r)
{
    if(l<r)
    {
        int m=l+(l+r)/2;
        msort(arr,l,m);
        msort(arr,m+1,r);
        merge(arr,l,m,r);
        //printf("%d",m);
    }
}

int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    msort(arr,0,n-1);
}
