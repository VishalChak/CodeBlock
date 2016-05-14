# define MAX 9999
void swap(char *a,char *b)
{
    char c= *(a);
    *a=*b;
    *b=c;
}
void permutation(char *arr,int i,int n)
{
    int j;
    if(i==n-1)
        printf("  %s\n",arr);
    else
    {
        for(j=i;j<n;j++)
        {
            swap((arr+i),arr+j);
            permutation(arr,i+1,n);
            swap((arr+i),arr+j);
        }

    }
}

int main()
{
    char arr[MAX];
    gets(arr);
    permutation(arr,0,strlen(arr));

}
