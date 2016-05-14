#include<memory.h>
struct node
{
    int data;
    struct node *next;
};
struct node* get_node()
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&temp->data);
    temp->next=NULL;
    return temp;
}


void print(struct node *rear)
{
    while(rear->next!=NULL)
    {
        printf("   %d\n",rear->data);
        rear=rear->next;
        }
        printf("   %d\n",rear->data);
    }

int main()
{
    int x;
    struct node *front,*rear,*temp;
    front=NULL;
    rear=NULL;
    do
    {
        printf("1.enque\n2.dequeqe\n3.print\n");
        scanf("%d",&x);
        switch(x)
        {
        case 1:
            temp=get_node();
            if(front==NULL)
            {
                front=temp;
                rear=temp;
            }
            else
            {
                front->next=temp;
                front=temp;
            }
            break;

        case 2:
            if(rear==NULL)
                printf("Nothibng to delete");
            else
            {
                temp=rear;
                rear=rear->next;
                free(temp);
            }
            break;
        case 3:
            print(rear);
            break;
        }

    }while(x<4);

}
