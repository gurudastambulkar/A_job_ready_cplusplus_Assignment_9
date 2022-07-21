#include<stdio.h>
#include<conio.h>
int main()
{
    int x,d=0,a,b,c;
    printf("Enter your choice\n");
    printf("1.To check if the quadratic equation has two real and distinctive roots\n");
    printf("2.To check if the quadratic equation has imaginary roots\n");
    printf("3.To check if the quadratic equation has two real and equal roots\n");
    scanf("%d",&x);
    switch(x)
    {
    case 1:
        printf("Enter a,b and c of quadratic equation ");
        scanf("%d%d%d",&a,&b,&c);
        d=(b*b)-(4*(a*c));
        if(d>0)
            printf("The quadratic equation has two real and distinctive roots");
        else
            printf("The quadratic equation does not has two real and distinctive roots");
        break;

    case 2:
        printf("Enter a,b and c of quadratic equation ");
        scanf("%d%d%d",&a,&b,&c);
        d=(b*b)-(4*(a*c));
        if(d<0)
            printf("The quadratic equation has imaginary roots");
        else
            printf("The quadratic equation does not have imaginary roots");
        break;

    case 3:
        printf("Enter a,b and c of quadratic equation ");
        scanf("%d%d%d",&a,&b,&c);
        d=(b*b)-(4*(a*c));
        if(d==0)
            printf("The quadratic equation has two real and equal roots");
        else
            printf("The quadratic equation does not have two real and equal roots");
        break;

    default:
        printf("Invalid choice");
    }
    return 0;
}
