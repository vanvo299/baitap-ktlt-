/*Bai 20a. Viet chuong trinh xuat ra hình chữ nhật có m dòng * n cột*/
#include <stdio.h>
int main() {
    int m, n;
    printf("Nhap so dong: ");
    scanf("%d", &m);
    printf("Nhap so cot: ");
    scanf("%d", &n);
    for (int i = 1; i <= m; i++) { // bieu thi so dong cua hcn
        for (int j = 1; j <= n; j++) { // bieu thi so kí tự * can in ra của mỗi dòng
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}