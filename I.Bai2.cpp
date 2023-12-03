#include <stdio.h>
int main() {
	unsigned char a, b;
	printf("Nhap vao ki tu a: ");
	scanf("%c", &a);
    getchar(); // xu li ki tu xuong dong, giong cin::ignore ben C++
    printf("Nhap vao ki tu b: ");
	scanf("%c", &b);
    getchar(); // tac dung tuong tu
	unsigned char ket_qua_1 = a & b;
	printf("Ket qua la: %c\n", ket_qua_1);
	unsigned char ket_qua_2 = a | b;
	printf("Ket qua la: %c\n", ket_qua_2);
	unsigned char ket_qua_3 = a ^ b;
	printf("Ket qua la: %c\n", ket_qua_3);
	unsigned char ket_qua_4 = ~(ket_qua_1);
	printf("Ket qua la: %c\n", ket_qua_4);
	unsigned char ket_qua_5 = (a >> 3);
	printf("Ket qua la: %c\n", ket_qua_5);
	unsigned char ket_qua_6 = (b << 5);
	printf("Ket qua la: %c\n", ket_qua_6);
	return 0;
}