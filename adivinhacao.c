#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
 
int main() {
    printf("************************************\n");
    printf("* Bem vindo ao Jogo de Adivinhação *\n");
    printf("************************************\n");
	
	int nivel;
	int totaldetentativas;
	
	printf("Escolha o nivel de dificuldade! \n");
	printf("(1) Facil (2) Medio (3)Dificil \n\n");
	printf("Escolha ");
	scanf("%d",&nivel);
	
	
	switch(nivel){
		case 1:
			totaldetentativas = 20;
			break;
		case 2:
			totaldetentativas = 15;
			break;
		default:
			totaldetentativas = 6;
			break;
	}
	
    int chute;
    int acertou = 0;
    int tentativas = 1;
    double pontos = 1000;
 
    srand(time(0));
    int numerosecreto = rand() % 100;
	printf("%d",numerosecreto);
	
	printf("\n\n");
	printf("           P /_\\ P                                      \n");
	printf(".         /_\\_|_|_/_\\                                  \n");
	printf("        n_n | ||. .|| | n_n         Bem-vindo ao         \n");
	printf("        |_|_|nnnn nnnn|_|_|     Jogo de Adivinhação!     \n");
	printf("       |\" \" | |_| |\" \" |                             \n");
	printf("       |_____| ' _ ' |_____|                             \n");
	printf("            \\__|_|__/                                   \n");
	printf("\n\n");
	
	
 
	for(int i = 1; i <= totaldetentativas; i++) {
 
        printf("Qual é o seu %do. chute? ", tentativas);
        scanf("%d", &chute);
 
        if(chute < 0) {
            printf("Você não pode chutar números negativos\n");
            continue;
        }
 
        printf("Seu %do. chute foi %d\n", tentativas, chute);
 
        acertou = chute == numerosecreto;
        int maior = chute > numerosecreto;
 
        if(acertou) {
			
			break;
        } else if(maior) {
            printf("\nSeu chute foi maior do que o número secreto!\n\n");
        } else {
            printf("\nSeu chute foi menor do que o número secreto!\n\n");
        }
 
        tentativas++;
 
        double pontosperdidos = abs(chute - numerosecreto) / 2.0;
        pontos = pontos - pontosperdidos;
    }
	
	if (acertou){
		printf("***************************\n");
        printf("* Parabéns! Você acertou! *\n");
		printf("***************************\n");
	}else{
		printf("***************************\n");
        printf("* Errtou tente de novo.   *\n");
		printf("***************************\n");
	}
 
    printf("Você fez %.2f pontos", pontos);
    printf("Obrigado por jogar!\n");
 
}