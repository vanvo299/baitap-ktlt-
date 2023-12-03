//Bài 24. Tìm ước số chung lớn nhất, bội số chung nhỏ nhất của 2 số nguyên dương
#include <stdio.h>
#include <math.h>
int main() {
    int a,b;
    printf("Nhap so nguyen duong thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so nguyen duong thu hai: ");
    scanf("%d", &b);

     int A = a;
     int B = b;
      //  dùng để lưu giá trị ban đầu của biến a để tính BCNN
    if (a <= 0 || b <= 0) {
        printf("So khong hop le!!\n");
        return 1;
    }
    // tìm ước chung lớn nhất của 2 số
    while (a != b) {
        if (a > b) {
            a = a - b;
        }
        else {
            b = b - a;
        }
    }
    int GCD = a;
    printf("Uoc chung lon nhat cua hai so %d va %d la: %d\n", A, B, GCD);
    
    // tìm bội chung nhỏ nhất
    int LCM = (A * B) / GCD;
    printf("Boi chung nho nhat cua hai so %d va %d la: %d\n", A, B, LCM);
   
    return 0;
}