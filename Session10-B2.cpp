#include <stdio.h>

int main() {
    int arr[] = {29, 10, 14, 37, 13}; 
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("Mang truoc khi sap xep: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Mang sau khi sap xep tang dan: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
