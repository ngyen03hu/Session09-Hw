#include <stdio.h>

int main() {
    int n, x;

    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);

    int arr[n];

    printf("Nhap cac phan tu cua mang: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Nhap so nguyen can tim: ");
    scanf("%d", &x);

    int found = 0;
    printf("Cac vi tri cua phan tu %d trong mang la: ", x);

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("%d ", i);
            found = 1;
        }
    }

    if (!found) {
        printf("Khong tim thay phan tu %d trong mang.", x);
    }

    return 0;
}

