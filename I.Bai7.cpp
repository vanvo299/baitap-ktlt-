//Bai 7. Nhap vao x, tính gia tri bieu thuc
#include <stdio.h>
#include <math.h>
const double e = 2.718281828459045;
int main() {
    float x;
    printf("Nhap vao gia tri x: ");
    scanf("%f", &x);
    double c = pow(x,3) + pow(4,x);
    double d = pow(5,x);
    double b = log(c)/log(5) + log(pow(5,x))/log(e);
    //de tinh duoc log thi ta chia nho phep tinh ra
    double y = ((pow(x,5) - sin((pow(2,x)) - 1) + pow(e,3))/ (pow(b,(x+2)) + 1));
    printf("Ket qua thu duoc la: %.4f\n", y);
    return 0;
}