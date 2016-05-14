int bin(int *arr,int l,int r,int x)
{
    int m;
  if(l<=r)
  {
      m=(l+r)/2;
      if(arr[m]==x)
        return m;
      else if(arr[m]>x)
        bin(arr,l,m-1,x);
      else if(arr[m]<x)
        bin(arr,m+1,r,x);
  }
  else
    return -1;

}

int  main()
{
    int n,arr[]={1,2,3,4,5,6,7,8,9,10},x;
    scanf("%d",&x);
    int t=bin(arr,0,9,x);
    if(t>=0)
        printf("Yes at %d",t);
    else
        printf("No");
}
