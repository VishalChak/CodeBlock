#include<memory.h>

struct node
{
    int data ;
    struct node *left,*right;

};




void  search(struct node*temp,int x )
{
  if(temp==NULL)
  {
      printf("Not found");
      return 0;

  }

  else if(temp->data==x)
  {
      printf("    Yes found %d\n",temp->data);
      return 0;
  }
  else if(x>temp->data)
    search(temp->right,x);
  else
    search(temp->left,x);
  }


int tree_size(struct node* temp)
{
  int s;
  if(temp==NULL)
    return 0;
  else
    return(tree_size(temp->left) + 1 + tree_size(temp->right));
}



struct node * get_node()
{
   struct node *temp;
   temp=(struct node *)malloc(sizeof(struct node));
   scanf("%d",&temp->data);
   temp->left=NULL;
   temp->right=NULL;
   return temp;
}

void insert(struct node *root,struct node *new_node)
{
    if(new_node->data>=root->data)
    {
        if(root->right==NULL)
        {
            root->right=new_node;
        }
        else
            insert(root->right,new_node);
    }
    else
    {
        if(root->left==NULL)
            root->left=new_node;
        else
        {
            insert(root->left,new_node);
        }
    }
}


void Inorder(struct node *temp)
{
    if(temp!=NULL)
    {
        Inorder(temp->left);
        printf("   %d\n",temp->data);
        Inorder(temp->right);

    }

}


void Preorder(struct node*temp)
{
    if(temp!=NULL)
    {
        printf("   %d\n",temp->data);
        Preorder(temp->left);
        Preorder(temp->right);
    }
}

void Postorder(struct node*temp)
{
    if(temp!=NULL)
    {
        Postorder(temp->left);
        Postorder(temp->right);
        printf("   %d\n",temp->data);
    }
}

void LevelOrder(struct node *temp)
{
    int d=height(temp),i;
    for(i=0;i<d;i++)
    {
        printLevel(temp,i+1);

    }

}

void printLevel(struct node *temp,int l)
{
    if(temp==NULL)
        return 0;
    else if(l==1)
        printf("    %d\n",temp->data);
    else if(l>1)
    {
        printLevel(temp->left,l-1);
        printLevel(temp->right,l-1);
    }
}


int height(struct node *temp)
{
    int lh,rh;
    if(temp==NULL)
        return 0;
    else
    {
        lh=height(temp->left);
        rh=height(temp->right);
    }
    if(lh>rh)
        return (lh+1);
    else
        return(rh+1);
}

int sum(struct node *temp)
{
    if(temp==NULL)
        return 0;
    else
    {
        return temp->data + sum(temp->left) + sum(temp->right);
    }

}
 void mirror(struct node *temp)
 {
     struct node *temp1;
     if(temp==NULL)
        return 0;
     else if(temp->left==NULL&&temp->right==NULL)
        return 0;
     else
     {
         temp1=temp->left;
         temp->left=temp->right;
         temp->right=temp1;
         mirror(temp->left);
         mirror(temp->right);
    }
 }



int main()
{
    struct node *root,*new_node;
    root=NULL;
    int x,h,t;
    do
    {
        printf("1.Insert\n2.Inorder\n3.Preorder\n4.postOrder\n5.height\n6.LevelOrder\n7.Search\n8.Size(no_of_Element)\n9.Sum_Of_Nodes\n10.Mirror\n");
        scanf("%d",&x);
        switch(x)
        {
        case 1:
            new_node=get_node();
            if(root==NULL)
                root=new_node;
            else
                insert(root,new_node);
            break;
        case 2:
            Inorder(root);
            break;
        case 3:
            Preorder(root);
            break;
        case 4:
            Postorder(root);
            break;
        case 5:
           h=height(root);
           printf("   %d\n",h);
           break;
        case 6:
            LevelOrder(root);
            break;
        case 7:
            scanf("%d",&h);
            search(root,h);
            break;
        case 8:
            h= tree_size(root);
            printf("%d",h);
            break;
        case 9:
            h=sum(root);
            printf("  Sum_Of_nodes= %d\n",h);
            break;
        case 10:
            mirror(root);
            break;
        }

    }while(x<11);

}
