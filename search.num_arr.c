#include <stdio.h>

int main() {
    int n, i, search, found = 0;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &search);

    for(i = 0; i < n; i++) {
        if(a[i] == search) {
            found = 1;
            break;
        }
    }

    if(found == 1) {
        printf("Number found in the list");
    } else {
        printf("Number not found in the list");
    }

    return 0;
}

