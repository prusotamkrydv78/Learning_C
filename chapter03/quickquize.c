#include <stdio.h>
int main()
{
    int mark;
    printf("Enter your marks:- ");
    scanf("%d", &mark);

    if (90 <= mark && mark <= 100)
    {
        printf("You got A+");
    }
    else if (80 <= mark && mark <= 90)
    {
        printf("You got A ");
    }

    else if (70 <= mark && mark <= 80)
    {
        printf("You got B+ ");
    }

    else if (60 <= mark && mark <= 70)
    {
        printf("You got B ");
    }

    else if (50 <= mark && mark <= 60)
    {
        printf("You got B ");
    }

    else
    {
        printf("Try next time...");
    }

    return 0;
}