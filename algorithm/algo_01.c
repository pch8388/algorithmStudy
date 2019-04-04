#include <stdio.h>

int getInt(int N);

int main() {
    int N;
    scanf("%d", &N);

    printf("%d", getInt(N));
}

int getInt(int N) {
    int count = 0;

    while(N > 0) {
        if(N%5 == 0) {
            N -= 5;
            count++;
        } else if(N%3 == 0) {
            N -= 3;
            count++;
        } else if(N > 5) {
            N -= 5;
            count++;
        } else {
            count = -1;
            return count;
        }
    }
    return count;
}