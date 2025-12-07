#include <stdio.h>

int main() {
    int a[10][10], m, n, i, j, zero = 0, total;

    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);

    total = m*n;

    printf("Enter matrix elements:\n");
    for(i=0;i<m;i++)
        for(j=0;j<n;j++){
            scanf("%d", &a[i][j]);
            if(a[i][j] == 0)
                zero++;
        }

    if(zero > total/2)
        printf("Sparse Matrix");
    else
        printf("Not a Sparse Matrix");

    return 0;
}

