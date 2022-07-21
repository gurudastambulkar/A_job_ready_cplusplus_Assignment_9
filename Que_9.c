#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int x,num;
    printf("Enter your choice\n");
    printf("1. Convert even number into its upper nearest odd number\n2.Exit\n");
    scanf("%d",&x);
    switch(x)
    {
    case 1:
        printf("Enter a even number ");
        scanf("%d",&num);
        num=num+1;
        printf("Upper nearest odd number is %d",num);
        break;

    case 2:
        exit(0);

    default:
        printf("Invalid choice");

    }
    return 0;
}
