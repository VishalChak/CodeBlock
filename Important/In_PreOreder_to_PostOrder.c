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

post(int *in,int *pre,int n)
{
    int root=search_(in,pre[0],n);

    if(root!=0)
        post(in,pre+1,root);
    if(root!=n-1)
        post(in+root+1,pre+root+1,n-root-1);
    printf("%d ",pre[0]);



}

int main()
{
    int n,i;
    int in[50],pre[50];

    printf("no_of_element");
    scanf("%d",&n);
    printf("Enter_InOrder");
    for(i=0;i<n;i++)
       scanf("%d",&in[i]);
    printf("Enter_PreOrder");
    for(i=0;i<n;i++)
        scanf("%d",&pre[i]);

    printf("Post Order is :");
    post(in,pre,n);
}
