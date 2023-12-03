// bai 37.  Tạo dãy a gồm n phần tử nguyên lấy từ số nguyên p, mà a[i] là chữ số  
// thập phân thứ i của p, n là số chữ số của p.Ví dụ p = 2308 thì mảng a a[0] = 8, a[1] = 0, a[2] = 3, a[3] = 2 và n = 4
#include <stdio.h>
#include <math.h>
int main() {
	int p; //khởi tạo số p
	printf("So p la: ");
	scanf("%d", &p);
	int n = 0;
	int temp = p; // tạo biến lưu trữ số p dùng khi tính toán 
	

    //dem xem co bao nhieu chu so trong so p (temp)
	/* Thuật toán để tính có bao nhiêu chữ số trong một số nguyên (khi số cần xét khác không)
	     b1: tạo một biến đếm n dùng để đếm số lượng chữ số có trong số
		 b2:  lấy só cần xét chia lấy phần nguyên cho 10 cho đến khi kết quả bằng 0 thì dừng, 
		 số lần chia chính là số lượng chữ số có trong số cần xét. */
	while (temp != 0) {
		n++;
		temp /= 10;
	}
	int a[1000]; // tao mang a dùng để chứa các chữ số trong số p
	for (int i = 0; i < n; i++) {
		a[i] = p % 10;
		p /= 10;
	}

	//In mang a 
	for (int i = 0; i < n; i++) {
		printf("a[%d] = %d\n", i, a[i]);
	}
	//in số lượng chữ số có trong số p
	printf("n = %d", n);
	return 0;
}