#include <stdio.h>
#define SIZE 1000

int a[SIZE];

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void quickSort(int start, int end) {
    if(start >= end) return;
    int key = start, i = start +1, j = end, temp;
    while(i <= j) {
        while(i <= end && a[i] <= a[key]) i++;
        while(j > start && a[j] >= a[key]) j--;
        if(i > j) swap(&a[key], &a[j]);
        else swap(&a[i], &a[j]);
    }

    quickSort(start, j-1);
    quickSort(j+1, end);
}

void main() {
    int n = 10;
    a[0] = 1;
    a[1] = 8;
    a[2] = 0;
    a[3] = 11;
    a[4] = 213;
    a[5] = 20;
    a[6] = 10;
    a[7] = 3;
    a[8] = 5;
    a[9] = 4;
    quickSort(0, n-1);

    for(int i = 0; i<n; i++) printf("%d ", a[i]);
}