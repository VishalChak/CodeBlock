#include<memory.h>
int arr[55555];
int top=0;
struct node
{
    int data;
    struct node *left,*right;

};

struct node * new_node()
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    scanf("%d",&temp->data);
    arr[top++]=temp->data;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
};

void insert(struct node *root,struct node *temp)
{
    if(root->data>=temp->data)
    {
        if(root->left==NULL)
            root->left=temp;
        else
            insert(root->left,temp);
    }
    else
    {
        if(root->right==NULL)
            root->right=temp;
        else
            insert(root->right,temp);
    }
}
int height(struct node *root,int x)
{
    if(root->data==x)
        return 0;
    else
    {
        if(root->data<x)
            return 1+height(root->right,x);
        else
            return 1+height(root->left,x);
    }

}


int depth(struct node *root, int a,int b)
{
    if(root->data>a&&root->data>b)
       depth(root->left,a,b);
    else if(root->data < a && root->data <b)
        depth(root->right,a,b);
    else
        return height(root,a)+height(root,b);


}



void print(struct node *root)
{
    int sum=0,i,j;
    for(i=0;i<top;i++)
    {
        for(j=i+1;j<top;j++)
            sum=sum+depth(root,arr[i],arr[j]);
    }
    printf("%d\n",sum);

}

int main()
{
   int n,i,sum,j,k;
   scanf("%d",&n);
   struct node *root,*temp;
   root=NULL;
   for(i=0;i<n;i++)
   {
       temp=new_node();
       if(root==NULL)
          {
              root=temp;
              printf("0\n");
          }
        else
            {
                insert(root,temp);
                print(root);
            }
    }
    return 0;
}
