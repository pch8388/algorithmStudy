#include <stdio.h>

int binarySearch(int *arr, int left, int right, int searchVal) {
    printf("%d, %d, %d\n", left, right, searchVal);

    if(left > right) return -1;

    int mid = (left + right) /2;
    printf("%d, %d\n", mid, arr[mid]);
    if(searchVal == arr[mid]) return mid;
    else if(searchVal < arr[mid]) binarySearch(arr, left, mid-1, searchVal);
    else binarySearch(arr, mid+1, right, searchVal);
}

void main() {
    int arr[] = {2,4,5,6,8,9,10,11,14,16};

    int idx = binarySearch(arr, 0, sizeof(arr)/sizeof(int), 10);

    printf("%d ", idx);
}