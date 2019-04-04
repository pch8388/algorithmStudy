#include <stdio.h>

int binarySearch(int *arr, int searchVal, int left, int right) {
    int mid = 0;
    while(left <= right) {
        mid = (left+right)/2;
        printf("%d, %d, %d, %d \n",left,right,mid,arr[mid]);
        if(searchVal == arr[mid]) return mid;
        else if(searchVal < arr[mid]) right = mid - 1;
        else left = mid + 1;
    }

    return -1;
}

void main() {
    int arr[] = {2,4,5,6,8,9,10,11,14,16};

    int idx = binarySearch(arr, 10, 0,  sizeof(arr)/sizeof(int) -1);
    printf("%d", idx);
}