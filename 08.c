#include <stdio.h>

int main() {
    int n, x;
    int dem = 0;
    int chuSo;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);
    printf("Nhap chu so x (0-9): ");
    scanf("%d", &x);
    if (n < 0) {
        n = -n;
    }
    do {
        chuSo = n % 10;
        if (chuSo == x) {
            dem++;
        }
        n = n / 10;
    } while (n != 0);
    printf("So lan xuat hien: %d\n", dem);
    return 0;
}
