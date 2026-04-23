#include<stdio.h>

int a, x, b, c, f, opcao;

void derivada(int fd) {
    
    f = a*(x*x) + b*x + c;
    fd = a*x + b;
    
    return ;

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

return 0;
}

