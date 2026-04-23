#include<stdio.h>

// PARTE 2

float a, b, c, x, f;

float derivada(){
    f = a*(x*x) + b*x + c;
    float fd = 2*a*x + b;
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


// PARTE 3 - DERIVADA DE FUNÇÃO
// CRIADA A FUNÇÃO QUE DERIVA A FUNÇÃO ORIGINAL --> MIGUEL MARCELO (569467)
    


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
// CORRIGIDA A FUNÇÃO QUE CALCULA A DERIVADA 
// E EXIBIÇÃO DO RESULTADO -->  MIGUEL MARCELO (569467)



    return 0;
}
