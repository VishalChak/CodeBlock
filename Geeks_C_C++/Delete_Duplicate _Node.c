#include<memory.h>
struct node
{
  int data;
  struct node *next;
};

struct node* new_node()
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    scanf("%d",&temp->data);
    temp->next=NULL;
    return temp;

};

insert(struct node*root,struct node *temp)
{
    while(root->next!=NULL)
        root=root->next;
        root->next=temp;
}


void print(struct node* root)
{
    while(root->next!=NULL)
    {
        printf("%d",root->data);
        root=root->next;
    }
    printf("%d",root->data);
}

void dupli(struct node *root)
{
    while(root->next!=NULL)
    {
        if(root->data==root->next->data)
            root->next=root->next->next;
        else
        root=root->next;
    }
};

int main()
{
    struct node *head=NULL,*temp;
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        temp=new_node();
        if(head==NULL)
            head=temp;
        else insert(head,temp);
    }
    dupli(head);
    print(head);
}
