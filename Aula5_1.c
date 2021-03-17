#include<stdio.h>
int main()
{
    int qtdIngresso, filme;
    double valorTotal;
       
    printf("Ola, bem vindo ao cinema. Digite o numero da sessao de filme escolhido:\n");
    printf("1 - Vingadores 4\n");
    printf("2 - Como Treinar o Seu Dragao 3\n");
    printf("3 - Dumbo\n");
    printf("4 - Shazam\n");
        scanf("%d", &filme);
        printf("Voce escolheu o filme da sessao %d\n", filme);
        printf("Quantos ingressos voce deseja?\n");
            .scanf("%d", &qtdIngresso);
            valorTotal = 12.5 * qtdIngresso;
            printf("Voce escolheu %d ingressos para o filme da sessao %d. O valor total sera de %.2f\n", qtdIngresso, filme, valorTotal);
    return 0;
}