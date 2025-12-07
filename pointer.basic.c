#include <stdio.h>

int main() {
    int a;
    int *p;

    printf("Enter a number: ");
    scanf("%d", &a);

    p = &a;

    printf("Value: %d\n", a);
    printf("Address: %p\n", p);
    printf("Value using pointer: %d\n", *p);

    return 0;
}

