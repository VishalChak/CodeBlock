int main()
{
    int n,i,x,j,sum;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int t;
    scanf("%d",&t);
   for(i=0;i<t;i++)
   {
       sum=0;
       scanf("%d",&x);
       for(j=0;j<n;j++)
        arr[j]=arr[j]+x;
       for(j=0;j<n;j++)
       {
           if(arr[j]<0)
            sum=sum+(-arr[j]);
           else
            sum=sum+arr[j];

       }
       printf("%d",sum);

   }
   return 0;
}
