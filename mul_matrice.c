#include <stdio.h>

int main() {
    int a[10][10], b[10][10], m, n, p, q, c[10][10], i, j, k;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &m, &n);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &p, &q);

    if(n != p){
        printf("Matrix multiplication not possible");
        return 0;
    }

    printf("Enter first matrix elements:\n");
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d", &a[i][j]);

    printf("Enter second matrix elements:\n");
    for(i=0;i<p;i++)
        for(j=0;j<q;j++)
            scanf("%d", &b[i][j]);

    for(i=0;i<m;i++){
        for(j=0;j<q;j++){
            c[i][j] = 0;
            for(k=0;k<n;k++)
                c[i][j] += a[k][j] + b[k][j];
        }
    }

    printf("Resultant matrix:\n");
    for(i=0;i<m;i++){
        for(j=0;j<q;j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }

    return 0;
}

