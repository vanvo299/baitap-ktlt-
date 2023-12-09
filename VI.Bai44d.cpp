/*
Bai 44.  Cho ma trận cấp mxn, viết các hàm thực hiện: 
d. Tìm mảng 1 chiều x[m], mà x[i] =maxi (maxi là phần tử lớn nhất cột i của ma trận ) 
*/

#include <stdio.h>
#include <climits>
// viết hàm nhập mảng
void nhap_mang(int mtr[200][200], int n, int m) { // n: số hàng, m: số cột
	printf("Nhap mang: \n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("a[%d][%d] = ", i, j);
			scanf("%d", &mtr[i][j]);
		}
	}
}

//viết hàm xuất mảng
void xuat_mang(int mtr[200][200], int n, int m) {
	printf("Mang 2 chieu: \n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%d ", mtr[i][j]);
		}
		printf("\n");
	}
}
int main() {
    int n, m, mtr[200][200]; // n: số hàng, m: số cột
    printf("Nhap so hang cua ma tran: ");
    scanf("%d", &n);
    printf("Nhap so cot cua ma tran: ");
    scanf("%d", &m);
    // vì là ma trận vuông nên số hàng = số cột
    if(n != m) {
        printf("Day la ma tran vuong nen so hang bang so cot.\n");
        printf("Vui long chay lai chuong trinh!!!\n");
        return 1;
    }
   nhap_mang(mtr, n, m);
   xuat_mang(mtr, n, m);

   int x[200]; // khởi tạo mảng một chiều cần tìm
   
   for (int j = 0; j < m; j++) {
       x[j] = mtr[0][j]; // gán phần tử đầu tiên mỗi cột làm gía trị max, x[j] là giá trị max
       for (int i = 1; i < n; i++) {
        if (mtr[i][j] >= x[j]) {
            x[j] = mtr[i][j]; // tìm và đưa giá trị max của mỗi cột vào mảng 1 chiều
        }
    }
   }

// In mảng 1 chiều 
   printf("Mang mot chieu can tim la: \n");
   for (int j = 0; j < m; j++) {
       printf("x[%d] = %d\n", j, x[j]);
   }


   return 0;
   
}