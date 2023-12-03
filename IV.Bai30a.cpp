// Bài 30. Định nghĩa các hàm kiểm tra: (trả về 1 nếu đúng, ngược lại trả về 0)
// a. Kiểm tra số nguyên tố
/*Thuật toán: 
 Kiem tra tu 2 đến sqrt(n) xem n có chia hết cho số nào không, nếu có thì n không phải là số nguyên tố, 
 còn nếu không thì n chính là số nguyên tố
*/
#include <stdio.h>
#include <math.h>
bool Kiem_tra_NT(int n) {
      if (n <= 1) {
        return false;
      }
      for (int i = 2; i < sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        } return true;
      }
    }
int main() {
    int n; 
    printf("Nhap vao so can kiem tra: ");
    scanf("%d", &n);
    if (n <= 1) {
       printf("So khong hop le!!\n");
       return 1;
    }  
   if (Kiem_tra_NT(n) == true) {
    printf("%d la so nguyen to\n", n);
   } else {
    printf("%d khong la so nguyen to\n", n);
   }
    return 0;
}