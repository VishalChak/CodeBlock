int main()
{
    char t[]= "vishal babu chak";
    char p[]="chak";
    int x=check(t,strlen(t),p,strlen(p));
    //printf
    printf("%d",x);
}


int check(int t[] ,int n,int p[],int m)
{
    int i,j;
    for(i=0;i<=n-m;i++)
    {
       j=0;
       if(p[j]==t[i])
       {
        while(j<m&&p[j]==t[i+j])
        {
            //if(p[j]==t[i+j])
            j++;
        }
       }
       if(j==m)
       return i;
    }
    return -1;

}
