#include <stdio.h>
#include <math.h> 

int main() {
    int n, soGoc, temp_n, chuSo;
    int soChuSo = 0;
    int tong = 0;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);
    if (n < 0) n = -n; 
    soGoc = n;
    temp_n = n;
    if (n == 0) {
        soChuSo = 1;
    } else {
        while (temp_n != 0) {
            temp_n = temp_n / 10;
            soChuSo++;
        }
    }
    temp_n = soGoc;
    while (temp_n != 0) {
        chuSo = temp_n % 10;
        tong = tong + pow(chuSo, soChuSo);
        temp_n = temp_n / 10;
    }
    if (tong == soGoc) {
        printf("%d la so Armstrong.\n", soGoc);
    } else {
        printf("%d khong phai la so Armstrong.\n", soGoc);
    }
    return 0;
}
