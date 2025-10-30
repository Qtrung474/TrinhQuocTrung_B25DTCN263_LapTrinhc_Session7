#include <stdio.h>

int main() {
    int n, so_dao_nguoc = 0, chu_so, so_goc;
    printf("Nhap mot so nguyen duong n: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Vui long nhap mot so nguyen duong.\n");
        return 1; 
    }
    so_goc = n;
    while (n != 0) {
        chu_so = n % 10;
        so_dao_nguoc = so_dao_nguoc * 10 + chu_so;
        n /= 10;
    }
    if (so_goc == so_dao_nguoc) {
        printf("%d la so doi xung.\n", so_goc);
    } else {
        printf("%d khong phai la so doi xung.\n", so_goc);
    }
    return 0;
}
