
void check(int *arr,int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n-1;j++)
        {
            if(arr[j]/arr[i])
            {
                printf("YES");
                break;
            }
        }
    }
}

int main()
{
    int t,n,i,j;
    scanf("%d",&t);
    for(i=0;i<t;i++)
        {
        scanf("%d",&n);
        int arr[n];
        for(j=0;j<n;j++)
        {
           scanf("%d",&arr[j]);
        }
        check(arr,n);

    }
}
