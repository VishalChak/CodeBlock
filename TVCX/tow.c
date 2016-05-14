void tow(int n,char x,char y,char z)
{
   if(n>0)
   {
       tow(n-1,x,z,y);
       printf("Move %c  -> %c\n" ,x,y);
       tow(n-1,z,y,x);
   }
}


int main()
{
    int n;
    scanf("%d",&n);
    tow(n,'A','B','C');
}
