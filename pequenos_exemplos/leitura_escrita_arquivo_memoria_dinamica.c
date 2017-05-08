#include <malloc.h>



//ESTRUTURA PARA COLOCAR O CONTEUDO DO ARQUIVO
struct mensagem
{
	unsigned long long int tamanho;
	unsigned char * conteudo;
};


//criacao das variaveis
      struct mensagem msg_testeEscura; //utilizado para receber o retorno da mensagem
      FILE *fp;
			unsigned char * corpo;
      unsigned long long int lSize;


//EXEMPLO DE LEITURA DE ARQUIVO
			fp = fopen ( "teste_entrada.txt" , "rb" );
			if( !fp )  perror("teste_entradaPUNK.txt"),fprintf(stderr, "Falha em: %d - %s\n", __LINE__,__FILE__),exit(1);
			fseek( fp , 0L , SEEK_END);
			lSize = ftell( fp );
			rewind( fp );
			corpo = (unsigned char *)calloc( lSize+1, sizeof(unsigned char));
			if( !corpo ) fclose(fp),fprintf(stderr, "Erro ao obter memoria %d - %s\n", __LINE__,__FILE__),exit(1);
			if( 1!=fread( corpo , lSize, 1 , fp) )
			  fclose(fp),free(corpo),fputs("Falha ao realizar a leitura",stderr),exit(1);
			fclose(fp);
      
      
//NESSE PONTO VC POSSUI a variável corpo. Vc trabalhará nessa variável (criptografia e decriptografia) 
  //...



 	//EXEMPLO DE GRAVACAO
     
			FILE *fpOut;
			fpOut = fopen ( "saidaCript.txt" , "wb" );
			if( !fpOut )  perror("saidaCript.txt"),exit(1);
			fwrite(msg_testeEscura.conteudo, 1, msg_testeEscura.tamanho, fpOut);
			fclose(fpOut);
