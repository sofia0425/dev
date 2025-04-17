#include <stdio.h>
int main() {
    int numero;

    printf("digite um numero: ");
    scanf("%d", &numero);

    if(numero % 2 == 0){
        printf("Par");
    } else {
        printf("impar");
    }

    return 0;
}