#include <stdio.h>
int main() {
    int a, b;
    printf("Nhap vao so a: ");
    scanf("%d", &a);
    printf("Nhap vao so b: ");
    scanf("%d", &b);
    int so_trung_gian = a;
    a = b;
    b = so_trung_gian;
    printf("So a sau khi hoan doi la: %d\n", a); 
    printf("So b sau khi hoan doi la: %d\n", b);
    return 0;
}