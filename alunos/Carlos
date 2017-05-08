#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


main()
{
 menu();
}

int menu()
{ 

	setlocale(LC_ALL, "portuguese");
	int opcao;

 
 printf("\n <<<<< Sistema de Gerenciamento Criptográfico - SGC >>>>>");
    
    printf ("\n\n Informe a opcao da operacao desejada:\n");
    printf(" 1 - Saudação\n");
    printf(" 2 - Ler Arquivo\n");
    printf(" 3 - Escrever em arquivo\n");
    printf(" 4 - Criptografar\n");
    printf(" 5 - Decriptografar\n");
    printf(" 0 - Sair\n\n==>");
    
    scanf("%d", &opcao);

 switch(opcao)
 {
 case 1: msg(); menu();
 case 2: LerArquivo(); menu();
 case 3: EscreveArquivo(); menu();
 case 4: Criptografar(); menu();
 case 5: Decriptografar(); menu();
 case 0: sair(); menu();

 default: printf("Favor informar a opção correta!\n"); menu();
 }

}

int msg()
{
 
 printf("\n Olá! Seja(m) bem vindo(s)\n\n");
  
}

int LerArquivo()
{
	
	FILE *fp;
 	char c;
 	
 fp = fopen("teste.txt","r+");   /* Arquivo ASCII, para leitura */
 if(!fp)
 
 {
     printf( "Erro na abertura do arquivo");
     exit(0);
 }
 
 while((c = getc(fp) ) != EOF)      /* Enquanto não chegar ao final do arquivo */
    printf(" %c", c);                 /* imprime o caracter lido */
    
 fclose(fp);
 
 return 0;
}

int EscreveArquivo ()
{


	FILE *fp;
 	char texto[100];
 	int i;
  
 	fp = fopen("teste.txt","w");   /* Arquivo ASCII, para leitura e escrita, caso não exista é criado */
	if(!fp)
 
 {
    printf( "Erro na abertura do arquivo");
   exit(0);
 }
 
 printf("Entre com o texto a ser gravado no arquivo: ");
 scanf("%s", &texto);
 
 //gets(string);
 
 for(i=0; texto[i]; i++) putc(texto[i], fp); /* Grava a string, caractere a caractere */
 
 fclose(fp);
 
 return 0;
	
}

int Criptografar()
{
	
	
}

int Decriptografar()
{
	
	
}

int sair()
{
	
	printf("Finalizando SGC...");
	exit(0);
	
}


