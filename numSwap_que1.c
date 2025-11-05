//swapping of two numbers
//if a = 1 and b = 2
//output :- a = 2 and b = 1

#include<stdio.h>

int main() {
    int a, b;
    printf("Enter any two number for swapping  :");
    scanf("%d%d",&a, &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf(" %d\n%d", a, b);

    return 0;
}