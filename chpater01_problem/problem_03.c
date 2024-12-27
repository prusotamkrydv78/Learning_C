#include<stdio.h> 
int main(){  
    int celsius;
    printf("Enter the celsius degree:- ");
    scanf("%d",&celsius);
    int result;
    result = celsius+273;
    printf("the degree in frecheight is %d",result);
     return 0;
}