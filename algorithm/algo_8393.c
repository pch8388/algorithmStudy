#include <stdio.h>
int main(){
    int input, sum=0;
    int a = scanf("%d", &input);
    printf("%d\n", a);
    for(int i=1; i<=input; i++) sum+=i;
    printf("%d", sum);
}