int len;

int partition(int arr[],int l,int r){
    int i=l,j=r,q=arr[l],temp;
    while(i<j){
        while(q<=arr[i])
            i++;
        while(q>arr[j])
            j--;
        if(i<j){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    arr[l]=arr[j];
    arr[j]=q;
    return j;
}
void qSort(int arr[],int l,int r){
    if(l<r){
        int p = partition(arr,l,r);
        qSort(arr,l,p-1);
        qSort(arr,p+1,r);
    }
}



int main(){
     int i;
     scanf("%d",&len);
     int arr[len];
     for(i=0; i<len;i++){
        scanf("%d",&arr[i]);
     }
     qSort(arr,0,len-1);
     for(i=0;i<len;i++)
        printf("%d",arr[i]);
}
