//NO. is divisible by 2 or Not / odd or even
//even -> 1
//odd -> 0

#include<stdio.h>

int main() {
    int a;
    printf("enter a no.");
    scanf("%d", &a);
    printf("%d", a % 2 == 0);
    return 0;
}