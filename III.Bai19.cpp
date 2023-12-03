// Bai 19. Tìm các phương án để có được 20.000 đồng từ các loại 1000, 2000 và 5000 đồng
#include <stdio.h>
#include <math.h>
int main() {
    int so_cach = 0;
    for (int i = 0; i <= 100; ++i) { 
        for (int j = 0; j <= 100; ++j) {
            for (int k = 0; k <= 100; ++k) {
                if (i * 1000 + j * 2000 + k * 5000 == 20000) {
                    printf("Co %d to 1000, %d to 2000, %d to 5000\n", i, j, k);
                    so_cach++;
                }
            }
        }
    }
    printf("Co tat ca %d phuong an de co duoc 20000 tu to 1000, 2000 va 5000\n", so_cach);
    return 0;
}
