#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdlib.h>//biblioteca de alocação de espaço em memória
#include<locale.h>//biblioteca de alocações de texto por região
#include<string.h> // Responsável por cuidar das string
    int Registrar()
{
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o CPF a ser cadastrado:\n");
	scanf("%s",cpf);
	
	strcpy (arquivo, cpf);//Responsável por copiar os valores das string
	
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
   		printf("Não foi possível localizar o CPF.Tente novamente.\n");
    }
   	
   	while(fgets(conteudo,200,file)!=NULL)
   	{
   		printf("Essas são as informações do usúario:\n\n");
   		printf("%s",conteudo);
   		printf("\n\n");
	   }
   	
   	system ("pause");
   	
   }
   int Deletar()
   {
   
   char cpf[40];
   {
   printf("Digite o cpf do usuário á ser deletado:\n");
   scanf("%s",cpf);
   }
   
   remove (cpf);
   
   FILE*file;
   file=fopen(cpf,"r");
   
   if(file==NULL)
   {
   	printf("O usuário não se encontra no sistema!.\n");
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
    int opcao=0;//Definindo variáveis
	int x=1;
	for(x=1;x=1;)
    {
	
	
	
	system("cls");
	
	
	
	
	setlocale(LC_ALL,"Portuguese");//Definindo a linguagem
	
	printf("\t!Cartório da Ebac!\t\n\n");//Inicio do menu
	printf("\tPor favor,selecione uma das opções abaixo:\n");
	printf("\t1-registrar nomes\n");
	printf("\t2-Consultar nomes\n");
	printf("\t3-Deletar nomes\n\n\n");
	printf("Opção:");//Fim do menu
    
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
        printf("Essa opção não esta disponível\n");//Fim da seleção
   		system("pause");
		break;	
	
	}
    }
}
    
   

