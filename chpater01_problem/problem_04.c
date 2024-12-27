#include <stdio.h>
int main()
{
    int p, t, r;
    printf("Enter the principle:- ");
    scanf("%d", &p);

    printf("Enter the time:- ");
    scanf("%d", &t);

    printf("Enter the rate:- ");
    scanf("%d", &r);
    int result = (p * r * t) / 100;
    printf("The interest is :- %d", result);
    return 0;
}