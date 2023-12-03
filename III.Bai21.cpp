//Bai 21. In ra các số nguyên tố nhỏ hơn hoặc bằng n
//Thuat toan: 
/*
1. kiem tra so n co phai la so nguyen to khong (neu so nhap vao nho hon hoac bang 1 thi dung chuong trinh)
2. In cac so can tim ra
*/
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
// kiem tra xem so da nhap co phai la so nguyen to hay khong
bool Kiem_tra_NT(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int n;
    printf("Nhap so n: ");
    scanf("%d", &n);
    if (n <= 1) {
        printf("So khong hop le!\n");
        return 1;
    }
    // neu ham kiem tra Nt tren dung thi in cac so thoa man dieu kien ra (dung vong lap de in)
    printf("Cac so nguyen to nho hon hoac bang %d la: ", n);
    for (int i = 2; i <= n; i++) {
        if (Kiem_tra_NT(i) == true) {
            printf("%2d", i);
        }
    }
    return 0;
}