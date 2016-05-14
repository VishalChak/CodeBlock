#include<memory.h>
struct node
{
    int data;
    struct node *left,*right;
};
struct node * new_node()
{
    struct node *temp;
    temp=(struct node *)malloc (sizeof(struct node));
    scanf("%d",&temp->data);
    temp->left=NULL;
    temp->right=NULL;
    return temp;
};

void insert(struct node *temp,struct node *temp2)
{
    if(temp->data>=temp2->data)
    {
        if(temp->left==NULL)
            temp->left=temp2;
        else
            insert(temp->left,temp2);
    }
    else
    {
        if(temp->right==NULL)
            temp->right=temp2;
        else
            insert(temp->right,temp2);
    }
}

void inorder(struct node *temp)
{
    if(temp!=NULL)
    {
        inorder(temp->left);
        printf("   %d\n",temp->data);
        inorder(temp->right);
    }

}



int height(struct node *temp)
{
    int l=0,r=0;
    if(temp!=NULL)
    {
        l=height(temp->left);
        r=height(temp->right);
        if(l>r)
          return l+1;
    else
        return r+1;
    }
    return -1;

}
struct node *see(struct node *temp,int x)
{
    if(temp!=NULL)
    {
        if(temp->data==x)
            return temp;
        else if(temp->data>x)
            return see(temp->left,x);
        else
            return see(temp->right,x);
    }
    return NULL;
};
void del(struct node *temp)
{

}

int max(int x,int y)
{
    if(x>y)
        return x;
    else
        return y;
}

int diameter(struct node * temp)
{
    int l,r,dl,dr;
    if(temp==NULL)
        return 0;
    else
    {
        l=height(temp->left);
        r=height(temp->right);
        dl=diameter(temp->left);
        dr=diameter(temp->right);
        return max(l+r+1,max(dl,dr));
    }
}

int ttc(struct node *temp,int x,int y)
{
    while(temp->data<=y&& temp->data>x)
    {
        if(temp->data<=x&&temp->data<=y)
            temp=temp->right;
        else if(temp->data>x&&temp->data>y)
            temp=temp->left;
    }
    int l=0,r=0;
    struct node *temp2;
    temp2=temp;
    while(temp->data!=x)
    {
        if(temp->data<=x)
            temp=temp->right;
        else
            temp=temp->left;
        l++;
    }

    while(temp2->data!=y)
    {
        if(temp2->data>y)
            temp2=temp2->left;
        else
            temp2=temp2->right;
        r++;
    }
    return l+r;

}

int main()
{
    struct node *root,*temp;
    root = NULL;
    int x,data,y,z;
    do
    {
        printf("1.insert\n2.print\n3.height\n4.del\n5.diameter\n");
        scanf("%d",&x);
        switch(x)
        {
        case 1:
            temp=new_node();
            if(root==NULL)
                root=temp;
            else
            {
                insert(root,temp);
            }
            break;
        case 2:
            inorder(root);
            break;
        case 3:
            printf("   %d\n",height(root));
            break;
        case 4:
            scanf("%d",&data);
            temp=see(root,data);
            //printf("  %d\n",temp->data);
            //del(temp);
            break;
        case 5:
            printf("  %d\n",diameter(root));
            break;
        case 6:
            scanf("%d%d",&y,&z);
            printf("%d",ttc(root,y,z));
            break;



        }
    }while(x<7);
}
