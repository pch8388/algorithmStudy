#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,x;
    scanf("%d %d", &n, &x);
    int *a = malloc(sizeof(int) * n);
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    for(int i=0; i<n; i++) if(a[i] < x) printf("%d ", a[i]);
}