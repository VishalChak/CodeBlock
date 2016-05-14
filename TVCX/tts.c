#include<memory.h>

struct node
{
    int data;
    struct node *left,*right;
};

struct node * new_node()
{
    struct node temp;
    temp=(struct node *)malloc(sizeof(struct node));
    scanf("%d",&temp->data);
    temp->left=NULL;
    temp->right=NULL;
    return temp;
};

void insert(struct node *root,struct node *temp)
{
    if(root)
}

int main()
{
    struct node *root,*temp;
    root=NULL;
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        temp=new_node();
        if(root==NULL)
            root=temp;
        else
        {
            insert(root,temp);
        }
    }

}
