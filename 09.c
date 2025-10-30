#include <stdio.h>

int main() {
    int n;
    int a, b;
    int timThay = 0;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
    printf("Cac cap so (a, b) thoa man:\n");
    for (a = 0; a * a * a <= n; a++) {
        for (b = 0; b * b * b <= n; b++) {
            
            if (a * a * a + b * b * b == n) {
                printf("(%d, %d)\n", a, b);
                timThay = 1;
            }
        }
    }
    if (timThay == 0) {
        printf("Khong tim thay cap so nao.\n");
    }
    return 0;
}
