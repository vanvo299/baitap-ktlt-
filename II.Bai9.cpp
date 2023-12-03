//Bai 2. Giai phuong trinh bac nhat ax + b = 0
#include <stdio.h>
#include <math.h>
int main() {
    float a, b;
    printf("Nhap vao cac he so cua phuong trinh: ");
    scanf("%f", &a); // luu ý a phải khac 0
    scanf("%f", &b);
    if (a == 0) {
        printf("Khong hop le \n");
        return 1; // dung chuong trình khi điều kiện sai
    }
   float x = -b/a;
    printf("Nghiem cua phuong trinh bac nhat ax + b = 0 la: %.2f\n", x);

    return 0;
}