//5. Tính chu kì dao động của con lắc có chu kì bằng 1
#include <stdio.h>
#include <math.h>
const float PI = 3.14;
const float G = 9.8; // G: gia toc trong truong
int main() {
    float chu_ki;
    chu_ki = 2 * PI * sqrt(1.0/G);
    printf("Chu ki cua con lac co chieu dai bang 1 la: %.2f\n", chu_ki);
    return 0;
}