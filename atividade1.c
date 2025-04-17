#include <studio.h>
int main()
int idade;
{
printf("Digite a sua idade:");
scanf("%d", &idade);

if(idade > 12){
    printf("criança");
} else if(idade >=12 && idade <= 17){
    printf("adolescente");
} else {
    printf("adulto");
}
return 0;
}