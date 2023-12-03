//Bài 27. Viết lệnh nhập vào giá trị cho biến x cho đến khi x>0 (cho phép nhập tối đa 5 lần)
#include <stdio.h>
int main() {
    int x;
    int so_lan_nhap = 0;
     while (so_lan_nhap < 5) { // toi da 5 lan nhap
        printf("Moi ban nhap x (lan %d): ", so_lan_nhap + 1);
        scanf("%d", &x);
        if (x > 0) {
            printf("Ban da nhap hop le!\n");
            break; 
        }
        if (x < 0) {
            printf("Oi, Ban phai nhap so lon hon 0!!\n");
        }
        so_lan_nhap++;
     }
     if (so_lan_nhap == 5) {
        printf("Ban da nhap 5 lan nhung khong co gia tri hop le!");
        return 1;
     }
    return 0;
}