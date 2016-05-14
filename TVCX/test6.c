#include<memory.h>
struct node
{
    char data ;
    struct node *next;
};

struct node*get_node()
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    scanf("%c",&temp->data);
    temp->next=NULL;
    return temp;
}

struct node * insert(struct node *root,struct node *temp)
{

    while(root->next!=NULL)
        root=root->next;
    root->next=temp;
    return root;
}

int main()
    struct node * root,*temp;
{
    root=NULL;
    int  x;
    scanf("%d",&x);
    while(x)
    {
        temp=get_node();
        if(root==NULL)
        {
            root=temp;
        }
        else
        {
            temp=insert(root,temp);
        }
        x--;
    }


}
