#include<memory.h>

struct node
{
    char data;
    struct node *left,*right;
};

struct node*get_node(char arr[])
{
    struct node * temp;
    temp=(struct node*)malloc (sizeof(struct node));
    temp->data=arr[0];
    temp->left=NULL;
    temp->right=NULL;
    return temp;

}

int search_i(char arr[],int ins,int ine,char c)
{
    int i;
    for(i=ins;i<ine;i++)
    {
        if(c==arr[i]);
        return i;
    }

}

struct node *build(char in[],char pre[],int ins,int ine)
{

    if(ins>ine)
        return NULL;
    struct node* temp;
    temp=get_node(pre[ins]);

    if (ins==ine)
        return temp;

    int i=search_i(in,ins,ine,temp->data);

    temp->left=build(in,pre+1,ins,i-1);
    temp->right=build(in,pre+i+1,i+1,ine);
    return temp;
}

int main()
{
    struct node *root;
    int x;
   char in[50],pre[50];
    gets(in);
    gets(pre);
    x=strlen(in);
    root=build(in,pre,0,x-1);
}
