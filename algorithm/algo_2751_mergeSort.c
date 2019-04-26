#include <stdio.h>
#include <stdlib.h>
#define MAX 1000000

int sort[MAX];
int arr[MAX];

void merge(int l, int m, int r){
    int i, j, k;
    i = l;
    j = m + 1;
    k = l;

    while (i <= m && j <= r) {
        if (arr[i] < arr[j]) {
            sort[k++] = arr[i++];
        } else {
            sort[k++] = arr[j++];
        }
    }

    if (i > m) {
        for (int x = j; x <= r; x++) {
            sort[k++] = arr[x];
        }
    } else {
        for (int x = i; x <= m; x++) {
            sort[k++] = arr[x];
        }
    }

    for (int x = l; x <= r; x++) {
        arr[x] = sort[x];
    }
}

void mergeSort(int l, int r) {
    if (l < r) {
        int mid = (l + r) / 2;
        mergeSort(l, mid);
        mergeSort(mid+1, r);

        merge(l, mid, r);
    }

}

int main() {
    int a;
    scanf("%d", &a);
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }

    mergeSort(0, a - 1);

    for (int i = 0; i < a; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}