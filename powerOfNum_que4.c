// to calculate power of any number


#include<stdio.h>

int main() {
    int base, power;

    printf("Enter base :");
    scanf("%d",&base);
    printf("Enter power :");
    scanf("%d",&power);

    int i = 1, result = 1;
    while(i <= power){
        result = base * power;
        i++;
    };

    printf("%d^%d = %d",base, power, result);

    return 0;
}