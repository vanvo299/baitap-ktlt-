// Bai 16. S7 = 1! - 2! +3! - 4! + …  n!
#include <stdio.h>
#include <math.h> 
float giai_thua(int n) {
     int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    return factorial;
}
int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    float Tong = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            Tong -= giai_thua(i);
        }
        if (i % 2 != 0) {
            Tong += giai_thua(i);
        }
    }
    printf ("Ket qua cua phep tinh la: %.0f\n", Tong);
    return 0;
}