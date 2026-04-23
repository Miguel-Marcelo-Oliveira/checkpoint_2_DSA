#include "stdio.h"

int main() {
    float nota1, nota2, media;  // ANTES: float nota1, nota2, media -> Adicionado um ";" no final. - FELIPE DOERN (568798)

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);         // ANTES: ("%f", nota2) -> Adicionado "&" antes de nota2 - FELIPE DOERN (568798)

    media = nota1 + nota2 / 2;

    if (media >= 6) {            // ANTES: (media = 6) -> Adicionado mais um ">"
        printf("Aluno aprovado\n");
    } else {
        printf("Aluno reprovado\n");
    }

    return 0;
}