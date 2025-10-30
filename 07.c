#include <stdio.h>
#include <math.h> 

int kiemTraSNT(int n) {
    int i; 

    if (n < 2) {
        return 0; 
    }
    for (i = 2; i <= sqrt(n); i++) { 
        if (n % i == 0) {
            return 0; 
        }
    }
    return 1; 
}
int main() {
    int a, b, i;

    printf("Nhap so nguyen a: ");
    scanf("%d", &a);
    printf("Nhap so nguyen b: ");
    scanf("%d", &b);
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    printf("Cac so nguyen to trong khoang [%d, %d] la: ", a, b);
    for (i = a; i <= b; i++) {
        if (kiemTraSNT(i) == 1) { 
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
