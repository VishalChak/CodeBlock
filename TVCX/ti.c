int partition(int *arr,int l,int r)
{
    int i=l,j=r,t,q=arr[l];
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
    arr[l]=arr[j];
    arr[j]=q;
    return j;
}

void rank(int *arr,int l,int r)
{
  int p;
  if(l<r)
  {
      p=partition(arr,l,r);
      rank(arr,l,p-1);
      rank(arr,p+1,r);
    }
}

void check(int *arr,int n)
{
    int count=0,count2=0,i;
    for(i=0;i<n-1;i++)
    {
      if(arr[i]==arr[i+1])
        count++;
      else
      {
          if(count!=0)
          {
              count2=count2+((count+1)*count);
              count=0;
          }
      }
    }
    printf("%d",count2);
}


int main()
{
   int t,j,n,i;
   scanf("%d",&t);
   for(j=0;j<t;j++)
   {
       scanf("%d",&n);
       int arr[n];
       for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
       rank(arr,0,n-1);
       for(i=0;i<n;i++)
        printf("%d",arr[i]);
       //check(arr,n);
   }

}
