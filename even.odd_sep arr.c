#include <stdio.h>

int main() {
    int n, i;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Even numbers are:\n");
    for(i = 0; i < n; i++) {
        if(a[i] % 2 == 0) {
            printf("%d\n", a[i]);
        }
    }

    printf("Odd numbers are:\n");
    for(i = 0; i < n; i++) {
        if(a[i] % 2 != 0) {
            printf("%d\n", a[i]);
        }
    }

    return 0;
}

