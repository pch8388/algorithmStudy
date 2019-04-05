#include<stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    double arr[a];
    for(int i = 0; i < a; i++) {
        int b;
        scanf("%d", &b);
        int intArr[b];
        int sum = 0;
        for(int j = 0; j < b; j++) {
            scanf("%d", &intArr[j]);
            sum += intArr[j];
        }
        int max = 0;
        int avg = sum/b;
        for(int j = 0; j < b; j++) {
            if(intArr[j] > avg) max++;
        }
        arr[i] = (double)max/b*100;
    }
    for(int i = 0; i < a; i++) {
        printf("%.3f%%\n", arr[i]);
    }
}