/*
Bai 44.  Cho ma trận cấp mxn, viết các hàm thực hiện: 
a. Xóa dòng p 
b. Xoá cột q 
c. Xoá dòng p và cột q 
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
// c. xóa dòng p và cột q
   
   //Cách làm: ghép cách làm của câu a và câu b

   // tạo mảng copy, để cho cả 2 đều dùng chung một mảng
   int mtr_copy[200][200]; //khởi tạo mảng để copy mảng mtr qua mtr_copy
   for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
        mtr_copy[i][j] = mtr[i][j];
       }
   }

   // xóa dòng p
   int dong_can_xoa; //khởi tạo dòng p cần xóa
printf("\nNhap dong can xoa: ");
scanf("%d", &dong_can_xoa);
if (dong_can_xoa > n || dong_can_xoa < 0) {
    printf("Nhap loi!!!");
    return 1;
}


// xóa hàng
for (int i = dong_can_xoa; i <= n - 1; i++) {
	for (int j = 0; j < m; j++) {
		mtr_copy[i][j] = mtr_copy[i + 1][j];
	}
	--n;
}

// xóa cột 
   int cot_can_xoa;
	printf("\nNhap cot can xoa: ");
	scanf("%d", &cot_can_xoa);


	if (cot_can_xoa > m || cot_can_xoa < 0) {
		printf("\nNhap loi");
		return 1;
	}

	// thực hiện xóa cột
	for (int i = 0; i < n; i++) {
		for (int j = cot_can_xoa; j < m - 1; j++) {
			mtr_copy[i][j] = mtr_copy[i][j + 1];
		}
	} 
	--m; // giảm số cột của mảng đi 1
// mảng sau khi xóa dòng, cột
    printf("Mang sau khi xoa dong va cot la: \n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf(" %d ", mtr_copy[i][j]);
		}
		printf("\n");
	}


   return 0;
}