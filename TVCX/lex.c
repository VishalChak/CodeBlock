int partition(char *arr,int l,int r){
 int i=l,j=r;
 char ch=arr[l];
 while(i<j){
  while(arr[i]<=ch)
  i++;
  while(arr[j]>ch)
  j--;
  if(i<j){
    char temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
   }
 }
 arr[l]=arr[j];
 arr[j]=ch;
 return j;

}


void qsort(char* arr,int l,int r)
{
 if(l<r)
 {
  int p=partition(arr,l,r);
  qsort(arr,l,p-1);
  qsort(arr,p+1,r);
 }
}

void swap(char *a,char *b){
 char ch=*a;
 *a=*b;
 *b=ch;
}


void permu(char *arr,char *arr1,int i,int n){
  int j;
  if(i==n-1){
    //if(strcmp(arr,arr1)>1)
    printf("%s\n",arr);

    }

   else{
    for(j=i;j<n;j++)
    {
      swap(arr+i,arr+j);
      permu(arr,arr1,i+1,n);
      swap(arr+i,arr+j);
    }
   }
 }



int main()
{
  int t,i;
  char arr[9999],arr1[9999];
  scanf("%d",&t);
  for(i=0;i<t;i++){
   scanf("%s",&arr);
   strcpy(arr1,arr);
   qsort(arr,0,strlen(arr)-1);
   permu(arr,arr1,0,strlen(arr));
  }
}
