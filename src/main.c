#include<stdio.h>

// PARTE 2

float a, b, c, x, f;

float derivada(){
    float fd;
    f = a*(x*x) + b*x + c;
    fd = 2*a*x + b;
    return fd;
}

int main(){
    int opcao;
    float nota1, nota2, nota3, nota4, media;

    do{
        printf("\n==============================\n");
        printf("      SISTEMA EQUIPE XYZ      \n");
        printf("==============================\n");
        printf("1 - Inserir notas\n");
        printf("2 - Calcular media\n");
        printf("3 - Verificar situacao\n");
        printf("4 - Exibir resultado\n");
        printf("5 - Calcular derivada\n");
        printf("6 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        
        switch (opcao) {

            case 1:
            printf("\n--- INSERIR NOTAS ---\n");
            printf("Nota do 1o bimestre (0-10): ");
            scanf("%f", &nota1);
            printf("Nota do 2o bimestre (0-10): ");
            scanf("%f", &nota2);
            printf("Nota do 3o bimestre (0-10): ");
            scanf("%f", &nota3);
            printf("Nota do 4o bimestre (0-10): ");
            scanf("%f", &nota4);
            printf("Notas inseridas com sucesso!\n");
            break;
        
            case 2:
            printf("\n--- CALCULAR MEDIA ---\n");
            media = (nota1 + nota2 + nota3 + nota4) / 4;
            printf("Media calculada: %.2f\n", media);
            break;

            case 3:
            printf("\n--- VERIFICAR SITUACAO ---\n");
            if (media >= 7.0)
                printf("Situacao: APROVADO\n");
            else if (media >= 5.0)
                printf("Situacao: RECUPERACAO\n");
            else
                printf("Situacao: REPROVADO\n");
            break;

            case 4:
            printf("\n--- EXIBIR RESULTADO ---\n");
            printf("Nota 1o Bimestre: %.2f\n", nota1);
            printf("Nota 2o Bimestre: %.2f\n", nota2);
            printf("Nota 3o Bimestre: %.2f\n", nota3);
            printf("Nota 4o Bimestre: %.2f\n", nota4);
            printf("------------------------------\n");
            printf("Media Final:      %.2f\n", media);
            printf("------------------------------\n");
            if (media >= 7.0)
                printf("Situacao: APROVADO\n");
            else if (media >= 5.0)
                printf("Situacao: RECUPERACAO\n");
            else
                printf("Situacao: REPROVADO\n");
            break;

            case 5:
            {
            // PARTE 3 - DERIVADA DE FUNÇÃO
            // CRIADA A FUNÇÃO QUE DERIVA A FUNÇÃO ORIGINAL --> MIGUEL MARCELO (569467)

            float fd;

            printf("\n--- CALCULAR DERIVADA ---\n");
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

            fd = derivada();

            printf("f(x) = %.2f\n", f);
            printf("f'(x) = %.2f\n", fd);
            // CORRIGIDA A FUNÇÃO QUE CALCULA A DERIVADA 
            // E EXIBIÇÃO DO RESULTADO -->  MIGUEL MARCELO (569467)
            }
            break;

            case 6:
            printf("\nSaindo do sistema. Ate logo!\n");
            break;

            default:
            printf("\nOpcao invalida! Digite uma das opcoes acima.\n");
        }

    } while (opcao != 6);

    return 0;
}