// Add two numbers using function


#include<stdio.h>

int add(int a, int b) {
    return a+b;
}

int main() {
    int num1, num2, sum;

    printf("enter any two number :-");
    scanf("%d%d", &num1, &num2);

    sum = add(num1,num2);

    printf("sum = %d",sum);

    return 0;

}