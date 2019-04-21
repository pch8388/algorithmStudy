#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    int arr[a];
    for(int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 1; i < a; i++) {
        int tmp = arr[i];
        for(int j = i - 1; j >= 0; j--) {
            if(arr[j] > tmp) {
                arr[j+1] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    for(int i = 0; i < a; i++) {
        printf("%d\n", arr[i]);
    }
}