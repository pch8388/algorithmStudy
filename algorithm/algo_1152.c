#include<stdio.h>
#include <ctype.h>

int main() {
    char ch[1000001];
    scanf("%[^\n]", ch);
    int a = 1;

    for(int i = 0; i < 1000001; i++) {
        if(ch[i] == '\000') {
            if(isblank(ch[i-1])) --a;
            printf("%d", a);
            return 0;
        }
        if(isblank(ch[i]) && i != 0) a++;
    }
}