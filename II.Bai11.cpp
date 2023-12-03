// Bai 11: Nhap vao diem cua 3 mon hoc, tinh toan
#include <stdio.h>
#include <math.h>
#include <string.h>
int main() {
    float diem_toan, diem_ly, diem_tin;
    printf("Nhap diem toan: ");
    scanf("%f", &diem_toan);
    printf("Nhap diem ly: ");
    scanf("%f", &diem_ly);
    printf("Nhap diem tin: ");
    scanf("%f", &diem_tin);
    if (diem_toan < 0 || diem_toan > 10) {
        printf("Chuong trinh loi!!!\n");
        return 1;
    }
      if (diem_ly < 0 || diem_ly > 10) {
        printf("Chuong trinh loi!!!\n");
        return 1;
    }
      if (diem_tin < 0 || diem_tin > 10) {
        printf("Chuong trinh loi!!!\n");
        return 1;
    }
    // xet hoc bong
    float DTB;
    DTB = (diem_toan + diem_ly + diem_tin) / 3.0;
    printf("Diem trung binh: %.2f\n", DTB);
    if (DTB >= 8 ) {
        printf("Xep loai: GIOI!!\n");
    }
    else if(DTB >=7 && DTB < 8 ) {
        printf("Xep loai: KHA!!\n");
    }
    else if (DTB >= 5 && DTB < 7) {
        printf("Xep loai: TRUNG BINH\n");
    }
    else {
        printf("Xep loai: YEU\n");
    }
    //xep loai
    if (DTB >= 8) {
        printf("200\n");
    }
    else if (DTB >= 7 && DTB < 8) {
        printf("100\n");
    }
    else {
        printf("0");
    }
    return 0;
}