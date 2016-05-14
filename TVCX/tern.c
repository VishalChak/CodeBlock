int main()
{
    int n,m,i,j;
    scanf("%d%d",&n,&m);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    i=0;
    while(i<n)
    {
        j=i+1;
        while(j<n)
        {
            chech(arr[i],arr[j]);
            j++;
        }
    }

}

int chech(int x,int y)
{
    int p,q;
    while (x)
    {
        p=x%10;
        q=y%10;
        if(p!=q)
        {
            return 0;
        }
        x=x/10;
        y=y/10;
    }
}
