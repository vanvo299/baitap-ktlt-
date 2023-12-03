//Bài 26. . Tính giá trị các hàm sau (không dùng hàm chuẩn): S2 = sinx  x – x3/3! + x5/5! – x7/7! + …
#include <stdio.h>
#include <math.h>
int main() {
    double x, k;
    printf("Nhap x: ");
    scanf("%lf", &x);
    printf("Nhap k:");
    scanf("%lf", &k);

    double x_mu_k = x; // KHoi tao x^k = x
    double k_fact = 1.0; // khoi tao k!
    double S = x; // khoi tao giá trị đầu tiên của tổng
    double sign = -1.0; // khoi tạo lẹnh dung de doi dau theo ycdb

    for (int i = 3; i <= 2*k + 1; i+=2) {
        x_mu_k *= x * x; // khi nay x_mu_k se la x^3, sau mot vong lap thi so mu lai tang len 2
        k_fact *= (i * (i - 1)); 
         S+= sign * x_mu_k / k_fact;
       sign = -sign; // thay doi dau 
    }
    printf("Tong can tinh bang: %lf\n", S);
    return 0;
}
