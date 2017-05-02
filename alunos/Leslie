#include <stdlib.h>
#include <stdio.h>
#define DEBUG 0


/*void LerArquivo() {

        char url[]="Texto.txt";
        char ch;
        FILE *arq;
	if (DEBUG) printf ("--------------------ENTRANDO NA FUNÇÃO DE LerArquivo--------------------\n");
        
        arq = fopen(url, "r");
        if(arq == NULL)
            printf("ERRO, NÃO FOI POSSÍVEL ABRIR O ARQUIVO\n");
        else
            while( (ch=fgetc(arq))!= EOF )
                putchar(ch);

        fclose(arq);
	
	if (DEBUG) printf ("--------------------SAINDO DA FUNÇÃO DE LerArquivo--------------------\n\n");
        

    }
*/

void LerArquivo() {

        char url[40];
        char ch;
        FILE *arq;
	if (DEBUG) printf ("--------------------ENTRANDO NA FUNÇÃO DE LerArquivo--------------------\n");
        printf ("ESCREVA O NOME DO ARQUIVO: ");
	scanf(" %s",url);
		
        arq = fopen(url, "r");
        if(arq == NULL){
            printf("ERRO! NÃO FOI POSSÍVEL ABRIR O ARQUIVO.\n");
	
	    system("break");
		    
       } else {
            while( (ch=fgetc(arq))!= EOF )
                putchar(ch);

        fclose(arq);
       }		
	if (DEBUG) printf ("--------------------SAINDO DA FUNÇÃO DE LerArquivo--------------------\n\n");
        

    }


void BoasVindas() {
	if (DEBUG) printf ("--------------------ENTRANDO NA FUNÇÃO DE BoasVindas--------------------\n");
	
	printf("SEJA BEM VINDO!!!\n");
	
	if (DEBUG) printf ("--------------------SAINDO DA FUNÇÃO DE BoasVindas--------------------\n\n");
	

    }

void MensagemSaida() {
	if (DEBUG) printf ("--------------------ENTRANDO NA FUNÇÃO DE MensagemSaida--------------------\n");
        
	printf ("MENSAGEM DE SAÍDA: OBRIGADO!\n");
	
	if (DEBUG) printf ("--------------------SAINDO DA FUNÇÃO DE MensagemSaida--------------------\n\n");
        

    }

void Criptografar() {


}

void Decriptografar() {


}

int Menu(){
    
    if (DEBUG) printf ("--------------------ENTRANDO NA FUNÇÃO MENU--------------------\n");
    setbuf(stdin, NULL);
    int continuar=1;
    do
    {
        printf("[1]. Criptografar\n");
        printf("[2]. Decriptografar\n");
        printf("[3]. Ler Arquivo\n");
        printf("[0]. Sair\n");

        scanf(" %d", &continuar);
        system("clear");

        switch(continuar)
        {
            case 1:
                Criptografar();
                break;

            case 2:
                Decriptografar();
                break;

            case 3:
                LerArquivo();
                break;

            case 0:
                MensagemSaida();
                break;

            default:
                
                printf("DIGITE UMA OPÇÃO VÁLIDA!\n");
        }
    } while(continuar);
    if (DEBUG) printf ("--------------------SAINDO DA FUNÇÃO MENU--------------------\n\n");
}


int main(void)
{
	system("clear");

	BoasVindas();

	Menu();

	
        return 0;
}
