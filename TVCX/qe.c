#include<memory.h>
struct node
{
    int x;
    struct  node *next;
};

struct  node* new_node()
{
    struct node *temp;
    temp=(struct node *)malloc (sizeof(struct node));
    scanf("%d",&temp->x);
    temp->next=NULL;
    return temp;
};

int main()
{
    struct node *front,*rear,*temp;
    front=NULL;
    rear=NULL;
    int x;
    do
    {
        printf("1.enqueue\n2.dequeue\n3.print\n");
        scanf("%d",&x);
        switch(x)
        {
        case 1:
            temp=new_node();
            if(rear==NULL)
            {
                rear=temp;
                front=temp;
            }
            else
            {
                rear->next=temp;
                rear=temp;
            }
            break;
        case 2:
            if(front==NULL)
                break;
            else if(front->next==NULL)
            {
                temp=front;
                front=NULL;
                rear=NULL;
                free(temp);
            }
            else
            {
                temp=front;
                front=front->next;
            }
            break;
        case 3:
            temp=front;
            while(temp->next!=NULL)
            {
                printf(" %d\n",temp->x);
                temp=temp->next;
            }
            printf(" %d\n",temp->x);
            break;
            }
    }while(x<4);


}
