// Bai 12. Nhap vao 3 gia tri a, b, c. Kiem tra xem a b c có phải la 3 canh cua mot tam giac
#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c; // a, b, c tương ứng 3 cạnh trong tam giác
    printf("Nhap canh thu nhat trong tam giac: ");
    scanf("%f", &a);
    printf("Nhap canh thu hai trong tam giac: ");
    scanf("%f", &b);
    printf("Nhap canh thu ba trong tam giac: ");
    scanf("%f", &c);
    //kiem tra 3 canh co phai 3 canh trong tam giac khong
    if ((a + b) > c && (a + c) > b && (b + c) > a) {
        printf("ba canh da cho la ba canh cua mot tam giac \n");
    }
    else {
        printf("ba canh da cho khong tao thanh mot tam giac\n");
    }
    // kiem tra 3 canh cua tam giac la tam giac vuong, can, deu
    if (a == b && b == c) {
        printf("Tam giac deu\n");
    }
    else if(a == b || b == c || a == c) {
        printf("tam giac can\n");
    }
    if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b) {
        // Kiểm tra xem tam giác có là tam giác cân không
        if (a == b || a == c || b == c) {
            printf("Day la tam giac vuong can.\n");
        } else {
            printf("Day la tam giac vuong nhung khong can.\n");
        }
    }
    return 0;
}