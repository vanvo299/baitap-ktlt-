// Bài 30b.Số hoàn hảo (bằng tổng các ước số tự nhiên của nó ko kể chính nó, ví dụ 6=1+2+3)
#include <stdio.h>
#include <math.h>

int KT_So_Hoan_Hao(int a) {
    int Tong_uoc = 0;
    for (int i = 1; i < a; i++) {
        if (a % i == 0) { // tim uoc cua a
         Tong_uoc += i;
        }
} return (Tong_uoc == a);  // trả về tổng các ước của a
}
int main() {
     int a;
     printf("Nhap vao so can kiem tra tinh hoan hao: ");
     scanf("%d", &a);
    if (KT_So_Hoan_Hao(a)) {
        printf("%d la so hoan hao!!\n", a); // nếu số a có tổng ước bằng a thì đó là số hoàn hảo
    } else {
    printf("%d khong phai la so hoan hao!!\n", a); // ngược lại a khoong phải là số hoàn hảo
    }

    return 0;
}
