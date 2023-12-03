// Bài 26c. Tính giá trị các hàm sau (không dùng hàm chuẩn) : S3 = cosx  1 – x2/2! + x4/4! – x6/6! + …
#include <stdio.h>
#include <math.h>
int main() {
    double x;
    int k;
    printf("Nhap x: ");
    scanf("%lf", &x);
    printf("Nhap k: ");
    scanf("%d", &k);

    double S = 1.0;
    double x_mu_k = 1.0;
    double k_fact = 1.0;
    double sign = -1.0;

    for (int i = 2; i <= 2 * k; i+=2) {
         S += sign * (x_mu_k / k_fact);
        x_mu_k *= x * x;
        k_fact *= (i * (i - 1));
         sign = -sign;
    }  
    printf("Tong cua bieu thuc bang: %lf\n", S);
    return 0;
}