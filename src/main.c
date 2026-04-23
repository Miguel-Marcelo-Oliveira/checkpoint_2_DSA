#include<stdio.h>

// PARTE 2
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

// PARTE 3
#include<stdio.h>

// PARTE 3 - DERIVADA DE FUNÇÃO
float a, x, b, c, f;

float derivada(){    
    f = a*(x*x) + b*x + c;
    return 2*a*x + b;
}

int main() { // CRIADA A FUNÇÃO QUE DERIVA A FUNÇÃO ORIGINAL --> MIGUEL MARCELO (569467)
    
    printf("Agora insira os valores da variaveis: \n"); // CRIADA INTERFACE QUE RECEBE E GUARDA AS VARIÁVEIS 
                                                        // MIGUEL MARCELO (569467)
    printf("Valor de a: \n");
    scanf("%f", &a);

    printf("Valor de x: \n");
    scanf("%f", &x);

    printf("Valor de b: \n");
    scanf("%f", &b);

    printf("Valor de c: \n");
    scanf("%f", &c);

    float fd = derivada();
    printf("f(x) = %f\n", f);
    printf("f'(x) = %f\n", fd);
// CORRIGIDA A FUINÇÃO QUE CALCULA A DERIVADA 
// E EXIBIÇÃO DO RESULTADO -->  MIGUEL MARCELO (569467)
    printf("Valor de a: \n");

    return 0;
}
