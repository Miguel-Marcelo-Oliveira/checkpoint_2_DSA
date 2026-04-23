#include<stdio.h>

void derivada(int a, int x, int b, int c, int f) {
    
    f = a*(x*x) + b*x + c;
    int fd = a*x + b;
    
    return fd;
}

int main(){

int opcao;



    printf("SISTEMA DE MÉDIA FINAL");
    switch (opcao) {
        case 1:
        printf("Insira sua pontuação anual");
        break; 
    
        case 2:
        printf("Calcule sua média");
        break;

        case 3:
        printf("Verifique sua situação:");
        break;

        case 4:
        printf("Ver o seu resultado");
        break;

        case 5:
        printf("Calcule sua derivada");
        break;

        case 6:
        printf("Sair");
        break;

        default:
        printf("Digite uma das opções acima!");

      
    }
    return 0; 
}

