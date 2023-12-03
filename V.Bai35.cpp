/*Bai 35. Nhập vào 1 dãy gồm n số thực (n≤10)
a. Có bao nhiêu phần tử thuộc [x, y]
b. Tìm xem có phần tử b trong dãy không?
c. Xoá phần tử c đầu tiên trong dãy
d. Sắp dãy tăng dần, chèn phần tử z để có dãy tăng dần*/
#include <stdio.h>
#include <math.h>
int main() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    if (n < 1 || n > 10) {
        printf("Ban vui long nhap so luong phan tu nho hon 10 phan tu!!\n");
        return 1;
    }
    int arr[100];
    printf("Nhap cac phan tu can kiem tra: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // a. Có bao nhiêu phần tử thuộc đoạn [x,y]
    int x, y;
    printf("Nhap doan [x,y] can kiem tra: ");
    scanf("%d %d", &x, &y);
     int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= x && arr[i] <= y) {
            count++;
        }
    }
     printf("So phan tu thuoc doan [x,y] la: %d\n", count);

     //b. Tìm xem có phần tử b trong dãy không?
    int b;
    printf("Nhap phan tu b: ");
    scanf("%d", &b);

    int kiem_tra = 0; // dùng biến để kiểm tra trong mảng có phần tử b cần tìm hay không
    for (int i = 0; i < n; i++) {
        if (arr[i] == b) {
            kiem_tra = 1; // nếu có thì dừng vòng lặp
          break; 
        }
    }
    if (kiem_tra != 0) {
        printf("%d co trong day!!\n", b);

    } else {
         printf("%d khong co trong day!!\n", b);
    }
    //c. Xoá phần tử c đầu tiên trong dãy
    int c;
    printf("Nhap vao ki tu can xoa: ");
    scanf("%d", &c);
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == c) {
            for (int j = i; j < n - 1; j++) {
             arr[j] = arr[j + 1];
            }
            n--; // giảm kích thước mảng
            i--; 
        }
    }
     printf("Mang sau khi xoa ki tu %d la: ", c);
    for(int i = 0; i < n; i++) {
       printf("%d", arr[i]);
       if (i < n-1) {
        printf(" ");
       }
    }
    //d. Sắp dãy tăng dần, chèn phần tử z để có dãy tăng dần
    // ưng nộp thì ắt code ra, để nguyên hết thì lỗi (qua visual studio)
    int z;
 printf("\nNhap phan tu can chen: ");
 scanf("%d", &z);
 int vi_tri;
 printf("Nhap vi tri can chen: ");
 scanf("%d", &vi_tri);
 for (int i = n; i > vi_tri; i--) { // dời các phần tử nằm sau vị trí cần chèn sang phải
     arr[i] = arr[i - 1];
  }
 arr[vi_tri] = z;
 n++; // tăng kích thước mảng
 printf("Mang sau khi nhap z la: ");
 for (int i = 0; i < n; i++) {
     printf("%d", arr[i]);
     if (i < n - 1) {
         printf(" ");
     }
 }
 //sắp xếp mảng sau khi chèn
 for (int i = 0; i < n; i++) { 
     for (int j = i + 1; j < n; j++) {
         if (arr[j] < arr[i]) {
             int so_hoan_doi = arr[j];
             arr[j] = arr[i];
             arr[i] = so_hoan_doi;
         }
     }
 }
 printf("\nDay so thu duoc la: ");
 for (int i = 0; i < n; i++) {
     printf("%d", arr[i]);
     if (i < n - 1) {
         printf(" ");
     }
 }
    return 0;
}