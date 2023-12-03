// Bai 20d. In ra hinh chu nhat có m dòng * n cột rỗng
#include <stdio.h>
int main() {
    int m, n;
    printf("Nhap dong: ");
    scanf("%d", &m);
    printf("Nhap cot: ");
    scanf("%d",&n);
    int so_cot_rong = n - 2;
    for (int i = 1; i <= m; i++) { // bieu thi so dong cua hinh chu nhat
        for (int j = 1; j 
        <= n; j++) { // bieu thi so cot cua hinh chu nhat
            if (i == 1 || i == m || j == 1 || j ==n) { // neu la cot 1, hang 1, hay hang cuoi, hay cot cuoi thi in dau *, khong thi in dau cach theo ycdt
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}