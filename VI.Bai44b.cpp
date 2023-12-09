/*
Bai 44.  Cho ma trận cấp mxn, viết các hàm thực hiện: 
a. Xóa dòng p 
b. Xoá cột q 
c. Xoá dòng p và cột q 
d. Tìm mảng 1 chiều x[n], mà x[i] =maxi (maxi là phần tử lớn nhất cột 
i của ma trận ) 
*/

//b. Xoá cột q 
    /* Cách xóa một cột trong mảng 2 chiều:
    B1: Xác định cột cần xóa. Giả sử cột cần xóa là q
    B2: dịch chuyển các cột phía bên phải cột q cần xóa qua một cột.
    Cụ thể, với mỗi cột j từ q đến m (số cột của mảng), bạn sẽ sao chép cột j + 1 lên cột j
    B3: Giảm số cột của mảng đi 1
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
   
// b. xóa cột p
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
			mtr[i][j] = mtr[i][j + 1];
		}
	} 
	--m; // giảm số cột của mảng đi 1

	printf("Mang sau khi xoa cot la: \n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf(" %d ", mtr[i][j]);
		}
		printf("\n");
	}
   return 0;
}
