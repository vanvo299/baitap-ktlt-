/*
Bài 45.  Sử dụng các hàm ở bài tập 44 thực hiện: 
a. Xóa dòng chứa phần tử lớn nhất của ma trận 
b. Xoá cột chứa phần tử nhỏ nhất cuối cùng của ma trận 
c. Xoá dòng và cột chứa phần tử nhỏ nhất đầu tiên của ma trận 
*/

#include <stdio.h>
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
   
   // a. Xóa dòng chứa phần tử lớn nhất của ma trận
   int max_hang = mtr[0][0];
   int dong_chua_max = 0;
   for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
        if (mtr[i][j] > max_hang) {
            max_hang = mtr[i][j];
            dong_chua_max = i;
        }
    }
   }
   
   // xóa dòng chứa phần tử lớn nhất của ma trận

   // tìm phần tử lớn nhất của ma trận
   for (int i = dong_chua_max; i <= n - 1; i++) {
    for (int j = 0; j < m; j++) {
        mtr[i][j] = mtr[i + 1][j];
    }
    --n;
   }
   printf("Mang sau khi xoa dong chua phan tu lon nhat la: \n");

   // khi dòng chứa phần tử max ở dòng cuối cùng thì phải xóa hẳn dòng đó
   // nên nếu dòng chứa max = n thì chỉ in tới n -1 dòng ( < n)
   // còn dòng chứa max != thì in tất cả các dòng của mảng
   if (dong_chua_max != n) {
   for (int i = 0; i <= n; i++) {
    for (int j = 0; j < m; j++) {
        printf("%d ", mtr[i][j]);
    }
    printf("\n");
   }
} 
   if (dong_chua_max == n) {
    for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
        printf("%d ", mtr[i][j]);
    }
    printf("\n");
   }
   }
  
    return 0;
}