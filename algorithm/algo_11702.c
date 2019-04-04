#include <stdio.h>
#include <stdlib.h>
int main(){
    int a, c=0;
    scanf("%d", &a);
    char *d = malloc(sizeof(char) * a);
    scanf("%s", d);
    for(int i=0; i<a; i++) {
        c += (d[i] - '0');
    }
    printf("%d", c);
}