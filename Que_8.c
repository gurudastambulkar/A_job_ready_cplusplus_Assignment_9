#include<stdio.h>
#include<conio.h>
int main()
{
    int x,num;
    printf("Enter your choice\n");
    printf("1.To convert positive number into negative number\n2.To convert negative number into positive number\n");
    scanf("%d",&x);
    switch(x)
    {
    case 1:
        printf("Enter a positive number ");
        scanf("%d",&num);
        num=num*-1;
        printf("After converting %d",num);
        break;

    case 2:
        printf("Enter a negative number ");
        scanf("%d",&num);
        num=num*-1;
        printf("After converting %d",num);
        break;

    default:
        printf("Invalid choice");
    }
    return 0;
}
