/*Bai 22. Cho biết dãy số Fibonanci như sau: 1 1 2 3 5 8 13 21 34 … 
 Hãy in ra màn hình dãy n số Fibonanci đầu tiên*/
 #include <stdio.h>

int main() {
    int n, first = 0, next, second = 1;
    printf("Nhap vao so luong Fibonacci ma ban muon in: ");
    scanf("%d", &n);
    printf("Day %d so Fibonacci dau tien la:  ", n);
    for (int i = 0; i < n; i++) {
        next = first + second;
        first = second;
        second = next;
        printf("%d\n", next);
    }

    return 0;
}
