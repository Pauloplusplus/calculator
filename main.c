#include <stdio.h>
#include <string.h>
#include <ctype.h>

void sum(){
    float a,  b;
    printf("Digite o primeiro número: ");
    scanf("%f", &a);
    printf("Digite o segundo número: ");
    scanf("%f", &b);
    printf("Resultado: %.2f + %.2f = %.2f\n", a, b, a + b);
}

void subtract(){
    float a,  b;
    printf("Digite o primeiro número: ");
    scanf("%f", &a);
    printf("Digite o segundo número: ");
    scanf("%f", &b);
    printf("Resultado: %.2f - %.2f = %.2f\n", a, b, a - b);
}

void multiply(){
    float a,  b;
    printf("Digite o primeiro número: ");
    scanf("%f", &a);
    printf("Digite o segundo número: ");
    scanf("%f", &b);
    printf("Resultado: %.2f x %.2f = %.2f\n", a, b, a * b);
}

void divide(){
    float a,  b;
    printf("Digite o primeiro número: ");
    scanf("%f", &a);
    printf("Digite o segundo número: ");
    scanf("%f", &b);
    if(b == 0){
        printf("Erro: Divisão por zero não é permitida.\n");
        return;
    }
    printf("Resultado: %.2f / %.2f = %.2f\n", a, b, a / b);
}

int callMenu(){
    char option;
    printf("===============================\n");
    printf("   Calculadora Simples\n");
    printf("===============================\n");
    printf("Selecione uma operação:\n");
    printf("1. Adição\n");
    printf("2. Subtração\n");
    printf("3. Multiplicação\n");
    printf("4. Divisão\n");
    printf("5. Sair\n");
    printf("Opção:");
    scanf("%c", &option);
    while(option != '1' && option != '2' && option != '3' && option != '4' && option != '5'){
        printf("A resposta é inválida, coloque um número de 1 a 5: ");
        scanf(" %c", &option);
    }
    return option - '0';
}

int main(){
    int option = 0;
    while(option != 5){
        option = callMenu();
        switch(option){
            case 1:
                sum();
                break;
            case 2:
                subtract();
                break;
            case 3:
                multiply();
                break;
            case 4:
                divide();
                break;
            default:
                printf("Obrigado por usar a calculadora! Até a próxima.");
        }
        if(option == 5) break;
        printf("Deseja realizar outra operação? (s/n): ");
        char c; scanf(" %c", &c);
        while(tolower(c) != 's' && tolower(c) != 'n') {
            printf("Entrada incorreta, por favor insira s ou n: ");
            scanf(" %c", &c);
        }

        if(tolower(c) == 'n'){
            printf("Obrigado por usar a calculadora! Até a próxima.");
            option = 5;
        }
    }
}