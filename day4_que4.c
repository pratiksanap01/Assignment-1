//if number is divisible by 3 :- print fizz
//if number is divisible by 5 :- print buzz
//if number is divisible by both 3 and 5 :- print fizzbuzz


#include <stdio.h>

int main() {
    for(int i = 1; i <= 100; i++) {
        if(i % 3 == 0 && i % 5 == 0)
            printf("fizzBuzz\n");
        else if(i % 3 == 0)
            printf("fizz\n");
        else if(i % 5 == 0)
            printf("buzz\n");
        else
            printf("%d\n", i);
    }

    return 0;
}
