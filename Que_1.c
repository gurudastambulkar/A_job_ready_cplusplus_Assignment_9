#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter a month number from given choice below:\n1.January\n2.February\n3.March\n4.April\n5.May\n6.June\n7.July\n8.August\n9.September\n10.October\n11.November\n12.December  ");
    scanf("%d",&x);
    switch(x)
    {
        case 1:printf("31 days in January");
        break;
        case 2:printf("28 days in February");
        break;
        case 3:printf("31 days in March");
        break;
        case 4:printf("30 days in April");
        break;
        case 5:printf("31 days in May");
        break;
        case 6:printf("30 days in June");
        break;
        case 7:printf("31 days in July");
        break;
        case 8:printf("31 days in August");
        break;
        case 9:printf("30 days in September");
        break;
        case 10:printf("31 days in October");
        break;
        case 11:printf("30 days in November");
        break;
        case 12:printf("31 days in december");
        break;
        default:printf("Invalid choice");
    }
    return 0;
}
