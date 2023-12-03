// Bai 15a. Nhap x, tinh y
#include <stdio.h>
#include <math.h>
int main() { 
    float x, y;
    printf("Nhap x: ");
    scanf("%f", &x);
    if (x > 0) {
        y = (-1.0/2) * pow(x,3);
        printf("y = %.2f\n", y);
    }
    else if (x <=0) {
        y = 3 * sqrt(abs(x));
        printf("y = %.2f\n", y);
    }
    return 0;
}