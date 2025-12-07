#include <stdio.h>

int main() {
    int marks[6];
    int i;

    printf("Enter marks of 6 subjects:\n");

    for(i = 0; i < 6; i++) {
        scanf("%d", &marks[i]);
    }

    printf("You entered:\n");

    for(i = 0; i < 6; i++) {
        printf("%d\n", marks[i]);
    }

    return 0;
}

