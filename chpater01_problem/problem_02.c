#include <stdio.h>
int main()
{
    int radius, height;
    printf("Enter the radius of cylinder:- ");
    scanf("%d", &radius);
    printf("Enter the height of cylinder:- ");
    scanf("%d", &height);
    int result = ((22 / 7) * radius * radius) * height;
    printf("Area of circle is %d", result);
    return 0;
}