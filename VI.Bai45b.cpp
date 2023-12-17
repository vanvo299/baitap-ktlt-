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

   //b. Xoá cột chứa phần tử nhỏ nhất cuối cùng của ma trận 

   // tìm phần tử nhỏ nhất của ma trận
   int min_cuoi = mtr[0][0];
   int cot_chua_mincuoi = 0;

   // tìm phần tử nhỏ nhất cuối cùng của ma trận
   for (int j = 0; j < m; j++) {
       for (int i = 0; i < n; i++) {
           if (mtr[i][j] <= min_cuoi) { // để tìm ra phần tử nhỏ nhất cuối cùng thì khi dùng vòng lặp, 
           // thay vì dùng điều kiện so sánh là < nhưu so sánh bth thì ta cần dùng dấu <= trong trường hợp này.
               min_cuoi = mtr[i][j];
               cot_chua_mincuoi = j;
           }
       }
   }
   // xóa cột chứa phần tử nhỏ nhất cuối cùng của ma trận
   for (int i = 0; i < n; i++) {
    for (int j = cot_chua_mincuoi; j < m - 1; j++) {
        mtr[i][j] = mtr[i][j + 1];
    }
   } 
   --m;
   
   // in ma trận sau khi xóa cột cuối cùng chứa phần tử nhỏ nhất 
   printf("Mang sau khi xoa cot chua phan tu nho nhat cuoi cung la: \n");
   
   for (int i = 0; i < n; i++) {
       for (int j = 0; j < m; j++) {
           printf("%d ", mtr[i][j]);
       }
       printf("\n");
   }
  
    

    return 0;
}