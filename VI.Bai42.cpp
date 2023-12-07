/*
Bài 42.  Nhập vào ma trận vuông cấp n 
a. Tìm phần tử lớn nhất /nhỏ nhất 
b. Tìm phần tử nhỏ nhất đầu tiên/cuối cùng (trả về giá trị và vị trí) 
c. Tính tổng các phần tử trên đường chéo chính/chéo phụ 
d. Tính tổng của dòng chứa phần tử nhỏ nhất 
e. Kiểm tra ma trận đối xứng qua đường chéo chính/chéo phụ ? 
f. Tính tổng dòng p, tổng cột q (p,q≤n)
*/
#include <stdio.h>
#include <math.h>
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
int main()
{
	int n, m, mtr[200][200];
	printf("Nhap so hang: ");
	scanf("%d", &n);
	printf("Nhap so cot: ");
	scanf("%d", &m);

	nhap_mang(mtr, n, m);
	xuat_mang(mtr, n, m);
	//a.Tìm phần tử lớn nhất / nhỏ nhất 

    //tìm phần tử lớn nhất trong mảng
	int max_mang = mtr[0][0];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (mtr[i][j] > max_mang) {
				max_mang = mtr[i][j];
			}
		}
	}
    // tìm phần tử nhỏ nhất trong mảng
	int min_mang = mtr[0][0];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (mtr[i][j] < min_mang) {
				min_mang = mtr[i][j];
			}
		}
	}
	printf("Phan tu lon nhat trong mang la: %d\n", max_mang);
	printf("Phan tu nho nhat trong mang la: %d\n", min_mang);

   //b. Tìm phần tử nhỏ nhất đầu tiên/cuối cùng (trả về giá trị và vị trí) 


int min_first_location_array_hang = -1;
int min_first_location_array_cot = -1;

// tìm phần tử nhỏ nhất đầu tiên và vị trí của nó 
int min_first_array = mtr[0][0];
for (int i = 0; i < n; i++) {
	for (int j = 0; j < m; j++) {
		if (mtr[i][j] <= min_first_array) {
			min_first_array = mtr[i][j];
			min_first_location_array_hang = i;
			min_first_location_array_cot = j;
		}
	}
}
printf("Gia tri cua phan tu nho nhat dau tien la: %d\n", min_first_array);
printf("Vi tri cua phan tu nho nhat dau tien trong mang la: mtr[%d][%d]\n ", min_first_location_array_hang, min_first_location_array_cot);

// tìm phần tử nhỏ nhất cuối cùng và vị trí của nó
int min_final_array = INT_MAX; // Khởi tạo với giá trị nguyên tối đa có thể
int min_final_location_array_hang = -1; // khởi tạo vị trí hàng
int min_final_location_array_cot = -1; // khởi tạo vị trí cột
for (int i = n - 1; i >= 0; i--) {
	for (int j = m - 1; j >= 0; j--) {
		if (mtr[i][j] < min_final_array) {
			min_final_array = mtr[i][j];
			min_final_location_array_hang = i;
			min_final_location_array_cot = j;
		}
	}
}
    printf("Gia tri cua phan tu nho nhat cuoi cung la: %d\n", min_final_array);
	printf("Vi tri cua phan tu nho nhat cuoi cung trong mang la: mtr[%d][%d]\n ", min_final_location_array_hang, min_final_location_array_cot);
    

		//c. Tính tổng các phần tử trên đường chéo chính/chéo phụ 

	// tính tổng đường chéo chính
	// Cách làm: các phần tử trong ma trận thuộc đường chéo chính <=> hệ số hàng = hệ số cột (hay i = j)
	int tong_cheo_chinh = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (i == j) {
				tong_cheo_chinh += mtr[i][j];
			}
		}
	}
	printf("Tong cac phan tu tren duong cheo chinh la: %d\n", tong_cheo_chinh);

	// tính tổng các phần tử trên đường chéo phụ
	// Cách làm: các phần tử trong ma trận thuộc đường chéo phụ <=> hệ số hàng + hệ số cột = hệ số hàng + 1;
	int tong_cheo_phu = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (i + j == n - 1) {
				tong_cheo_phu += mtr[i][j];
			}
		}
	}
	printf("Tong cac phan tu tren duong cheo phu la: %d\n", tong_cheo_phu);


     

	//d. Tính tổng của dòng chứa phần tử nhỏ nhất 
      // lấy lại gái trị min mảng ở trên 
    int hang_chua_min = -1; // khởi tạo hàng chứa phần tử nhỏ nhất
    for (int i = 0; i < n; i++) {
	    for (int j = 0; j < m; j++) {
		if (mtr[i][j] <= min_mang) {
			hang_chua_min = i;
		   }
	    }
    }
    printf("Hang chua phan tu nho nhat la: %d\n",hang_chua_min);
    int tong_dong_chua_min = 0;
    for (int i = 0; i < n; i++) {
	    for (int j = 0; j < m; j++) {
		     if (hang_chua_min == i) {
			     tong_dong_chua_min += mtr[hang_chua_min][j];
		   }
	    }
    }
    printf("Tong cua dong chua phan tu nho nhat la: %d\n", tong_dong_chua_min);

    // e. Kiểm tra ma trận đối xứng qua đường chéo chính/chéo phụ ? 
	int check = 0; // khởi tạo biến kiểm tra ma trận có phải ma trận đối xứng không
    for (int i = 0; i < n; i++) {
	    for (int j = 0; j < m; j++) {
		    if (mtr[i][j] != mtr[j][i]) { 
			check = 1;
		}
	}
}
if (check == 1) {
	printf("Ma tran khong doi xung qua duong cheo chinh/ cheo phu\n");
}
else {
	printf("Ma tran doi xung qua duong cheo chinh/cheo phu\n");
}
    

	//f. Tính tổng dòng p, tổng cột q (p,q≤n)
   int p, q; // p: dòng p cần tính, q: cột q cần tính
int tong_dong_p = 0;
int tong_cot_q = 0;
printf("Nhap dong p can tinh tong: ");
scanf("%d", &p);
printf("Nhap cot q can tinh tong: ");
scanf("%d", &q);
if (p > n || q > m) {
	printf("Ban nhap sai (Vui long nhap p va q nho hon gia tri hang, cot");
}
for (int i = 0; i < n; i++) {
	for (int j = 0; j < m; j++) {
		if (i == p) {
			tong_dong_p += mtr[p][j];
		}
	}
}
for (int i = 0; i < n; i++) {
	for (int j = 0; j < m; j++) {
		if (j == q) {
			tong_cot_q += mtr[i][q];
		}
	}
}
printf("Tong dong %d cua mang la: %d\n", p, tong_dong_p);
printf("Tong cot %d cua mang la: %d\n", q, tong_cot_q);

	return 0;
}

