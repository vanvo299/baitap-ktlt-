//Bai 41.  Nhập vào 2 dãy a, b gồm n số thực(n <= 10)
#include <stdio.h>
#include <stdlib.h>

int main() {
	int a[10], b[10];
	int m, n; //Khởi tạo số lượng phần tử của hai dãy số
	printf("Nhap so luong phan tu cua day a: ");
	scanf("%d", &m);
	if (m > 10) {
		printf("Ban can nhap so luong trong mang duoi 10 phan tu");
		return 0;
	}
	printf("Nhap phan tu cua day a: ");
	for (int i = 0; i < m; i++) {
		scanf("%d", &a[i]);
	}

	printf("Nhap so luong phan tu cua day b: ");
	scanf("%d", &n);
	if (n > 10) {
		printf("Ban can nhap so luong trong mang duoi 10 phan tu");
		return 0;
	}
	printf("Nhap phan tu cua day b: ");

	for (int i = 0; i < n; i++) {
		scanf("%d", &b[i]);
	}
	//a.Tính tổng phần tử lớn nhất của dãy a và của dãy b
	//tìm giá trị lớn nhất của dãy a
	int max_day_a  = a[0];
	for (int i = 0; i < m; i++) {
		if (a[i] > max_day_a) {
			max_day_a = a[i];
		}
	}

	//tìm giá trị lớn nhất của dãy b
	int max_day_b = b[0];
	for (int i = 0; i < n; i++) {
		if (b[i] > max_day_b) {
			max_day_b = b[i];
		}
	}
	// tổng phần tử lớn nhất của dãy a và dãy b
	int sum_max_a_va_b = max_day_a + max_day_b;

	printf("Tong phan tu lon nhat cua day a va day b la: %d\n", sum_max_a_va_b);
     
	 //b. Đếm số phần tử có giá trị lớn nhất/nhỏ nhất trong dãy b 
        
		//  đếm số phần tử có giá trị lớn nhất trong dãy b
		int count_max_b = 0; 
     	for (int i = 0; i < n; i++) {
		if (b[i] == max_day_b) {
			count_max_b++;
		}
	}
	printf("So phan tu co gia tri lon nhat co trong day b la: %d\n", count_max_b);
        // đếm số phần tử có giá trị nhỏ nhất trong dãy b

		//tìm giá trị nhỏ nhất trong dãy b
		int min_day_b = b[0];
	for (int i = 0; i < n; i++) {
		if (b[i] < min_day_b) {
			min_day_b = b[i];
		}
	}
		int count_min_b = 0;
		for (int i = 0; i < n; i++) {
			if(b[i] == min_day_b) {
				count_min_b++;
			}
		}
		printf("So phan tu co gia tri nho nhat co trong day b la: %d\n", count_min_b);
    

	/*c. Tạo dãy c gồm 2n phần tử được lấy từ 2 dãy a, b như sau: 
	- Phần tử thứ nhất của dãy c là phần tử thứ nhất của dãy a  
    - Phần tử thứ hai của dãy c là phần tử thứ nhất của dãy b 
    - Phần tử thứ ba của dãy c là phần tử thứ hai của dãy a 
    - Phần tử thứ tư của dãy c là phần tử thứ hai của dãy b
	*/
    int kich_thuoc_mang_c = m + n;
int* c = (int*)malloc(kich_thuoc_mang_c * sizeof(int));

// Sắp xếp các phần tử của dãy a và b vào dãy c theo yêu câu đề bài
for (int i = 0; i < m; i++) {
	c[0] = a[0];
	c[2] = a[1];
	c[i + 4] = a[i + 2];
}
for (int i = 0; i < n; i++) {
	c[1] = b[0];
		c[3] = b[1];
		c[i + m + 2] = b[i + 2];
}

// In dãy c
printf("Day c sau khi tao la: ");
for (int i = 0; i < kich_thuoc_mang_c; i++) {
	printf(" %d ", c[i]);
}

// Giải phóng bộ nhớ
free(c);
	 

	
	return 0;
}
