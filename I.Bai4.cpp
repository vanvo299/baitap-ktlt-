// Bai4, tính dien tich mat cau, the tich hinh cau ban kinh R
#include <stdio.h>
#include <math.h>
const float PI = 3.14;
int main() {
    float ban_kinh;
    float dien_tich_mat_cau;
    float the_tich_hinh_cau;
    printf("Ban kinh cua mat cau la: ");
    scanf("%f", &ban_kinh);
    dien_tich_mat_cau = 4 * PI * pow(ban_kinh, 2);
    printf("Dien tich cua mat cau la: %.2f\n", dien_tich_mat_cau); //%.2f là làm tròn số thập phân đến chữ số thứ 2 sau dấu phẩy
    the_tich_hinh_cau = (4.0/3) * PI * pow(ban_kinh, 3); // chú ý phải thêm phần thập phân vào phép chia vd: 4.0/3 or 4/3.0
    printf("The tich hinh cau la: %.2f\n", the_tich_hinh_cau);
    return 0;
}