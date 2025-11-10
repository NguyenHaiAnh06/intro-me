#include <stdio.h>

int main() {
    int n;
    int a[100];
    printf("Nhap so phan tu n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("\nMang vua nhap: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

   
    int max = a[0], min = a[0];
    int dem_chan = 0, dem_am = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
        if (a[i] % 2 == 0) dem_chan++;
        if (a[i] < 0) dem_am++;
    }

    printf("\nPhan tu lon nhat: %d", max);
    printf("\nPhan tu nho nhat: %d", min);
    printf("\nCo %d so chan, %d so am.", dem_chan, dem_am);


    int tong = 0, dem = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) break;           
        if (a[i] % 2 == 0) continue; 
        tong += a[i];
        dem++;
    }

    if (dem > 0) {
        float tb = (float)tong / dem;  
        printf("\nTrung binh cong cac so le duong truoc so am dau tien: %.2f", tb);
    } else {
        printf("\nKhong co so le duong truoc so am dau tien!");
    }

    return 0;
}
