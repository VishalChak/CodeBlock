#include<memory.h>
struct node
{
    int x,y;
    struct node *next;

};

struct node * new_node()
{
    struct node* temp;
    temp= (struct node*)malloc(sizeof(struct node));
    scanf("%d%d",&temp->x,&temp->y);
    temp->next=NULL;
    return temp;
};





int main()
{
    int x;
    struct node *root,*temp,*temp2;
    root=NULL;
    do
    {
        printf("1.co ordinate\n2.print");
        scanf("%d",&x);
        switch(x)
        {
        case 1:
            temp=new_node();
            if(root==NULL)
                root=temp;
            else
            {
                temp2=root;
                while(temp2->next!=NULL)
                    temp2=temp2->next;
                temp2->next=temp;
            }
            break;
        case 2:
            temp2=root;
            while(temp2->next!=NULL)
            {
                printf("%d  %d\n",temp2->x,temp2->y);
                temp2=temp2->next;
            }
            printf("%d  %d\n",temp2->x,temp2->y);
            break;
        case 3:
            //trime(root);
            //if()
            temp2 =root;
            while(temp2->next->next!=NULL)
            {
                if(temp2->x==temp2->next->x&& temp2->next->x== temp2->next->next->x)
                {
                    temp=temp2->next;
                    temp2->next=temp2->next->next;
                    free(temp);
                }
                else if(temp2->y==temp2->next->y&& temp2->next->y== temp2->next->next->y)
                {

                    temp=temp2->next;
                    temp2->next=temp2->next->next;
                    free(temp);

                }
                temp2=temp2->next;

            }
            break;

        }
    }while(x<4);
}
