#include<stdio.h>

int main() {
    int n, b, a;

    printf("Enter any number :");
    scanf("%d",&b);

    for(a = 1; a <= 10; a++) {
        n = a * b;
        printf("%d\n",n);
    };
}