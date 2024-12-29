#include <stdio.h>
int main()
{
    int science;
    int math;
    int nepali;
    float totalMarks = 300;
    printf("Enter the marks obtained in math: ");
    scanf("%d", &math);
    printf("Enter the marks obtained in science: ");
    scanf("%d", &science);
    printf("Enter the marks obtained in nepali: ");
    scanf("%d", &nepali);
    float totalObtainedMarks = science + math + nepali;
    float percentageObtained = (totalObtainedMarks / totalMarks) * 100;
    printf("Your final percentage is :- %d", (totalObtainedMarks));

    return 0;
}