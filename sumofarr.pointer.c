#include <stdio.h>

int main() {
    int a[100], n, i, sum = 0;
    int *p;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter %d values:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    p = a;

    for(i = 0; i < n; i++)
        sum += *(p + i);

    printf("Sum = %d", sum);

    return 0;
}

