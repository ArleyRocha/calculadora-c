// Calculadora simples em C
// Autor: Arley Rocha
// Projeto para prática de lógica de programação

#include <stdio.h>

int main () {

    int continuar = 1;

    while(continuar ==1) {

    int opcao;
    int num1, num2;
    int resultado;
    int valido = 1;

    printf("Escolha a operacao:\n");
    printf("1 - soma\n");
    printf("2 - subtracao\n");
    printf("3 - multiplicacao\n");
    printf("4 - divisao\n");

    printf("Digite sua opcao: ");
    scanf("%d", &opcao);

    if(opcao >= 1 && opcao <= 4) {}
    
    printf("Digite o primeiro numero:  ");
    scanf("%d", &num1);

    printf("Digite o segundo numero:  ");
    scanf("%d", &num2);

    if (opcao ==1)
    {
        resultado = num1 + num2;
        printf("%d + %d = %d\n", num1, num2, resultado);
    }
    else if (opcao ==2)
    {
        resultado = num1 - num2;
        printf("%d - %d = %d\n", num1, num2, resultado);
    }
    else if (opcao ==3)
    {
        resultado = num1 * num2;
        printf("%d * %d = %d\n", num1, num2, resultado);
    }   
    else if (opcao ==4)
    {
        if(num2 ==0){
            printf("Erro: divivsao por zero!\n");
            valido = 0;
        }else {
        resultado = num1 / num2;
        printf("%d / %d = %d\n", num1, num2, resultado);
        }
    } 
    else{
        printf("Opcao invalida \n");
        valido = 0;
    }

    printf("\nDeseja continuar? (1 = sim / 0 = nao): ");
    scanf("%d", &continuar);
    }

    printf("Programa encerrado. \n");


    
  return 0;
}