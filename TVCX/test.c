#include<stdio.h>
int arr[10],rear=-1,front=-1;
int main()
{
    int x,count=0;
    do
    {
        printf("1.Enque\n2.dequeqe\n3.travarsal\n");
        scanf("%d",&x);
        switch(x)
        {
        case 1:
            if(front>=10)
                printf("OverFlow\n");
            else if(front==-1)
            {
                scanf("%d",&arr[++front]);
                ++rear;
            }
            else
                scanf("%d",&arr[++front]);
            break;
        case 2:
            if(rear==-1)
                printf("UnderFlow\n");
            else
            {
                arr[rear++]='\0';
            }
            break;
        case 3:
            if(rear<=front&& rear!=-1)
            {
                int i;
                for(i=rear;i<=front;i++)
                    printf("   %d\n",arr[i]);
            }
            break;
    }
}while(x<4);
}
