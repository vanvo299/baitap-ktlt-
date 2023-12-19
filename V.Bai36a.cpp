/*
Bài 36.  Nhập vào 1 dãy gồm n số thực (5≤n≤10) 
a. Xóa các phần tử nhỏ hơn x 
b. Tính tổng các phần tử đứng trước phần tử lớn nhất cuối cùng 
c. Tính tổng các phần tử đứng trước phần tử lẻ cuối cùng 
d. Tính tổng các phần tử đứng sau phần tử nhỏ nhất đầu tiên 
e. Tính r bằng phần tử nào có phần nguyên là số lẻ lớn nhất 
*/

#include <stdio.h>
#include <math.h>
void nhap_mang(int arr[100], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }  
}
void xuat_mang(int arr[100], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
int main() {
    int n; // khởi tạo số phần tử trong mảng
    int arr[100]; // cấp phát bộ nhớ cho mảng
    printf("Nhap so luong phan tu cua day so: ");
    scanf("%d", &n);
    printf("Nhap day so: ");
    nhap_mang(arr, n);
    printf("Day so: ");
    xuat_mang(arr, n);
    
    printf("\n");

    // a. Xóa các phần tử nhỏ hơn x 
    int x; // khởi tạo phần tử x, để so sánh
    printf("Nhap vao x: ");
    scanf("%d", &x);
    int mtr[100]; // khởi tạo mảng mới để lưu phần tử lớn hơn x
    int count = 0; // tạo biến đếm để lấy kích thước mảng lưu phần tử lớn hơn x
    for (int i = 0; i < n; i++) {
        if (arr[i] >= x) {
           mtr[count] = arr[i];
            count++;
        } 
    }
    printf("Day so sau khi xoa cac cac phan tu nho hon %d la: ", x);
    for (int i = 0; i < count; i++) {
        printf("%d ", mtr[i]);
    }

    


    return 0;
}