/*Bai 20b. Viet chuong trinh xuat ra hinh tam giac vuong can canh n*/
#include <stdio.h>
int main() {
    int n;
    printf("Nhap canh n: ");
    scanf("%d", &n);
    for (int i = n; i >= 0; i--) { // bieu thi so dong cua tam giac
        for (int j = n; j >= n - i; j--) { //so dau * can in ra cua moi dong
            printf(" *");
        }
        printf("\n");   
    }
    return 0;   
}