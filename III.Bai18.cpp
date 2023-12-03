/*Bai 18.In ra các số chẳn nhỏ hơn hoặc bằng 100 trên 10 dòng như sau:
 2 4 6 … 10
12 14 16 … 20
… …
92 94 96 … 100*/
#include <stdio.h>

int main() {
    for (int i = 2; i <= 100; i+=2) {
        printf("%4d", i);
        if (i % 10 == 0) {
            printf("\n");
        }
    }

    return 0;
}
