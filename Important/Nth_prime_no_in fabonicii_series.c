int main()
{
    int x;
    scanf("%d",&x);
    check(x);
}
check(int x)
{
    int t=0,temp;
    int a=0,b=1,c;
    while(t!=x)
    {
        c=a+b;
        temp=prime(c);
        if(temp==1)
            t++;
        a=b;
        b=c;
    }
    printf("%d",c);
}
int prime(int c)
{
    int i;
    if(c<2)
        return 0;
    else if (c==2)
        return 1;
    else
    {
        for(i=2;i<=c/2;i++)
        {
           if(c%i==0)
           return 0;
        }
        return 1;

    }
}
