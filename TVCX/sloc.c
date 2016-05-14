int main()
{
    int t;
    scanf("%d",&t);
    int i,b=0;

    for(i=0;i<t;i++)
    {
        int n,j,k;
        scanf("%d",&n);
        int arr[n];
        for(j=0;j<n;j++)
           scanf("%d",&arr[i]);
        for(j=0;j<n;j++)
        {
            if(arr[j]==0||arr[j]==1)
            {}
            else
            {
              for(k=j+1;k<n-1;k++)
               {
                if(arr[k]/arr[j]){
                    b=1;
                break;
               }
               }
          }
        }
        if(b==0)
        printf("YES");
        else printf("NO");
     }
}
