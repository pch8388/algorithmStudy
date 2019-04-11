#include <stdio.h>
#include <string.h>

int main() {
    int a,b,c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    int d = a*b*c;
    char arr[100];
    sprintf(arr, "%d", d);
    int intArr[10] = {0};
    for(int i = 0; i < strlen(arr); i++) {
        int x = arr[i]-'0';
        intArr[x]++;
    }
    for(int i = 0; i < sizeof(intArr)/sizeof(int); i++) {
        printf("%d\n", intArr[i]);
    }
    return 0;
}