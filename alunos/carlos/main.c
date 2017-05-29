#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

main()
{
 menu();
}

int menu()
{ 

	setlocale(LC_ALL, "portuguese"); //Configuração de acentos
	
	int opcao;

 system("cls"); //Limpando a tela
 
 printf("\n <<<<< Sistema de Gerenciamento Criptográfico - SGC >>>>>");
    
    printf ("\n\n Informe a opcao da operacao desejada:\n");
    printf(" 1 - Saudação\n");
    printf(" 2 - Escrever em arquivo\n");
    printf(" 3 - Ler Arquivo original\n");
    printf(" 4 - Criptografar\n");
    printf(" 5 - Ler Arquivo Encriptado\n");
    printf(" 6 - Decriptografar\n");
    printf(" 7 - Ler Arquivo DEsencriptado\n");
    printf(" 8 - Converte arquivo para ASCII\n");
    printf(" 9 - Ler Arquivo ASCII\n");
    printf(" 0 - Sair\n\n==>");
    
    scanf("%d", &opcao);

 switch(opcao)
 {
 case 1: msg(); menu();
 case 2: EscreveArquivo(); //menu();
 case 3: LerArquivo(); menu();
 case 4: Criptografar(); menu();
 case 5: LerArquivoEncrip(); menu();
 case 6: Decriptografar(); menu();
 case 7: LerArquivoDEsencrip(); menu();
 case 8: ConvArquivoASCII(); menu();
 case 9: LerArquivoASCII(); menu();
 case 0: sair(); menu();

 default: printf("Favor informar a opção correta!\n"); menu();
 }

}

int msg()
{
 
 printf("\n Olá! Seja(m) bem vindo(s)\n\n");
  
}

int EscreveArquivo ()
{
	FILE *fp;
 	char texto[100];
 	int i;
  
 	fp = fopen("original.txt","w");   /* Arquivo ASCII, para leitura e escrita, caso não exista é criado */
	if(!fp)
 
 {
    printf( "Erro na abertura do arquivo");
   exit(0);
 }
 
 printf("Entre com o texto a ser gravado no arquivo: ");
 scanf("%s", &texto);
 
 for(i=0; texto[i]; i++) putc(texto[i], fp); /* Grava a string, caractere a caractere */
 
 fclose(fp);
 
 return 0;
	
}

int LerArquivo()
{
	
	FILE *fp;
 	char c;
 	
 fp = fopen("original.txt","r+");   /* Arquivo ASCII, para leitura */
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


int Criptografar()
{
	FILE *entrada;
	FILE *saida;
	char c;
	char ch;
	
 entrada = fopen("original.txt","r");
    if(entrada == NULL)
    {
        printf("Arquivo Original não encontrado\n");
    }
    saida = fopen("criptografado.txt","w");
    if(saida == NULL)
    {
        printf("Arquivo de saída não encontrado\n");
    }
 
 while((ch = getc(entrada) ) != EOF)      /* Enquanto não chegar ao final do arquivo */
 {
	ch = ch - (8 * 5 - 3) ;
	fputc(ch, saida);
	
 }  
 fclose(saida);
 
 return 0;

}

int LerArquivoEncrip()
{
	FILE *fp;
 	char c;
 	
 fp = fopen("criptografado.txt","r+");   /* Arquivo ASCII, para leitura */
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

int Decriptografar()
{
	
	FILE *entrada;
	FILE *saida;
	char c;
	char ch;
	
 entrada = fopen("criptografado.txt","r");
    if(entrada == NULL)
    {
        printf("Arquivo original não encontrado\n");
    }
    saida = fopen("DEcriptografado.txt","w");
    if(saida == NULL)
    {
        printf("Arquivo de saída não encontrado\n");
    }
 
 while((ch = getc(entrada) ) != EOF)      /* Enquanto não chegar ao final do arquivo */
 {
	ch = ch + (8 * 5 - 3);
	fputc(ch, saida);
	
 }  
 fclose(saida);
 
 return 0;

}

int LerArquivoDEsencrip()
{
	FILE *fp;
 	char c;
 	
 fp = fopen("DEcriptografado.txt","r+");   /* Arquivo ASCII, para leitura */
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

int ConvArquivoASCII()
{
	
	FILE *entrada;
	FILE *saida;
	char ch;
	
 	entrada = fopen("original.txt","r");
    if(entrada == NULL)
    {
        printf("Arquivo original não encontrado\n");
    }
    
	saida = fopen("originalASCII.txt","w");
    if(saida == NULL)
    {
        printf("Arquivo de saída não encontrado\n");
    }
 	while((ch = getc(entrada) ) != EOF)      /* Enquanto não chegar ao final do arquivo */
	{
	
	printf("%d ", ch);    
	fprintf(saida, "%d ", ch);    
		
 	}  

    fclose(saida);
 
	return 0;	
}

int LerArquivoASCII()
{
	FILE *saida;
	char ch;
	 	    
	saida = fopen("originalASCII.txt","r+");
    if(saida == NULL)
    {
        printf("Arquivo de saída não encontrado\n");
    }
 	while((ch = getc(saida) ) != EOF)      /* Enquanto não chegar ao final do arquivo */
	{
	
	printf("%c ", ch);    
			
 	}  

    fclose(saida);
 
	return 0;	
	
}

int sair()
{
	printf("Finalizando SGC...");
	exit(0);

}
