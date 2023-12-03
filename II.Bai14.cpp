/* . Cho ngày 24/12 là thứ tư. Hãy nhập vào một ngày bất kỳ trong tháng 12, hỏi ngày đó là thứ mấy */
/*Cach lam: 
1.Xác định ngày của tháng 12 bạn muốn kiểm tra.
3.Tính phần dư của ngày muốn kiểm tra khi chia cho 7.
Sử dụng phần dư để xác định ngày trong tuần. Trong bài này thì:
Do ngày 24 là thứ tư nên ta lấy ngày đó làm gốc, ở đây  ta lấy 24 chia lấy phần dư cho 7, ta được 3
tiếp theo nếu dư 4 thì là thứ 5, tiếp tục mãi đến dư 6 thì reset về dư 0, tới dư 2 là dừng.*/
#include <stdio.h>
#include <math.h>  
int main() {
    int ngay_can_kiem_tra;
    printf("Nhap ngay trong thang 12: ");
    scanf("%d", &ngay_can_kiem_tra);
    if (ngay_can_kiem_tra < 1 || ngay_can_kiem_tra > 31) {
        printf("Ngay khong hop le!!\n");
        return 1;
    }
    ngay_can_kiem_tra = ngay_can_kiem_tra % 7;
    switch ((int)ngay_can_kiem_tra) // phai ep kieu du lieu cua check thanh kieu so nguyen 
    {
    case 3:
        printf("Ngay hom nay la thu tu\n");
        break;
    case 4:
        printf("Ngay hom nay la thu nam\n");
        break;
    case 5:
        printf("Ngay hom nay la thu sau\n");
        break;
    case 6:
        printf("Ngay hom nay la thu bay\n");
        break;
    case 0:
        printf("Ngay hom nay la chu nhat\n");
        break;
    case 1:
        printf("Ngay hom nay la thu hai\n");
        break;
    case 2:
        printf("Ngay hom nay la thu ba\n");
        break;
    default:
        printf("Ngay khong hop le!!");
        break;
    }

    return 0;
}
