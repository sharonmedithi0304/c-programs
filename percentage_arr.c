#include <stdio.h>

int main() {
    int n, i, marks, sum = 0;
    float percentage;

    printf("Enter number of subjects: ");
    scanf("%d", &n);

    printf("Enter marks of %d subjects:\n", n);

    for(i = 0; i < n; i++) {
        scanf("%d", &marks);
        sum = sum + marks;
    }

    percentage = (sum * 100.0) / (n * 100);  // assuming each subject is out of 100

    printf("Total Marks = %d\n", sum);
    printf("Percentage = %.2f%%", percentage);

    return 0;
}

