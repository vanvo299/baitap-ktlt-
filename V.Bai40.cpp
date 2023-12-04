/*Bài 40. Cho dãy a gồm m phần tử được sắp giảm dần và dãy b gồm n phần tử.
Hãy chèn các phần tử của dãy b vào dãy a để nhận được dãy a gồm m + n
phần tử cũng giảm dần*/
#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[] = { 76, 43, 23, 12, 3, 2 }; // cho dãy a theo thứu tự giảm dần
	int b[] = { 32, 25, 56, 10, 1, 6 }; // khởi tạo dãy b bát kì

	//lấy kích thước của hai mảng a và b
	int kich_thuoc_mang_a = sizeof(a) / sizeof(a[0]); 
	int kich_thuoc_mang_b = sizeof(b) / sizeof(b[0]);
	int kich_thuoc_mang_c = kich_thuoc_mang_a + kich_thuoc_mang_b;

	//cấp phát đôngj cho mảng c (câp phát động cho c, thì c mới hoạt động được)
	int* c = (int*)malloc(kich_thuoc_mang_c * sizeof(int));

	// chèn hai mảng a và b vào nhau
	// ở đây ta dùng cách là gọi ra mảng c thứ ba để thêm hai mảng a và b vào, 
	// thì ta đã có thể chèn hai mảng a và b vao thành một mảng
	for (int i = 0; i < kich_thuoc_mang_a; i++) {
		c[i] = a[i];
	}
	for (int i = 0; i < kich_thuoc_mang_b; i++) {
		c[i + kich_thuoc_mang_a] = b[i];
	}
	
	//tiến hành sắp xếp mảng c theo thứ tự các phần tử giảm dần 
	for (int i = 0; i < kich_thuoc_mang_c; i++) {
		for (int j = i + 1; j < kich_thuoc_mang_c; j++) {
			if (c[i] < c[j]) {
				int so_trung_gian = c[i];
				c[i] = c[j];
				c[j] = so_trung_gian;
			}
		}
	}

	//in mảng c 
	printf("Mang c sau khi sap xep: ");
	for (int i = 0; i < kich_thuoc_mang_c; i++) {
		printf(" %d ", c[i]);
	}
	//  khi cấp phát động thì phải giải phóng bộ nhớ không cần thiết để tránh tràn bộ nhớ
	free(c);
	return 0;
}