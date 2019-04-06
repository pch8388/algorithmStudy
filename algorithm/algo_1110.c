#include<stdio.h>

int main() {
    int a, d = 101, b = 0, c = 0;
    scanf("%d", &a);
    c = a % 10;
    b = (a - c) >= 10 ? (a - c) / 10 : a - c;
    int cnt = 0;
    while(a != d) {
        d = c*10 + ((b+c)%10);
        b = (d / 10) == 0 ? 0 : d/10;
        c = d%10;
        cnt++;
    }
    printf("%d", cnt);
}