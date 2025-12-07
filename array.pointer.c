#include <stdio.h>

int main() {
    int a[50], n, i;
    int *p;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    p = a;

    printf("Array elements:\n");
    for(i = 0; i < n; i++)
        printf("%d ", *(p + i));

    return 0;
}

