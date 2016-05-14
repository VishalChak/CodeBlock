#include<memory.h>
struct node
{
    int data;
    struct node *next;
};

push(struct node **head)
{
    struct node *temp,*temp2;
    temp=(struct  node*)malloc (sizeof(struct node));
    scanf("%d",&temp->data);
    temp->next==NULL;
    if(*head==NULL)
    {
       *head=temp;
    }
    else
    {
        temp2=*head;
        while(temp2->next!=NULL)
            temp2=temp2->next;
        temp2->next=temp;
    }
}

print(struct node *temp)
{
    while(temp->next!=NULL)
    {
        printf("   %d\n",temp->data);
        temp=temp->next;
    }
    printf("   %d\n",temp->data);
}

int main()
{
    int x,i;
    struct node *head1;
    head1=NULL;
    scanf("%d",&x);
    for(i=0;i<x;i++)
        push(head1);
    print(head1);
}
