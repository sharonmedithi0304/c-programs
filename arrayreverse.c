#include <stdio.h>

int main() {
    int n, i;

    printf("Enter number of values: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d values:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Values in reverse order:\n");
    for(i = n - 1; i >= 0; i--) {
        printf("%d\n", a[i]);
    }

    return 0;
}
