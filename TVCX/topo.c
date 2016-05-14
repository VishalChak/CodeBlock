#include<memory.h>
struct node
{
    int data;
    struct node *left,*right;
};

struct node * arr[55555];
int front=-1,rear=-1;

struct node *new_node()
{
    struct node*temp;
    scanf("%d",&temp->data);
    temp->left=temp->right=NULL;
    return temp;
};

void insert(struct node *temp)
{
    int i;
    for(i=front;i<=rear;i++)
    {
        if(arr[i]->left==NULL)
        {
            arr[i]->left=temp;
            arr[++rear]=temp;
            break;
        }
        else if(arr[i]->right==NULL)
        {
            arr[i]->right=temp;
            arr[++rear]=temp;
            break;
        }
    }

}

int main()
{
    int n,i;
    struct node *root,*temp;
    root=NULL;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        temp=new_node();
        if(root==NULL)
        {
            root=temp;
            arr[++rear]=temp;
            ++front;
        }
        else
        {
            insert(temp);
        }
    }

}
