/*Bai 17. In ra màn hình các số từ 1 dến 100 trên 10 dòng như sau:
 1 2 3 … 10
11 12 13 … 20
… …
91 92 93 … 100*/
//Cách làm: dùng 2 vòng lặp lồng nhau, vòng lặp ngoài có bước nhảy là 10, vòng lặp trong có bước nhảy là 1
// khi vòng lặp trong lặp tới 10 đơn vị thì dùng \n để xuống dòng theo yêu cầu đề bài
#include <stdio.h>

int main() {
    for (int i = 1; i <= 100; i++) { // in từ 1 đến 100
        printf("%4d", i);
        if (i % 10 == 0) { // nếu i chạy tới các số chia hết cho 10 như 10 20... thì xuống dòng
            printf("\n");
        }
    }

    return 0;
}
