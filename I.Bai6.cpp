// 6. Tìm các góc của tam giác khi biết 3 cạnh (Dùng công thức cosin)
#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c;
    float goc_A, goc_B, goc_C;
    printf("Nhap vao canh thu nhat: ");
    scanf("%f", &a);
    printf("Nhap vao canh thu hai: ");
    scanf("%f", &b);
    printf("Nhap vao canh thu ba: ");
    scanf("%f", &c);
    goc_A = acos((pow(b,2) + pow(c,2) - pow(a,2))/(2 * b * c)); //acos chinh la arccos
    goc_B = acos((pow(a,2) + pow(c,2) - pow(b,2))/(2 * a * c));
    goc_C = acos((pow(a,2) + pow(b,2) - pow(c,2))/(2 * a * b));
    printf("Goc A: %f\n", goc_A);
    printf("Goc B: %f\n", goc_B);
    printf("Goc C: %f\n", goc_C);
    return 0;
}
