/*Bai 34. Nhập vào 1 dãy gồm n số nguyên (n≤10)
a. Tìm phần tử lớn nhất / nhỏ nhất
b. Tìm phần tử lớn nhất đầu tiên / cuối cùng (trả về giá trị và vị trí)
c. Tính tổng các phần tử lẻ/chẳn
d. Tính tổng của phần tử đầu, giữa và cuối
e. Đếm số phần tử không chia hết cho 5
f. Xuất dãy theo thứ tự giảm dần 
g. Đảo dãy (giá trị của các phần tử bị đảo ngược)
h. Chuyển các phần tử lẻ sang trái, chẳn sang phải*/
#include <stdio.h>
#include <math.h>
int main() {
    int n;
    int mang[100];
    printf("Bao nhieu phan tu trong mang: ");
    scanf("%d", &n);
    printf("Nhap so phan tu co trong mang: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &mang[i]);
    }
    // a. tìm phần tử lớn nhất / nhỏ nhất
    //lỡn nhất
    int Max_value = mang[0];
    for (int i = 0; i < n; i++) {
        if (mang[i] > Max_value) {
            Max_value = mang[i];
        }
    }
    printf("Gia tri lon nhat la: %d\n", Max_value);
    // nhỏ nhất
    int Min_value = mang[0];
    for (int i = 0; i < n; i++) {
        if (mang[i] < Min_value) {
            Min_value = mang[i];
        }
    }
    printf("Gia tri nho nhat la: %d\n", Min_value);

    // b. Tìm phần tử lớn nhất đầu tiên / cuối cùng (trả về giá trị và vị trí)
    // Tìm phần tử lớn nhất đầu tiên và vị trí của nó trong mảng
    int Max_value_first = mang[0];
    int Max_value_first_location = 0;
    for (int i = 0; i < n; i ++) {
        if (mang[i] > Max_value_first) {
            Max_value_first = mang[i];
            Max_value_first_location = i;
        }
    }
    printf("Phan tu lon nhat dau tien la: %d\n", Max_value_first);
    printf("Vi tri cua phan tu lon nhat dau ten la vi tri thu %d trong mang\n", Max_value_first_location);
    // Tìm phần tử lớn nhất cuối cùng và vị trí của nó trong mảng
    int Max_value_finally = mang[0];
    int Max_value_finally_location = 0;
    for (int i = 0; i < n; i++) {
        if (mang[i] >= Max_value_finally) { // nhớ dùng dấu >=
            Max_value_finally = mang[i];
            Max_value_finally_location = i;
        }
    }
    printf("Phan tu lon nhat cuoi cung la: %d\n", Max_value_finally);
    printf("Vi tri cua phan tu lon nhat cuoi cung la vi tri thu %d trong mang\n", Max_value_finally_location);

    //c. Tính tổng các phần tử lẻ/chẳn
    //Tính tổng phần tử lẻ
    int Tong_le = 0;
    for (int i = 0; i< n; i++) {
        if (mang[i] % 2 != 0) {
            Tong_le += mang[i];
        }
    }
    printf("Tong cac so le trong mang la: %d\n", Tong_le);
    //Tính tổng phần tử chẵn
    int Tong_chan = 0;
    for (int i = 0; i < n; i++) {
        if (mang[i] % 2 == 0) {
            Tong_chan += mang[i];
        }
    }
    printf("Tong cac so chan trong mang la: %d\n", Tong_chan);
    //d. Tính tổng của phần tử đầu, giữa và cuối
    int Tong_giua_dau_cuoi = 0;
        Tong_giua_dau_cuoi += (mang[0] + mang[(n-1)/2] + mang[n-1]); 
        // tong cua phan tu dau mang, giua mang, cuoi mang
    printf("Tong cua phan tu dau, giua, cuoi la: %d\n ", Tong_giua_dau_cuoi);

    // e. Đếm số phần tử không chia hết cho 5
    int count = 0;
    for (int i = 0; i< n; i++) {
        if (mang[i] % 5 != 0) {
            count++;
        }
    }
    printf("So phan tu khong chia het cho 5 trong mang la: %d\n", count);
    // f. Xuất dãy theo thứ tự giảm dần
    for (int i = 0; i < n; i++) {
        for (int j= i + 1; j < n; j++) {
            if (mang[i] < mang[j]) {
                int hoan_doi = mang[i];
                mang[i] = mang[j];
                mang[j] = hoan_doi;
            }
        }
    }
    printf("Day theo thu tu giam dan la: ");
    for (int i = 0; i < n; i++) {
        printf("%3d", mang[i]);
    }
    printf("\n");
    //g. Đảo dãy (giá trị của các phần tử bị đảo ngược)
for(int i=0; i<n/2; i++) {
    int temp = mang[n - i - 1];
    mang[n - i - 1] = mang[i];
    mang[i] = temp;
}
    printf("Day sau khi dao la: ");
    for (int i = 0; i < n; i++) {
        printf("%3d", mang[i]);
    }
    return 0;
}