int main()
{
    int x;
    printf("no of plates");
    scanf("%d",&x);
    toh(x-1,'a','b','c');
}

void toh(int n,char x,char y,char z)
{
    if(n>0)
    {
        toh(n-1,x,z,y);
        printf("  %c-> %c\n",x,y);
        toh(n-1,z,y,x);
    }

}
