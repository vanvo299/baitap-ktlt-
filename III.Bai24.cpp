// Bài 24. Tìm ước số chung lớn nhất, bội số chung nhỏ nhất của 2 số nguyên dương
// Phương pháp: dùng thuật toán Eculid (lí thuyết trong file thuật toán C)
#include <stdio.h>
#include<math.h>
// Hàm tính ƯCLN bằng thuật toán Eculid
int GCD(int a, int b) {
     while (a != 0 && b != 0) {
      int temp = b; // lưu b vào một biến trung gian để giữ kết quả của b trước khi cập nhật giá trị của b
      b = a % b; // khi này b sẽ là phần dư của a chia b
      a = temp; //khi này gán a lại cho b ban đầu đã đc gán vào biến trung gian temp, và tiếp tục vòng lặp
        }
     }
// Hàm tính BCNN thông qua GCD
int LCM(int a, int b) {
    return (a * b) / GCD(a, b);
}     

int main () {
    int a, b;
    printf("Nhap vao so nguyen thu nhat: ");
    scanf("%d", &a);
    printf("Nhap vao so nguyen thu hai: ");
    scanf("%d", &b);

    if (a < 0 || b < 0) {
        printf("Khong hop le!\n");
        return 1;
    }
    // Tính GCD và LCM
    int UCLN = GCD(a, b);
    int BCNN = LCM(a, b);
    
    printf("Uoc chung lon nhat cua %d va %d la: %d\n", a, b, UCLN);
    printf("Boi chung nho nhat cua %d vs %d la: %d\n", a, b, BCNN);
    return 0;
}