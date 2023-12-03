// Vẽ kim tự tháp
#include <iostream>
int main() {
    int n;
    std::cout << "Nhap vao chieu cao cua kim tu thap: ";
    std::cin >> n;
     // in ra khoảng trắng trước dấu *
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n - i; j++) {
            std::cout << " ";
        }
       // in ra số kí tự * trên mỗi hàng
        for (int k = 1; k <= 2 * i - 1; k++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}
