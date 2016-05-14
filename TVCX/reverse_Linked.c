
#include<memory.h>
typedef struct list_
{
    int data;
    struct list_*next;
}list;

list * new_node()
{
    list *temp;
    temp=(list*)malloc(sizeof(list));
     scanf("%d",&temp->data);
     temp->next=NULL;
     return temp;

};
 void insert(list *temp,list *temp1)
 {
     while(temp->next!=NULL)
     {
         temp=temp->next;
     }
     temp->next=temp1;
 }

list *reverse(list*head)
 {
     list *prev,*current,*next;
     prev=NULL;
     current=head;
     while(current!=NULL)
     {
         next=current->next;
         current->next=prev;
         prev=current;
         current=next;
     }
     return prev;


 }


 void print(list *temp)
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
    list *head,*temp;
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
           head=reverse(head);
            break;
        case 3:
            print(head);
            break;



        }
    }while(x<4);

}

