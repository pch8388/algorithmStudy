#include <stdio.h>

int main() {
    int input;
    scanf("%d", &input);
    for(int i = input; i > 0; i--) {
        for(int j = input; j > 0; j--) {
            if(j > i) printf(" ");
            else printf("*");
        }
        printf("\n");
    }
}