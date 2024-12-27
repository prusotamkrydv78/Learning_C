#include <stdio.h>

int main() {
    int a;
    char b; // b is declared but not used, so you might want to use or remove it.

    printf("Enter an integer: ");
    scanf("%d", &a);


    printf("Enter an character: ");
    scanf("%c", &b);

    // Correctly print the value of 'a'
    printf("You entered integer: %d\n", a);
    printf("You entered character: %c\n", b);

    return 0;
}
