#include<malloc.h>
struct node
{
    int data;
    struct node *next;
};
struct node* new_node()
{
    struct node *temp;
    temp=(struct nodd*)malloc(sizeof(struct node));
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

void prin(struct node*root)
{
    while(root->next!=NULL)
    {
        printf("  %d\n",root->data);
        root=root->next;
    }
    printf("  %d\n",root->data);
}

int main()
{
    struct node *root,*temp;
    int n,i;
    root=NULL;
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
    prin(root);
    temp=root;
    root=root->next;
    free(temp);
    prin(root);
}
