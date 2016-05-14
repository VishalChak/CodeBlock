#include<memory.h>
struct node
{
    int data,count;
    struct node *left,*right;
};

struct node * new_node()
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    scanf("%d",&temp->data);
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}

void insert(struct node*root,struct node *temp)
{
    if(root->data==temp->data)
    {
        root->count++;
    }
    else if(root->data>temp->data)
    {
        if(root->left==NULL)
            {
                temp->count=1;
                root->left=temp;

            }
        else
            insert(root->left,temp);
    }
    else if(root->data<temp->data)
    {
        if(root->right==NULL)
        {
            temp->count=0;
            root->right=temp;
        }

        else
            insert(root->right,temp);
    }
}

void print(struct node *root)
{
    if(root!=NULL)
    {
        print(root->left);
        printf("%d ",root->data);
        print(root->right);
    }
}
int arr[100];
int i=0;


void ele(struct node *root)
{
    if(root!=NULL)
    {
        arr[i++]=root->count;
        ele(root->left);
        ele(root->right);
    }
}




int main()
{
    int n,i;
    scanf("%d",&n);
    struct node *root,*temp;
    root=NULL;
    for(i=0;i<n;i++)
    {
        temp=new_node();
        if(root==NULL)
        {
            temp->count=1;
            root=temp;
        }
        else
        {
            insert(root,temp);
        }
    }
    ele(root);
    int x=arr[0];
    for(i=0;i<n;i++)
    {
        if(x<arr[i])
        {
            x=arr[i];
        }
    }
    printf("  %d",x);


}
