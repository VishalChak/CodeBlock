#include<memory.h>
struct node
{
    int data;
    struct node* left,*right;
};
struct node* arr[100];
int f=-1,r=-1;

struct node* new_node()
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    scanf("%d",&temp->data);
    temp->left=NULL;
    temp->right=NULL;
    return temp;
};


insert(struct node*root,struct node *temp)
{
    if(root->data>temp->data)
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

void print(struct node*root)
{
    if(root!=NULL)
    {
        print(root->left);
        printf("%d\n",root->data);
        print(root->right);
    }
}


topo(struct node *root)
{
    int i;
      while(root)
      {
          printf("  %d\n",root->data);

          if(root->right)
            arr[++r]=root->right;
            if(root->left)
            arr[++r]=root->left;
         root=arr[++f];
      }

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
      {
          root=temp;
      }
      else
        insert(root,temp);
  }
  topo(root);
  //zigzag(root);
}
