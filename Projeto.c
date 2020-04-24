
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    // imprime cabecalho do nosso jogo
    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinha��o *\n");
    printf("******************************************\n");

    int numerosecreto = 42;
    int chute;
    int ganhou = 0;
    double pontos =1000;
    int i; 
    
    
    for (i = 1; i <= 20; i++)
    {
    
    printf("Tentativa %d de 20\n",i );
    printf("Qual � o seu chute\n");

    scanf("%d",&chute);
    printf("Seu chute foi %d\n",chute );
    
	if(chute==numerosecreto)
	ganhou=1;
	
    if(ganhou==1){
    	printf("Parab�ns! Voc� Acertou!\n");
    	printf("\nParab�ns, voc� ganhou!\n\n");

        printf("       ___________      \n");
        printf("      '._==_==_=_.'     \n");
        printf("      .-\\:      /-.    \n");
        printf("     | (|:.     |) |    \n");
        printf("      '-|:.     |-'     \n");
        printf("        \\::.    /      \n");
        printf("         '::. .'        \n");
        printf("           ) (          \n");
        printf("         _.' '._        \n");
        printf("        '-------'       \n\n");

    	printf("Jogue de novo,voc� � um jogador bom\n");

    	break;

    }
    else{
    	if(chute>numerosecreto)
    		printf("\n\n\ Seu chute foi maior que o n�mero secreto\n");

    }
    if(chute<numerosecreto){
    	printf("\n\nSeu chute foi menor que o numero secreto\n\n");
    }
   	
   

    double pontosperdidos=abs(chute-numerosecreto)/2.0;
    pontos=pontos-pontosperdidos;
    printf("Seu ponto est� em %lf\n",pontos);
    printf("Ganhou %d\n",ganhou );
    
}
if (i > 20) {
	 printf("    _______________         \n");
        printf("   /               \\       \n"); 
        printf("  /                 \\      \n");
        printf("//                   \\/\\  \n");
        printf("\\|   XXXX     XXXX   | /   \n");
        printf(" |   XXXX     XXXX   |/     \n");
        printf(" |   XXX       XXX   |      \n");
        printf(" |                   |      \n");
        printf(" \\__      XXX      __/     \n");
        printf("   |\\     XXX     /|       \n");
        printf("   | |           | |        \n");
        printf("   | I I I I I I I |        \n");
        printf("   |  I I I I I I  |        \n");
        printf("   \\_             _/       \n");
        printf("     \\_         _/         \n");
        printf("       \\_______/           \n");
    printf("\n\nVOC� ULTRAPASSOU O LIMITE DE TENTATIVAS! TENTE OUTRA VEZ!");
    printf("\nO n�mero era: %d", numerosecreto);
  } 
}
