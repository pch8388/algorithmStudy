#include <stdio.h>
#include <stdlib.h>
int main() {
    char a[100];
    scanf("%s", a);
    int i = 0;
    char b[11];
    while(a[i] != '\0'){
        b[i%10] = a[i];
        if((i+1)%10 == 0) printf("%s\n", b);
        i++;
        if(a[i] == '\0') {
            b[i%10] = '\0';
            printf("%s", b);
        }
    }
}