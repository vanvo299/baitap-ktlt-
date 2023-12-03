//Bài 30e. e. Số Amstrong (có k chữ số, tổng luỹ thừa bậc k của các chữ số bằng chính số đó, ví dụ 153 = 1^3+5^3+3^3 )
#include <stdio.h>
#include <math.h>
#include <string.h>
int Kiem_tra_So_Amstrong(int n) {
    char So_Amstrong[100];
     sprintf(So_Amstrong, "%d", n); // Chuyển số n thành chuỗi So_Amstrong, giúp truy cập từng chữ số của n
    int Sum = 0;
    for (int i = 0; i < strlen(So_Amstrong); i++) { // vòng lặp dùng để duyêtj qua từng chữ số trong chuỗi Amstrong
        int chu_so = So_Amstrong[i] - '0'; 
        //Dòng này lấy ký tự i trong chuỗi, So_Amstrong, chuyển nó thành một số nguyên bằng cách trừ đi mã ASCII của ký tự '0'. 
        Sum += pow(chu_so, strlen(So_Amstrong));
    }
    return Sum;
}
int main() {
    int n;
    printf("Nhap vao so can tinh: ");
    scanf("%d", &n);
    int Ket_qua = Kiem_tra_So_Amstrong(n);
     printf("Ket qua Amstrong la: %d ", Ket_qua);
    return 0;
}
