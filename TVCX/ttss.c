int main()
{
    char arr[9999];
    char *p;
    gets (arr);
    p=strstr(arr,"vishal");
    p=p+6;
    printf("%d  %d",strlen(arr),strlen(p));
}
