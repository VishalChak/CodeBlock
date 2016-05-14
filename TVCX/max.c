#include<memory.h>
struct node
{
    int data;
    struct node *next;
};

struct node *push(struct node *head,int x)
{
    struct node *temp,*temp1;
    temp1=head;
    temp=(struct node*)malloc (sizeof(struct node));
    temp->data=x;
    temp->next=NULL;
    if(head==NULL)
        head=temp;
    else
    {
        while(head->next!=NULL)
            head=head->next;
        head->next=temp;
    }
    return temp1;

}


max(struct node *head1,struct node *head2)
{

}

int main()
{
    struct node *head1,*head2,*temp;
    int x,i,y;
    head1=NULL;
    head2=NULL;

    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        temp=new_node()
        if(head1==NULL)
            head1=temp;
        else
        {
            temp2=head1
        }
    }

    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        scanf("%d",&y);
        head2=push(head2,y);
    }

    max(head1,head2);

}
