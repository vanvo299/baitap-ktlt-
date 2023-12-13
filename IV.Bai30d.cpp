// Bài30 d. Số đối xứng ( ví dụ 62126)
#include <stdio.h>
#include <math.h>
int Kiem_tra_so_doi_xung(int n) {
    int temp = n;
    int sum = 0;
    while (temp != 0) {
        int chu_so = temp % 10;
        sum = sum * 10 + chu_so; 
        /* Trong thuật toán kiểm tra số đối xứng, việc nhân sum với 10 và cộng với chữ số hiện tại giúp xây dựng số đảo ngược của n.
        */
        temp /= 10;
    } return n == sum;
}  
int main() {
    int n; // Khởi tạo số cần kiểm tra
    printf("Nhap so can kiem tra: ");
    scanf("%d", &n);
    if (Kiem_tra_so_doi_xung(n)) {
        printf("So %d da cho la so doi xung\n", n);
    } else printf("So %d da cho khong la so doi xung\n", n);
    return 0;
}