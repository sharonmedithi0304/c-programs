#include <stdio.h>

int main() {
    char str[100];
    char *p;

    printf("Enter a string: ");
    gets(str);

    p = str;

    printf("String is: ");
    while(*p != '\0') {
        printf("%c", *p);
        p++;
    }

    return 0;
}

