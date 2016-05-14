int main()
{
    int n,i;
    scanf("%d",&n);
    int * arr=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int max=0,max_end=0;
    for(i=0;i<n;i++)
    {
        max_end=max_end+arr[i];
        if(max_end<0)
            max_end=0;
        if(max<max_end)
            max=max_end;
    }
    printf("%d",max);
}
