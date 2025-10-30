#include <stdio.h>

int main() {
    int m, n;
    int i, j;

    printf("Nhap so dong m: ");
    scanf("%d", &m);
    printf("Nhap so cot n: ");
    scanf("%d", &n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
