#include<memory.h>

struct node
{
    int data;
    struct node *next;
};

struct node *new_node()
{
    struct node *temp;
    temp=(struct node *)malloc (sizeof(struct node));
    scanf("%d",&temp->data);
    temp->next=NULL;
    return temp;
};

void insert(struct node *root,struct node *temp)
{
    while(root->next!=NULL)
        root=root->next;
    root->next=temp;
}

void rearrage(struct node **root)
{
    struct node *temp1,*temp2;
    int count=1;
    temp1=*root;
    temp2=*root->next;
    *root=*root->next->next;
    while()
    {
        if(count%2!=0)
        {
            temp1->next=*root;
        }
        else
        {

        }
    }


}

int main()
{
    struct node *root,*temp;
    root=NULL;
    int x,i;
    scanf("%d",&x);
    for(i=0;i<x;i++)
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
