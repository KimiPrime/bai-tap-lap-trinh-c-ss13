#include <stdio.h>

void timUCLN(int a, int b, int *ucln) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    *ucln = a;
}

int main() {
    int so1, so2, ucln;
    printf("Nhap so thu nhat: ");
    scanf("%d", &so1);
    printf("Nhap so thu hai: ");
    scanf("%d", &so2);
    timUCLN(so1, so2, &ucln);
    printf("Uoc chung lon nhat cua %d va %d la: %d\n", so1, so2, ucln);
    return 0;
}
