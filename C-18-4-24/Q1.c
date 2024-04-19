#include <stdio.h>

int main() {
    int value1;
    int value2;

    
    printf("Enter first number:- ");
    scanf("%d", &value1);
    printf("Enter second number:- ");
    scanf("%d", &value2);


    if (value1 < value2) {
        printf("Minimum number is:- %d\n", value1);
    } else {
        printf("Minimum number is:- %d\n", value2);
    }

    return 0;
}
