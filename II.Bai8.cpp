//Bai 1: Tìm GTLN, GTNN cua 4 số
#include <stdio.h>
#include <math.h>
int main() {
    int a, b, c, d;
    printf("Nhap vao 4 so can tim: ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
   //timf gtln
    int max_value = a;
    if (b > max_value) {
        max_value = b;
    }
    if (c > max_value) {
        max_value = c;
    }
    if (d > max_value) {
        max_value = d;
    }
    //tim gtnn
    int min_value = a;
     if (b < min_value) {
        min_value = b;
     }
     if (c < min_value) {
        min_value = c;
     }
    if (d < min_value) {
        min_value = d;
    }
    printf("Gia tri lon nhat la: %d\n", max_value);
    printf("Gia tri nho nhat la: %d\n", min_value);
    return 0;
}