#include<memory.h>

struct node
{
    int data;
    struct node *left,*right;

};

struct node * arr[9999];
int rear=-1,front=-1;

struct node *new_node()
{
    struct node *temp;
    temp=(struct node *)malloc (sizeof(struct node));
    scanf("%d",&temp->data);
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

void inorder(struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("  %d",root->data);
        inorder(root->right);
    }
}

void preorder(struct node *root)
{
    if(root!=NULL)
    {
        printf("  %d",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node *root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("  %d",root->data);
    }

}

void lorder(struct node *root)
{
    rear=-1;
    front=-1;
    arr[++rear]=root;
    ++front;
    while(front<=rear)
    {
        if(arr[front]!=NULL)
        {
            printf("  %d",arr[front]->data);
           arr[++rear]=arr[front]->left;
           arr[++rear]=arr[front]->right;
        }
        ++front;
    }
    printf("\n");
}


int main()
{
   struct node *root,*temp;
   int i,n,x;
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
   do
   {
       printf("1.Inorder\n2.Preorder\n3.Postorder\n4.levelOrder\n5.exit\n");
       scanf("%d",&x);
       switch(x)
       {
       case 1:
        inorder(root);
        printf("\n");
        break;
       case 2:
        preorder(root);
        printf("\n");
        break;
       case 3:
        postorder(root);
        printf("\n");
        break;
       case 4:
        lorder(root);
        break;


       }
   }while(x<5);


}
