#include<memory.h>
struct node
{
    int data;
    struct node *lchild,*rchild;
};

void inorder (struct node *q)
{
    if(q!=NULL)
    {
        inorder(q->lchild);
        printf("%d   \n",q->data);
        inorder(q->rchild);
    }
}

void preorder(struct node *q)
{
    if(q!=NULL)
    {
        printf("%d    \n",q->data);
        preorder(q->lchild);
        preorder(q->rchild);
    }
}

void postorder(struct node * q)
{
    if(q!=NULL)
    {
        postorder(q->lchild);
        postorder(q->rchild);
        printf("%d    \n",q->data);
    }
}


void insert(struct node *root,struct node *new_node)
{
    if(root->data>new_node->data)
    {
        if(root->lchild==NULL)
            root->lchild=new_node;
        else
        {
            root=root->lchild;
            insert(root,new_node);
        }
    }
    else
    {
        if(root->rchild==NULL)
            root->rchild=new_node;
        else
        {
           root=root->rchild;
           insert(root,new_node);
        }
    }

}


struct node * getnode()
{
struct node *temp;
temp=(struct node*)malloc(sizeof(struct node));
temp->lchild=NULL;
temp->rchild=NULL;
return temp;
}


int main()
{
    int x,data;
    struct node *root,*temp,*new_node;
    root=NULL;
    do
    {
        printf("1.Insert\n2.Inorder\n3.preorder\n4.postorder\n");
        scanf("%d",&x);
        switch(x)
        {
        case 1:
            scanf("%d",&data);
            new_node=getnode();
            new_node->data=data;
            if(root==NULL)
                root=new_node;
            else
            {
                insert(root,new_node);
            }
            break;
        case 2:
            inorder(root);
            break;
        case 3:
            preorder(root);
            break;
        case 4:
            postorder(root);
            break;
        }
    }while(x<5);
}
