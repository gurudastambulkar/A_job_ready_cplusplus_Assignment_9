#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter your choice:\n1.Sunday\n2.Monday\n3.Tuesday\n4.Wednesday\n5.Thursday\n6.Friday\n7.Saturday  ");
    scanf("%d",&x);
    switch(x)
    {
    case 1:
        printf("Grade do not measures intelligence nor does age defines maturity\n");
        break;

    case 2:
        printf("Our own self-esteem is something we can actually twist in whatever way we want\n");
        break;

    case 3:
        printf("Speed and efficiency do not always increase the quality of life\n");
        break;

    case 4:
        printf("It's not who you are that holds you back, It's who you think you're not\n");
        break;

    case 5:
        printf("If it is written for you, It will happen\n");
        break;

    case 6:
        printf("When god gives you a new beginning, don't repeat the old mistake\n");
        break;

    case 7:
        printf("Sometimes you need to risk it all for a dream only you can see\n");
        break;

    default:
        printf("Invalid choice\n");
    }
    return 0;
}
