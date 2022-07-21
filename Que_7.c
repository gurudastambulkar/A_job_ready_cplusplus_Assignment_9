#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    float units=0,bill=0,sc=0;
    printf("Enter your choice\n");
    printf("1.If the units are below 50\n");
    printf("2.If the units are between 50 to 150\n");
    printf("3.If the units are between 150 to 250\n");
    printf("4.If the unites are above 250\n");
    scanf("%d",&x);
    switch(x)
    {
    case 1:
        printf("Enter electricity units ");
        scanf("%f",&units);
        bill=units*0.50;
        sc=bill/10.0;
        sc=sc*2.0;
        printf("Total electricity bill is %f",sc+bill);
        break;

    case 2:
        printf("Enter electricity units ");
        scanf("%f",&units);
        bill=units*0.75;
        sc=bill/10.0;
        sc=sc*2.0;
        printf("Total electricity bill is %f",sc+bill);
        break;

    case 3:
        printf("Enter electricity units ");
        scanf("%f",&units);
        bill=units*1.20;
        sc=bill/10.0;
        sc=sc*2.0;
        printf("Total electricity bill is %f",sc+bill);
        break;

    case 4:
        printf("Enter electricity units ");
        scanf("%f",&units);
        bill=units*1.50;
        sc=bill/10.0;
        sc=sc*2.0;
        printf("Total electricity bill is %f",sc+bill);
        break;

    default:
        printf("Invalid choice");
    }
    return 0;
}
