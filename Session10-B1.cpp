#include <stdio.h>

int main() {
    int arr[] = {9, 8, 2, 9, 18, 1, 18};
    int length = sizeof(arr) / sizeof(arr[0]);
    int value;
    printf("Mang hien tai: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Nhap vao gia tri can kiem tra: ");
    scanf("%d", &value);
    for (int i = 0; i < length; i++) {
        if (arr[i] == value) {
            printf("Gia tri %d xuat hien tai vi tri %d trong mang.\n", value, i); 
            return 1;
        } 
    }
    printf("Gia tri %d khong ton tai trong mang.\n", value);
    return 0;
}
