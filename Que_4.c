#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int x=1,a,b,c,h,s;
    while(x)
    {
        printf("Enter your choice\n");
        printf("1.Check whether a given set of three numbers are lengths of an isosceles triangle or not");
        printf("\n2.Check whether a given set of three numbers are lengths of sides of a right angled triangle or not");
        printf("\n3.Check whether a given set of three numbers are equilateral triangle or not\n4.Exit\n");
        scanf("%d",&x);
        switch(x)
        {
        case 1:
            printf("Enter sides of a triangle ");
            scanf("%d%d%d",&a,&b,&c);
            if(a==b || b==c || a==c)
                printf("It is an isosceles triangle\n");
            else
                printf("It is not an isosceles triangle\n");
            break;

        case 2:
            printf("Enter sides of a triangle ");
            scanf("%d%d%d",&a,&b,&c);
            if(a>b && a>c)
            {
                h=a*a;
                s=(b*b)+(c*c);
                if(s==h)
                    printf("It is an right angle triangle\n");
                else
                    printf("It is not an right angle tiangle\n");
            }
            else if(b>a && b>c)
            {
                h=b*b;
                s=(a*a)+(c*c);
                if(s==h)
                    printf("It is an right angle triangle\n");
                else
                    printf("It is not an right angle tiangle\n");
            }
            else
            {
                h=c*c;
                s=(b*b)+(a*a);
                if(s==h)
                    printf("It is an right angle triangle\n");
                else
                    printf("It is not an right angle tiangle\n");
            }
            break;

        case 3:
            printf("Enter sides of an triangle ");
            scanf("%d%d%d",&a,&b,&c);
            if(a==b && b==c)
                printf("It is an equilateral triangle\n");
            else
                printf("It is not an equilateral trianle\n");
            break;

        case 4:
            exit(0);

        default:
            printf("Invalid choice\n");
        }
    }
    return 0;
}
