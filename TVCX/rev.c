#include<memory.h>
struct node
{
    int data;
    struct node *next;
};
struct node *new_node()
{
    struct node *temp;
    temp=malloc (sizeof(struct node ));
    scanf("%d",&temp->data);
    temp->next=NULL;
    return temp;
};
void insert(struct node *root,struct node *temp)
{
    while(root->next!=NULL)
    {
        root=root->next;
    }
    root->next=temp;
}

struct node *rev(struct node *root)
{
    struct node *per,*cur,*nex;
    per=NULL;
    cur=root;
    while(cur)
    {
      nex=cur->next;
      cur->next=per;
      per=cur;
      cur=nex;
    }
    return per;
}

void print(struct node *root)
{
  while(root)
  {
      printf("%d\n",root->data);
      root=root->next;
  }
}

int main()
{
    struct node *root,*temp;
    root=NULL;
    int n,i;
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

    root=rev(root);
    print(root);
}
