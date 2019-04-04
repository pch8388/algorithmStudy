#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    int d[3] = {a, b, c};
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            int tmp;
            if(d[j] > d[j+1]) {
                tmp = d[j];
                d[j] = d[j+1];
                d[j+1] = tmp;
            }
        }
    }
    printf("%d", d[1]);
}