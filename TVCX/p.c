

swa(char *a,char *b)
{
    char c;
    c=*a;
    *a=*b;
    *b=c;
}

void per(char *arr,int i,int n)
{
    int j;
    if(i==n)
        printf("  %s\n",arr);
    else
    {
        for(j=i;j<=n;j++)
        {
            swa(arr+j,arr+i);
            per(arr,i+1,n);
            swa(arr+j,arr+i);
        }
    }
}
int main()
{
    char arr [50];
    gets(arr);
    per(arr,0,strlen(arr)-1);
}
