#include<memory.h>
struct node
{
    int data;
    struct node *next;
};

struct node * new_node()
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
     scanf("%d",&temp->data);
     temp->next=NULL;
     return temp;

};
 void insert(struct node *temp,struct node *temp1)
 {
     while(temp->next!=NULL)
     {
         temp=temp->next;
     }
     temp->next=temp1;
 }

struct node *reverse(struct node **head)
 {
     struct node *prev,*current,*next;
     prev=NULL;
     current=*head;
     while(current!=NULL)
     {
         next=current->next;
         current->next=prev;
         prev=current;
         current=next;
     }
     *head=prev;
     //return prev;


 }


 void print(struct node *temp)
 {
     while(temp->next!=NULL)
     {
         printf("  %d\n",temp->data);
         temp=temp->next;
     }
     printf("  %d\n",temp->data);
 }

int main()
{
    struct node *head,*temp;
    head=NULL;
    int x;
    do
    {
        printf("1.Insert\n2.Reverse\n3.Print\n");
        scanf("%d",&x);
        switch(x)
        {
        case 1:
            temp=new_node();
            if (head==NULL)
                head=temp;
            else
            {
                insert(head,temp);
            }
            break;
        case 2:
            reverse(&head);
            break;
        case 3:
            print(head);
            break;



        }
    }while(x<4);

}
