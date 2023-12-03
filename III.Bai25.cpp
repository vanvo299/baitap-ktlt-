// Bai 25. . Cho số thực a>0, tìm số tự nhiên n nhỏ nhất sao cho:  S = 1 + 2 + … +n > a
// Chúng ta nhập giá trị a từ người dùng.
/*Sau đó, chúng ta sử dụng một vòng lặp while để tính tổng S của các số từ 1 đến n, trong đó n được tăng lên mỗi lần lặp. 
Vòng lặp tiếp tục cho đến khi S lớn hơn a.
Cuối cùng, chúng ta in ra số tự nhiên n nhỏ nhất sao cho tổng S lớn hơn a.*/
#include <stdio.h>
#include <math.h>
int main() {
    int a;
    printf("Nhap gia tri a: ");
    scanf("%d", &a);
    int S = 0;
    int n = 1;
    while (S <= a) {
        S += n;
        n++;
    }
    if (S > a) {
        printf("Gia tri cua n la: %d\n", n-1); // n-1 để lấy kết quả chính xác nhất của n
    }
    return 0;
}