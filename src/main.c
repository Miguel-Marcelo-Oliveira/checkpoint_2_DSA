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

    printf("=== SISTEMA DE MEDIA FINAL ===\n");
    printf("1 - Insira sua pontuação anual\n");
    printf("2 - Calcule sua media\n");
    printf("3 - Verifique sua situação\n");
    printf("4 - Ver o seu resultado\n");
    printf("5 - Calcule sua derivada\n");
    printf("6 - Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);
    
    switch (opcao) {
        case 1:
        printf("\nInsira sua pontuacao anual:");
        break; 
    
        case 2:
        printf("\nCalcule sua media");
        break; 

        case 3:
        printf("\nVerifique sua situacao:");
        break;

        case 4:
        printf("\nVer o seu resultado");
        break;

        case 5:
            printf("Agora insira os valores das variaveis:\n");

            printf("Valor de a: ");
            scanf("%f", &a);

            printf("Valor de x: ");
            scanf("%f", &x);

            printf("Valor de b: ");
            scanf("%f", &b);

            printf("Valor de c: ");
            scanf("%f", &c);

            float fd = derivada();        
            printf("f(x)  = %.2f\n", f);
            printf("f'(x) = %.2f\n", fd);
            break;

        case 6:
        printf("\nSair.");
        break;

        default:
        printf("\nDigite uma das opções acima!");

      
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
