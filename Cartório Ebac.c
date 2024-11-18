#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h>//biblioteca de aloca��o de espa�o em mem�ria
#include<locale.h>//biblioteca de aloca��es de texto por regi�o
#include<string.h> // Respons�vel por cuidar das string
    int Registrar()
{
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o CPF a ser cadastrado:\n");
	scanf("%s",cpf);
	
	strcpy (arquivo, cpf);//Respons�vel por copiar os valores das string
	
	FILE*file;//Cria o arquivo
	file= fopen(arquivo,"w");//Cria o arquivo
	fprintf(file,cpf);//salvo o valor da variavel
	fclose(file);//Fecha o arquivo
	
	file=fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado:\n");
	scanf("%s",nome);
	
	file=fopen(arquivo,"a");
	fprintf(file,nome);
	fclose(file);
	
	file=fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado:\n");
	scanf("%s",sobrenome);
	
	file=fopen(arquivo,"a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file=fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o seu cargo:");
	scanf("%s",cargo);
	
	file=fopen(arquivo,"a");
	fprintf(file,cargo);
	fclose(file);
	
	system ("pause");
	
	
	
   }
  
   int Consultar ()
   {
    setlocale(LC_ALL,"Portuguese");//Definindo a linguagem
   
   	char cpf[40];
   	char conteudo[200];
   	
   	printf("Digite o cpf a ser consultado:\n");
   	scanf("%s",cpf);
   	
   	FILE *file;
   	file=fopen(cpf,"r");
   	
   	if(file==NULL)
   	{
   		printf("N�o foi poss�vel localizar o CPF.Tente novamente.\n");
    }
   	
   	while(fgets(conteudo,200,file)!=NULL)
   	{
   		printf("Essas s�o as informa��es do us�ario:\n\n");
   		printf("%s",conteudo);
   		printf("\n\n");
	   }
   	
   	system ("pause");
   	
   }
   int Deletar()
   {
   
   char cpf[40];
   {
   printf("Digite o cpf do usu�rio � ser deletado:\n");
   scanf("%s",cpf);
   }
   
   remove (cpf);
   
   FILE*file;
   file=fopen(cpf,"r");
   
   if(file==NULL)
   {
   	printf("O usu�rio n�o se encontra no sistema!.\n");
   	system("pause");
   }

   else
   { 
   remove(cpf);
   printf("CPF removido com sucesso");
   system("pause");
   }



}

   
   
   
   
   
   
   
   
    int main ()
    {
    int opcao=0;//Definindo vari�veis
	int x=1;
	for(x=1;x=1;)
    {
	
	
	
	system("cls");
	
	
	
	
	setlocale(LC_ALL,"Portuguese");//Definindo a linguagem
	
	printf("\t!Cart�rio da Ebac!\t\n\n");//Inicio do menu
	printf("\tPor favor,selecione uma das op��es abaixo:\n");
	printf("\t1-registrar nomes\n");
	printf("\t2-Consultar nomes\n");
	printf("\t3-Deletar nomes\n\n\n");
	printf("Op��o:");//Fim do menu
    
    scanf("%d",&opcao);//Armazenando a escolha do usuario
    
    system("cls");
    
    switch(opcao)
	{
		case 1:
		Registrar();
		break;
		
		case 2:
		Consultar();
		break;
		
		case 3:	
	    Deletar(); 
        break;
        
        default:
        printf("Essa op��o n�o esta dispon�vel\n");//Fim da sele��o
   		system("pause");
		break;	
	
	}
    }
}
    
   

