#include <stdio.h>


int main(){ 
	printf("************************************\n");
	printf("* Bem-vindo ao jogo da adivinhacao *\n");
	printf("************************************\n");
	
	int numerosecreto = 42;
	int chute;
	
	printf("Qual o seu chute? ");
	scanf("%d", &chute);
	printf("Voce chutou o numero %d\n", chute);
	
	printf("Seu chute foi %d\n", chute);
	 

}
