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

    //b. Tính tổng các phần tử đứng trước phần tử lớn nhất cuối cùng 
    int max_cuoi = arr[0];
    int vi_tri; // khởi tạo biến để tìm vị trí phần tử lớn nhất cuối cùng
    // tìm phần tử lớn nhất cuối cùng
    for (int i = 0; i < n; i++) {
        if (arr[i] >= max_cuoi) {
            max_cuoi = arr[i];
            vi_tri = i;
        }
    }

    // tính tổng các phần tử đứng trước phần tử lớn nhất cuối cùng
    int sum = 0;
    for (int i = 0; i < vi_tri; i++) {
        sum += arr[i];
    }
    printf("Tong phan tu dung truoc phan tu lon nhat cuoi cung la: %d", sum);
    return 0;
}