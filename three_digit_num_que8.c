//cheak number is three digit or not

#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num >= 100 && num <= 999)
        printf("It is a three digit number.\n");
    else
        printf("It is NOT a three digit number.\n");

    return 0;
}
