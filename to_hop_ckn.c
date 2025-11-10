#include <stdio.h>
int giaithua(int n) {
    int kq = 1;
    for (int i = 1; i <= n; i++) {
        kq *= i;
    }
    return kq;
}
int tohop(int n, int k) {
    return giaithua(n) / (giaithua(k) * giaithua(n - k));
}

int main() {
    int n, k;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Nhap k: ");
    scanf("%d", &k);

    if (k < 0 || k > n) {
        printf("Gia tri k khong hop le!\n");
    } else {
        printf("C(%d, %d) = %d\n", n, k, tohop(n, k));
    }

    return 0;
}
