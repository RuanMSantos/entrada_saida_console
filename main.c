#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int numero;
    unsigned int numero_positivo;
    float peso;
    double valor;
    char texto [100];
    char texto_10_caracteres [100];
    char texto_terminado_em_quebra_de_linha [100];


    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("\nDigite um numero positivo: ");
    scanf("%u", &numero_positivo);

    printf("\nDigite seu peso: ");
    scanf("%f", &peso);

    printf("\nDigite um valor: ");
    scanf("%lf", &valor);

    printf("\nDigite um texto de ate 100 caracteres, sem espaco: ");
    scanf("%s", texto);

    printf("\nDigite um texto de ate 10 caracteres: ");
    scanf("%10s", texto_10_caracteres);

    printf("\nDigite um texto: ");
    scanf(" %[^\n]", texto_terminado_em_quebra_de_linha);

    printf("\nNumero digitado: %d", numero);
    printf("\nNumero positivo digitado: %u", numero_positivo);
    printf("\nPeso digitado: %.2f", peso);
    printf("\nValor digitado: %lf", valor);
    printf("\nTexto digitado: %s", texto);
    printf("\nSegundo texto digitado: %s", texto_10_caracteres);
    printf("\nTerceiro texto digitado: %s\n", texto_terminado_em_quebra_de_linha);
    printf("\n");
    system("pause");
    return 0;
}
