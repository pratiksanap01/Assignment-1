// upper case or lower case

#include<stdio.h>

int main() {
    char ch;
    printf("Enter character :");
    scanf("%c",&ch);
    if (ch >= 'A' && ch >= 'Z' ) {
        printf("upper case");
    } else{
        printf("lower case");
    }
    return 0;

}