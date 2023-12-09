/*
Bai 44.  Cho ma trận cấp mxn, viết các hàm thực hiện: 
a. Xóa dòng p 
b. Xoá cột q 
c. Xoá dòng p và cột q 
d. Tìm mảng 1 chiều x[n], mà x[i] =maxi (maxi là phần tử lớn nhất cột 
i của ma trận ) 
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


    //a. Xóa dòng p
/*
Các bước để xóa một hàng trong mảng 2 chiều:
B1: Xác định hàng cần xóa. Giả sử hàng cần xóa là p
B2: dịch chuyển các hàng phía dưới hàng p cần xóa lên một hàng.
Cụ thể, với mỗi hàng i từ p đến n (số hàng của mảng), bạn sẽ sao chép hàng i + 1 lên hàng i
B3: Giảm số hàng của mảng đi 1
*/

int dong_can_xoa; //khởi tạo dòng p cần xóa
printf("\nNhap dong can xoa: ");
scanf("%d", &dong_can_xoa);
if (dong_can_xoa > n || dong_can_xoa < 0) {
    printf("Nhap loi!!!");
    return 1;
}


// xóa dòng 
for (int i = dong_can_xoa; i <= n - 1; i++) {
	for (int j = 0; j < m; j++) {
		mtr[i][j] = mtr[i + 1][j];
	}
	--n;
}
printf("Mang sau khi xoa dong la: \n");
for (int i = 0; i<n; i++) {
	for (int j = 0; j < m; j++) {
		printf(" %d ", mtr[i][j]);
	}
	printf("\n");
}


	

    return 0;
}