//Bai 38.   Tương tự bài 37 nhưng a[i] là chữ số thập lục phân thứ i của p. 
// Ví dụ p = 0X2CE thì mảng a có a[0] = 14, a[1] = 12, a[2] = 2 và n = 3

//Cách làm giống hệt bài 37, khác là chỉ chia cho 16 thay vì 10 như bài 37 (vì p là hệ 16)
#include <stdio.h>
#include <math.h>

int main() {
	int p; // khai bao so p
	int n = 0;// Khởi tạo biến đếm, dùng để đếm số lượng chữ số của p
	printf("Nhap vao so p: ");
	scanf("%x", &p);
	int temp = p;
	//Đếm trong số p có bao nhiêu chữ số
	while (temp != 0) {
		n++;
		temp /= 16; // vì là cơ số 16 nên phải chia cho 16 (tương tự với các cơ số khác
	}

	int mang[1000]; // khởi tạo mảng 
	for (int i = 0; i < n; i++) {
		mang[i] = p % 16; // chia lấy phần dư để thu được các chữu số có trong số p
		p /= 16; 
	}

	//In mang 
	for (int i = 0; i < n; i++) {
		printf("mang[%d] = %d\n", i, mang[i]);
	}

	//in so lượng chữ số có trong p
	printf("n = %d", n);
	return 0;
}