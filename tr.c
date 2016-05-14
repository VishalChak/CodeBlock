#include<memory.h>

struct node {
 int data;
 struct node *left,*right;
};

struct node *arr[9999];
int p=-1,q=-1;

struct node * new_node(int x)
{
    struct node *temp;
    temp=(struct node *)malloc (sizeof(struct node));
    temp->data=x;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
};

void prin(struct node*temp){
  if(temp)
  {
      printf("%d ",temp->data);
      prin(temp->left);
      prin(temp->right);
  }
}



void depth(struct node **root,int x)
{
    struct node *temp;
    if(*root)
    {
        if(x==0)
        {
           temp=(*root)->left;
           (*root)->left=(*root)->right;
           (*root)->right=temp;
        }
        else
        {
            depth(&(*root)->left,x-1);
            depth(&(*root)->right,x-1);
        }
    }

}

int main()
{
  int t;
  scanf("%d",&t);
  if(t>0)
  {
    struct node *root,*temp,*temp1;
    temp=new_node(1);
    root=temp;
    arr[++p]=root;
    int i,l,r;
    for(i=0;i<t;i++)
    {
       scanf("%d%d",&l,&r);
       q++;
       if(l!=-1)
       {
           temp=new_node(l);
           arr[q]->left=temp;
           arr[++p]=temp;
       }
       else
       {
           arr[q]->left=NULL;
       }
       if(r!=-1)
       {
           temp=new_node(r);
           arr[q]->right=temp;
           arr[++p]=temp;
       }
       else
       {
           arr[q]->right=NULL;
       }
    }
    prin(root);
    printf("\n");
    int x;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&x);
        depth(&root,x-1);
    }
   prin(root);


  }
}
