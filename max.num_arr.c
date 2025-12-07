#include <stdio.h>

int main() {
    int n, i, max;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d numbers:\n", n);

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    max = a[0];

    for(i = 1; i < n; i++) {
        if(a[i] > max) {
            max = a[i];
        }
    }

    printf("Maximum number = %d", max);

    return 0;
}

