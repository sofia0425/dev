#include <stdio.h>
int main () {
    float nota1, nota2, nota3, media;

    printf("Digite a primeira nota:");
    scanf("%f", &nota1);

    printf("Digite a segunda nota:");
    scanf("%f", &nota2);

    printf("Digite a primeira nota:");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3)/ 3;

    if(media >= 6) {
        printf("aprovado");
    } else if (media >=4 && media < 6){
        printf("recuperação");
    } else {
        printf ("reprovado");
    }
    
    return 0;
}