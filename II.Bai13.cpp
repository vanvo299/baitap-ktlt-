// Bai 13. Tim so ngay trong thang
#include <stdio.h>
#include <math.h>
bool Kiem_tra(int nam) {
    if (nam % 4 == 0 && nam % 100 != 0 || nam % 400 == 0) { // kiem tra nam nhuan
    // nam nhuan la mot nam ma so do la so chia het cho 4 va khong chia het cho 100 hoac nam the ki phai chia het cho 400 (vd: 1000, 2000)
        return true;
    }
    return false;
}
int check(int nam, int thang) { // khai bao nam, thang
switch(thang) { // dung switch cho logic
    case 1: 
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
return 31;
    case 4:
    case 6:
    case 9:
    case 11:
return 30;
    case 2:
    if (Kiem_tra(nam)) {
        return 29;
    }
    return 28;
    default: 
    printf("So thang khong hop le!!\n");
   return 0;
}
}

int main() {
   int thang, nam;
   printf("Nhap thang: ");
   scanf("%d", &thang);
   printf("Nhap nam: ");
   scanf("%d", &nam);
   printf("So ngay trong thang: %d\n", check(nam, thang));
    return 0;
}