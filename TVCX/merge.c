void merge(int *arr,int l,int m,int r)
{
    int n1,n2,i,j,k;
    n1=m-l+1;
    n2=r-m;
    int lr[n1],rr[n2];
    for(i=0;i<n1;i++)
        lr[i]=arr[l+i];
    for(j=0;j<n2;j++)
        rr[j]=arr[m+1+j];

     i=0;j=0,k=l;
     while(i<n1&&j<n2)
     {
         if(lr[i]<=rr[j])
         {
            arr[k]=lr[i];
            i++;
         }
         else
         {
             arr[k]=rr[j];
             j++;
         }
         k++;
      }
      while(i<n1)
      {
          arr[k]=lr[i];
          i++;
          k++;
      }
      while(j<n2)
      {
          arr[k]=rr[j];
          j++;
          k++;
      }



}


void msort(int *arr,int l,int r)
{
    int m;
    if(r>l)
    {
        m=(l+r)/2;
        msort(arr,l,m);
        msort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}


int main()
{
  int arr[9999];
  int n,i;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
msort(arr,0,n-1);

for(i=0;i<n;i++)
    printf("%d ",arr[i]);
}
