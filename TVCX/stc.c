#include<memory.h>
struct node
{
    int x;
    struct node *next;
};

struct node * new_node()
{
    struct node *temp;
    temp=(struct node *)malloc (sizeof(struct node));
    scanf("%d",&temp->x);
    temp->next=NULL;
    return temp;
};

void print_(struct node *temp)
{

            while(temp->next!=NULL)
            {
                printf("%d",temp->x);
                temp=temp->next;
            }

            printf("%d",temp->x);
}

int main()
{
    int x;
    struct node *top,*temp;
    top=NULL;
    do
    {
        printf("1.push\n2.pop\n3.print\n");
        scanf("%d",&x);
        switch(x)
        {
        case 1:
            temp=new_node();
            if(top==NULL)
                top=temp;
            else
            {
                temp->next=top;
                top=temp;
            }
            break;
        case 2:
            if(top==NULL)
                break;
            else
            {
                temp=top;
                top=top->next;
                free(temp);
            }
            break;
        case 3:
             print_(top);
            break;
        }
    }while(x<4);
}
