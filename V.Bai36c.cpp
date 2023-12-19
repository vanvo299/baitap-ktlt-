/*
Bài 36.  Nhập vào 1 dãy gồm n số thực (5≤n≤10) 
a. Xóa các phần tử nhỏ hơn x 
b. Tính tổng các phần tử đứng trước phần tử lớn nhất cuối cùng 
c. Tính tổng các phần tử đứng trước phần tử lẻ cuối cùng 
d. Tính tổng các phần tử đứng sau phần tử nhỏ nhất đầu tiên 
e. Tính r bằng phần tử nào có phần nguyên là số lẻ lớn nhất 
*/
#include <stdio.h>
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

    // c. Tính tổng các phần tử đứng trước phần tử lẻ cuối cùng 
    
    // tìm vị trí phần tử lẻ cuối cùng
    int vi_tri;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            vi_tri = i;
        }
    }

    // tổng các phần tử đứng trước phần tử lẻ cuối cùng
    int sum = 0;
    for (int i = 0; i < vi_tri; i++) {
        sum += arr[i];
    }
    printf("Tong phan tu dung truoc phan tu le cuoi cung la: %d", sum);
    return 0;
}