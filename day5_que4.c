//check a character is vowel, consonant, digit, or symbol


#include <stdio.h>

int main() {
    char ch;

    printf("Enter any character: ");
    scanf("%c", &ch);

    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
           ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
            printf("%c is a vowel.\n", ch);
        else
            printf("%c is a consonant.\n", ch);
    }
    else if(ch >= '0' && ch <= '9') {
        printf("%c is a digit.\n", ch);
    }
    else {
        printf("%c is a symbol.\n", ch);
    }

    return 0;
}
