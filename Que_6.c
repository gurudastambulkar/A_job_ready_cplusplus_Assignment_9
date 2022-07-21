#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int x=1,year;
    while(x)
    {
        printf("Enter your choice\n");
        printf("1.To check given year is a leap year or not\n2.Exit\n");
        scanf("%d",&x);
        switch(x)
        {
        case 1:
            printf("Enter a year ");
            scanf("%d",&year);
            if(year%100==0)
            {
                if(year%4==0)
                    printf("%d is a leap year\n",year);
                else
                    printf("%d is not a leap year\n",year);
            }
            else
            {
                if(year%4==0)
                    printf("%d is a leap year\n",year);
                else
                    printf("%d is not a leap year\n",year);
            }
            break;

        case 2:
            exit(0);

        default:
            printf("Invalid choice\n");
        }
    }
    return 0;
}
