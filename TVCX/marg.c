void merge(int arr[],int l,int m,int r)
{
    int n1,n2,i,j,k;
    n1=m-l+1;
    n2=r-m;
    int la[n1],ra[n2];
    for(i=0;i<n1;i++)
        la[i]=arr[l+i];
    for(j=0;j<n2;j++)
        ra[j]=arr[m+1+j];
    j=i=0;
    k=l;
    while(i<n1&&j<n2)
    {
        if(la[i]<=ra[j])
        {
            arr[k]=la[i];
        }
        else
        {
            arr[k]=ra[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        arr[k]=la[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k]=ra[j];
        j++;
        k++;
    }
}


void msort(int *arr,int l,int r)
{
    if(l>r)
    {
        int m=l+(r-l)/2;
        msort(arr,l,m);
        msort(arr,m+1,r);
        merge(arr,l,m,r);
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
    for(i=0;i<n;i++)
        printf("%d  ",arr[i]);
    return 0;
}
