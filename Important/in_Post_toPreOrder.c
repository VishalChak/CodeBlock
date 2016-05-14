int search_(int in[],int x,int n)
{
    int i=0;
    for(i=0;i<n;i++)
    {
        if(in[i]==x)
            return i;
    }
    return -1;
}

print_pre(int *in,int *post,int n)
{
    int root=search_(in,post[n-1],n);
    if(root!=-1)
    printf("%d",post[n-1]);
    if(root!=0)
        print_pre(in,post,root);
    if(root!=n-1)
      print_pre(in+root+1,post+root,n-root-1);

}

int main()
{
    int n,i;
    int in[50],post[50];

    printf("no_of_element");
    scanf("%d",&n);
    printf("Enter_InOrder");
    for(i=0;i<n;i++)
       scanf("%d",&in[i]);
    printf("Enter_PostOrder");
    for(i=0;i<n;i++)
        scanf("%d",&post[i]);

    printf("Pre Order is :");
    print_pre(in,post,n);
}
