#include<memory.h>
struct node
{
    int data;
    struct node *next;
}*head;

void insert()
{
   struct node *temp,*temp2;
   if(head  == NULL)
   {
       head= (struct node*) malloc (sizeof(struct node));
       scanf("%d",&head->data);
       head->next=NULL;
    }
    else
    {
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp2= (struct node*) malloc (sizeof(struct node));
        scanf("%d",&temp2->data);
        temp2->next=NULL;
        temp->next=temp2;


        }
    }

    display()
    {
        struct node *temp;
        if(head==NULL)
            printf("NOthing to print\n");
        else
        {
            temp=head;
            while(temp->next!=NULL)
            {
                printf("  %d\n",temp->data);
                temp=temp->next;
            }

            printf("  %d\n",temp->data);
        }
    }


    void reverse()
    {
        struct node *temp,*temp2;
        temp=NULL;
        if(temp==NULL)
        {
          temp= head;
          head=head->next;
          temp->next=NULL;
        }

        while(head->next!=NULL)
        {
            temp2=head;
            head=head->next;
            temp2->next=temp;
            temp=temp2;
        }
        head->next=temp2;

    }
int main()
{
  head=NULL;
  int x;
  do
  {
      printf("1.Insert\n2.display\n3.reverse\n");
      scanf("%d",&x);
      switch(x)
      {
      case 1 :
       insert();
        break;
      case 2:
        display();
        break;
      case 3:
        reverse();
        break;
        }
  }while(x<4);
}
