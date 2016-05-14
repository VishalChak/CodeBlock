int main()
{
    int t,x,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&x);
        int j=0,k=1;
        float re=0;
        while(j<x)
                {
                if(j%2==0)
                    re+=1.0/k;
                else
                    re-=1.0/k;
                k=k+2;
                j++;
            }
        printf("%d\n",re);
    }
}
