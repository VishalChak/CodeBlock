#include<memory.h>
struct node
{
    int data;
    struct node * next;
}*top;


int main()
{
 top=NULL;
 struct node *temp,*top1;
 int x,data,count=0;
 do
 {
     printf("1.push\n2.pop\n3.display\n4.count\n");
 scanf("%d",&x);
 switch(x)
 {
 case 1:
     scanf("%d",&data);
     if(top==NULL)
     {
         top=(struct node*)malloc(sizeof(struct node));
         top->data=data;
         top->next=NULL;
         //head=top;

     }
     else
     {
         temp=(struct node*)malloc(sizeof (struct node));
         temp->data=data;
         temp->next=top;
         top=temp;
     }
     count++;
     break;
 case 4:
    printf("%d\n",count);
    break;
 case 2:
    if(top==NULL)
        printf("underflow");
    else
    {
        top1=top;
        top=top->next;
        free(top1);
        count--;
    }
    break;
 case 3:
    top1=top;
    while(top1->next !=NULL)
    {
        printf("     .%d\n",top1->data);
        top1=top1->next;
        }
     printf("    .%d\n",top1->data);
    break;

}

 }while(x<5);

}
