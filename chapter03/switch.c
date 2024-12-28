#include <stdio.h>
int main()
{
    int mark;
    printf("Enter your marks:=");
    scanf("%d", &mark);
    int a = mark>90;
    switch (mark)
    {
    case 1  :
        printf("You got A+");
        break;

    default:
        printf("Try next time");
        break;
    }
    return 0;
}