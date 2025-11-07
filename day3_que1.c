// to print stars

#include<stdio.h>

int main () {
int r, c; //r = rows, c = column

for(r=1; r<=5; r++) {
    for(c=1;c<=5; c++) {
        printf("*");
    };

    printf("\n");
};


return 0;
}