int main()
{
    char arr[999];
    scanf("%[^\n]s",arr);
    int i=0,count=0;
    while(arr[i]!='\0')
    {
      count++;
      i++;
    }
    printf("%d",count);
}
