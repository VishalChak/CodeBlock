toh(int n,char x,char y,char z)
{
    if(n>0)
    {
        toh(n-1,x,z,y);
        printf("%c->  %c\n",x,y);
        toh(n-1,z,y,x);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    toh(n,'A','B','C');
}
