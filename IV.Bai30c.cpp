// c. Số hạnh phúc (có số chữ số là chẵn và  tổng các chữ số nửa đầu bằng  tổng các chữ số nửa cuối, ví dụ 2516) 
#include <stdio.h>
#include <math.h>
int KT_so_hanh_phuc(int n) {
    // kiểm tra xem chữ số nhập vào có bao nhiêu chữ số
    int k = 0;
    int temp = n;
    while (temp != 0) {
        temp /= 10;
        k++;
    }
        temp = n;

    // tính tổng nửa đầu
    int sum_dau = 0;
    for (int i = 0; i < k / 2; i++) {
        int chu_so = temp % 10;
        sum_dau += chu_so;
        temp /= 10;
    }
// tính tổng nửa sau
    int sum_sau = 0;
    for (int i = 0; i < k / 2; i++) {
        int chu_so = temp % 10;
        sum_sau += chu_so;
        temp /= 10;
    }
    return sum_dau == sum_sau;
}
int main() {
    int n; // khởi tạo số cần kiểm tra
    printf("Nhap so can kiem tra: ");
    scanf("%d", &n);
    if (n % 2 != 0) {
        printf("Vui long nhap so chan\n");
        return 1;
    }
    if (KT_so_hanh_phuc(n)) {
        printf("%d la so hanh phuc\n", n);
    } else printf("%d khong la so hanh phuc\n", n);

    return 0;
}