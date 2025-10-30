#include <stdio.h>

int main() {
    int n, soDaoNguoc = 0, chuSo;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);
    while (n != 0) {
        chuSo = n % 10;
        soDaoNguoc = soDaoNguoc * 10 + chuSo;
        n = n / 10;
    }
    printf("So dao nguoc la: %d\n", soDaoNguoc);
    return 0;
}
