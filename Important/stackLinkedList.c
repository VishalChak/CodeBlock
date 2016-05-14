int main()
{
    int x,top=-1,y,j=0;
    scanf("%d",&x);
    int arr[x-1];
    do
    {
        printf("1.push\n2.pop\n3display\n");
        scanf("%d",&y);
        switch (y)
        {
        case 1 :
            if(top>=x-1)
                printf("overflow\n");
            else
            {
                top++;
                scanf("%d",&arr[top]);
            }
            break;
        case 2:
            if(top<0)
                printf("underflow\n");
            else
            {
                arr[top]='\0';
                top--;
            }
            break;
        case 3 :

            while(j<=top)
            {
                printf("vishal\t");
                printf("%d\n",arr[j]);
                j++;
            }
            j=0;
            break;
        }
    }while(y<4);
}
