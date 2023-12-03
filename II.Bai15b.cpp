// Bai 15b. Nhap x tinh y
#include <stdio.h>
#include <math.h>
int main() {
    const float e = 2.71828182846;
    float x, y;
    printf("Nhap x: ");
    scanf("%f", &x);
    if (x > 0) {
        y = (-1.0) / 2 * pow(x, 3);
        printf("y = %.2f\n", y);
    }
    else if (x > -5 && x <= 0) {
        y = pow(x, 3);
        printf("y = %.2f\n", y);
    }
    else {
        y = pow(e, x);
        printf("y = %.2f\n", y);
    }
    
    return 0;
}