#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year you want to check:- ");
    scanf("%d", &year);

    if (year != 0 && (year % 4) == 0)
    {
        printf("the give year is a leap year %d", year);
    }
    else{
        printf("The give year is not a leap year");
    }

    return 0;
}