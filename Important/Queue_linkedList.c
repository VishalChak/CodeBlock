#include<memory.h>
struct node
{
    int data;
    struct node *next;
};


int main()
{
    int x,count,data;
    struct node *temp,*front,*rear;
    front=rear=NULL;
    printf("enter size of queqe\n");
    scanf("%d",&count);
    do
    {
        printf("1.enqueqe\n2.dequeqe\n3.print\n");
        scanf("%d",&x);
        switch(x)
        {
        case 1:
            if(count<1)
                printf("Sry .overflow\n");
            else
            {
             scanf("%d",&data);
             temp=(struct node *)malloc(sizeof(struct node));
             temp->data=data;
             temp->next=NULL;
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
            }
            count--;
            break;
        case 2:
            if(front==NULL)
                printf("underflow\n");
            //else if(count<1)
              //  printf("nothing to delete\n");
            else
            {
                temp=front->next;
                free(front);
                front=temp;
            }

            break;
        case 3:
            temp=front;
            if(front==NULL)
                printf("nothing to print");
            else
            {
                while(temp!=NULL)
                {
                    printf("%d   .\n",temp->data);
                    temp=temp->next;
                }
            }
            break;



        }
    }while(x<4);
}
