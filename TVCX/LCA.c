int main()
{
    int i,x=10;
    for(i=31;i>=0;i--)
    {
        if((x &(1<<i))!=0)
            printf("1");
        else
            printf("0");
    }
}
