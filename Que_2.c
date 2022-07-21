#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int a,b,x=1;
    while(x)
    {
        printf("Enter your choice:\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n5.Exit  ");
        scanf("%d",&x);
        switch(x)
        {
        case 1:
            printf("Enter two numbers ");
            scanf("%d%d",&a,&b);
            printf("Sum is %d\n\n",a+b);
            break;

        case 2:
            printf("Enter two numbers ");
            scanf("%d%d",&a,&b);
            printf("After substraction %d\n\n",a-b);
            break;

        case 3:
            printf("Enter two numbers ");
            scanf("%d%d",&a,&b);
            printf("After multiplication %d\n\n",a*b);
            break;

        case 4:
            printf("Enter two numbers ");
            scanf("%d%d",&a,&b);
            printf("After division %d\n\n",a/b);
            break;

        case 5:
            exit(0);

        default:
            printf("Invalid choice\n\n");
        }
    }
    return 0;
}
