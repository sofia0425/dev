#include <stdio.h>
int main() {
    int n, i;

    printf("digite um numero: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        printf("%d\n", n, i, i + n);
    }
    return 0;
}