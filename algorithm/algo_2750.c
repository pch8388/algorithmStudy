#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    int arr[a];
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < a; j++) {
        for (int i = 0; i < a-1; i++) {
            if (arr[i] > arr[i+1]) {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }

    for (int i = 0; i < a; i++) {
        printf("%d\n", arr[i]);
    }
}