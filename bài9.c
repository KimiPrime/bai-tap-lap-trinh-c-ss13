#include <stdio.h>

void inputMatrix(int arr[100][100], int *n, int *m) {
    printf("Nhap so hang: ");
    scanf("%d", n);
    printf("Nhap so cot: ");
    scanf("%d", m);
    for (int i = 0; i < *n; i++) {
        for (int j = 0; j < *m; j++) {
            printf("Nhap gia tri cho phan tu [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

void printMatrix(int arr[100][100], int n, int m) {
    printf("\nMa tran:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void printCorners(int arr[100][100], int n, int m) {
    printf("\nCac phan tu o goc:\n");
    printf("%d %d\n", arr[0][0], arr[0][m - 1]);
    printf("%d %d\n", arr[n - 1][0], arr[n - 1][m - 1]);
}

void printBorders(int arr[100][100], int n, int m) {
    printf("\nCac phan tu tren duong bien:\n");
    for (int j = 0; j < m; j++) printf("%d ", arr[0][j]);
    for (int i = 1; i < n - 1; i++) printf("%d %d ", arr[i][0], arr[i][m - 1]);
    for (int j = 0; j < m; j++) printf("%d ", arr[n - 1][j]);
    printf("\n");
}

void printDiagonals(int arr[100][100], int n, int m) {
    if (n != m) {
        printf("\nKhong co duong cheo chinh va cheo phu vi ma tran khong vuong.\n");
        return;
    }
    printf("\nCac phan tu tren duong cheo chinh: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i][i]);
    printf("\nCac phan tu tren duong cheo phu: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i][n - i - 1]);
    printf("\n");
}

int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

void printPrimes(int arr[100][100], int n, int m) {
    printf("\nCac phan tu la so nguyen to:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (isPrime(arr[i][j])) printf("%d ", arr[i][j]);
        }
    }
    printf("\n");
}

int main() {
    int arr[100][100], n = 0, m = 0, type;
    int initialized = 0;

    do {
        printf("\nMENU\n");
        printf("1. Nhap gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In ra cac phan tu o goc theo ma tran\n");
        printf("4. In ra cac phan tu nam tren duong bien theo ma tran\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh va cheo phu theo ma tran\n");
        printf("6. In ra cac phan tu la so nguyen to theo ma tran\n");
        printf("7. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &type);

        if (type != 1 && !initialized) {
            printf("Vui long nhap ma tran truoc!\n");
            continue;
        }

        switch (type) {
            case 1:
                inputMatrix(arr, &n, &m);
                initialized = 1;
                break;
            case 2:
                printMatrix(arr, n, m);
                break;
            case 3:
                printCorners(arr, n, m);
                break;
            case 4:
                printBorders(arr, n, m);
                break;
            case 5:
                printDiagonals(arr, n, m);
                break;
            case 6:
                printPrimes(arr, n, m);
                break;
            case 7:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (type != 7);

    return 0;
}
