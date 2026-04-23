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


    return 0;
}
