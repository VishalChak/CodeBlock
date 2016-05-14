#define max 20
#include<memory.h>
struct node
{
    char c;
    struct node *left,*right;
};

int search(char arr[] ,int ins,int ine,char c)
{
    int i=0;
    for(i=ins;i<=ine;i++)
    {
        if(arr[i]==c)
            return i;
    }
}

struct node * get_node(char c)
{
    struct node * temp;
    temp=(struct node *)malloc (sizeof(struct node));
    temp->c=c;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
};

struct node * build(char in[],char pre [],int ins,int ine)
{
    static int pinx= 0;
    if(ins>ine)
        return NULL;
    struct node * temp;
    temp=get_node(pre[pinx++]);

    if(ins==ine)
        return temp;

    int i=search(in ,pre,ins,ine);

    temp->left=build(in,pre,ins,i-1);
    temp->right=build(in,pre,i+1,ine);
    return temp;


}

int main()
{
    struct node *root;
    char in[max];
    char pre[max];
    gets(in);
    gets(pre);
    int l=strlen(in);
    root=build(in,pre,0,l-1);

}
