/*Bai 23. Nhập vào một số nguyên dương, tính tổng các số của nó, đếm số chữ số
 (ví dụ: 1234 -> tổng = 1+2+3+4 = 10, số chữ số = 4)*/
 #include <stdio.h>
 #include <math.h>
 #include <string.h>
 int main() {
   char so_nguyen_duong[100]; // khai báo xâu của C là char ???
   int tong = 0;
    int so_chu_so;
    printf("Nhap vao so nguyen duong: ");
    scanf("%s", so_nguyen_duong);
    
    for (int i = 0; i < strlen(so_nguyen_duong); i++) { //strlen(so_duong_nguyen) là lấy độ dài xâu
        int chu_so = so_nguyen_duong[i] - '0'; // chuyển kí tự số thành giá trị số nguyên
       tong += chu_so;
    }
    for (int i = 0; i < strlen(so_nguyen_duong); i++) {
       so_chu_so = strlen(so_nguyen_duong); // lấy độ dài
    }
    printf("Tong cac so nguyen duong la: %d\n", tong);
    printf("So chu so co trong so nguyen duong vua nhap la: %d\n", so_chu_so);
    return 0;
 }