#include<stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    int b[a];
    int max = 0;
    for(int i = 0; i < a; i++) {
        scanf("%d", &b[i]);
        if(max < b[i]) max = b[i];
    }

    double sum = 0;
    for(int i = 0; i < a; i++) {
        sum += (double)b[i]/max*100;
    }

    printf("%.2f", sum/a);
}
