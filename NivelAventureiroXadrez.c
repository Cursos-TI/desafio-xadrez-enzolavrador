#include <stdio.h>      //Biblioteca padrão
int main() {        //Indicativo de função com retorno 0

int rainha = 0, bispo = 0, torre = 0, cavalo = 0;       //Definição das variáveis e seus valores
    printf("Rainha\n");     //Exibição de texto na tela
for ( rainha = 0; rainha < 8; rainha++) {       //Utilização do loop 'for'
    printf("Esquerda\n");
}
    printf("Bispo\n");
do { printf("Cima/Direita\n");        //Utilização do loop 'do-while'
    bispo++;

} while (bispo < 5);        //Finalização do loop 'do-while'
    printf("Torre\n");

while (torre < 5) {         //Utilização do loop 'while'
    printf("Direita\n");
    torre++;
}

printf("\n");

    printf("Cavalo\n");
do {
    for (cavalo = 0; cavalo < 2; cavalo++) {       //Utilização do loop 'for'
        printf("Baixo\n");
    }
    printf("Esquerda\n");
} while (cavalo <= 1);        //Finalização do loop 'do-while'

return 0;       //Indica que o programa terminou com sucesso
}