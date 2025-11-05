#include<stdio.h>

int main() {
    int n, x, facto = 1;

    printf("Enter a number :");
    scanf("%d",&n);

    for(x = 1; x <= n; x++){
        facto = facto * x;
    };

    printf("Factorial of %d is %d", n, facto);

    return 0;
}