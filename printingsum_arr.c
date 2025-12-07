#include <stdio.h>

int main() {
    int n, i, marks, sum = 0;

    printf("Enter number of subjects: ");
    scanf("%d", &n);

    printf("Enter marks of %d subjects:\n", n);

    for(i = 0; i < n; i++) {
        scanf("%d", &marks);
        sum = sum + marks;
    }

    printf("Total marks = %d", sum);

    return 0;
}

