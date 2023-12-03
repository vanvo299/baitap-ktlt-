// Bai 26. . Tính giá trị các hàm sau (không dùng hàm chuẩn S1 = pow(e,x) gàn bằng 1 + x + x2/2! + … + xk/k! + …
#include <stdio.h>
#include <math.h>
int main() {
    double x;
    int k;
    printf("Nhap x: ");
    scanf("%lf", &x);
    printf("Nhap k: ");
    scanf("%d", &k);

     double S = 1.0; // khởi tạo giá trị ban đầu của tổng
    double x_k = 1.0; // khởi tạo x^k = 1
    double k_fact = 1.0; //khởi tạo k!
    for (int i = 1; i <= k; i++) {
        x_k *= x; //tính x^k
        k_fact *= i; // tính k!
        S += x_k / k_fact; // cộng giá trị mới vào tổng
    }
    printf("Ket qua cua tong la: %lf\n", S);
    return 0;
}