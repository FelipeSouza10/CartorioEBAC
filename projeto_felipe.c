#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�o
#include <string.h> //biblioteca respons�vel por cuidar das string

int registro() // fun��o responsavel para cadastra usu�rios no sistema
{
	
	// inicio cria��o de variavel/string
	setlocale(LC_ALL, "Portuguese");
	
	char arquivo[40];
		char cpf[40];
			char nome[40];
				char sobrenome[40];
					char cargo[40];
				// final cria��o de variavel/string
				
				
				printf("digite um CPF a ser cadastrado: "); //coletando informa��es do usu�rio
				scanf("%s", cpf); // %s refere-se a string
				
	strcpy (arquivo, cpf); // respons�vel por copiar o valor das string
	
	FILE *file; // cria o arquivo
	file = fopen(arquivo, "w"); //criar o arquivo fun��o "w" significa escrever
	
	fprintf(file, cpf); // salvo o valor da variavel
	fclose(file); // fecho o arquivo
	
	file = fopen(arquivo, "a"); 
	fprintf(file, ",");
	fclose(file); 
	
	printf("Digite o nome a ser cadastrado: ");
	scanf("%s", nome);
	
	file = fopen(arquivo, "a");
	fprintf(file, nome);
	fclose(file); 
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file); 
	
	printf("Digite o sobrenome a ser cadastrado: ");
	scanf("%s", sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file, sobrenome);
	fclose(file); 
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file); 
	
	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s", cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file, cargo);
	fclose(file); 
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file); 
	
	system ("pause");
}
int consulta()
{

	setlocale(LC_ALL, "Portuguese");	

	char cpf[40];
	char conteudo[200];
		
	printf("Digite o CPF a ser consultado: ");
	scanf("%s", cpf);
	FILE *file;
	file = fopen(cpf, "r");
	
	if(file == NULL)
	{
		printf("N�o foi possivel abrir o arquivo, n�o localizado!.\n");
		system("pause");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssa s�o informa��es do usu�rio: ");
		printf("%s", conteudo);
		printf("\n\n");
		
	system("pause");
	}
	
}
int deletar()
{
	
	setlocale(LC_ALL, "Portuguese");
	
	char cpf[40];
	
	printf("Digitar o CPF s ser deletado: ");
	scanf("%s", cpf);
	
	if (remove(cpf) == 0);
	{
	printf("O usu�rio foi deletado com suceso!.\n");
	system("pause");
	}		
	

FILE *file;
file = fopen(cpf, "r");

	
	if(file == NULL)
	{
		printf("O usu�rio n�o se encontra no sistema!.\n");
		system("pause");
	}
	
	
	
}



int main()
{
	int opcao=0;
	int laco=1;
	
	for(laco=1;laco=1;)
	{
	
		system("cls");
	
		setlocale(LC_ALL, "Portuguese");
	
	
		printf("### Cart�rio da EBAC ###\n\n");
		//inicio do menu
		printf("Escolha a op��o desejada do menu:\n\n");
		printf("\t1 - Registra Nomes\n");
		printf("\t2 - Consutar Nomes\n");
		printf("\t3 - Deletar Nomes\n\n"); 
		printf("op��o: ");  //fim do menu
	
		scanf("%d", &opcao); // armazenando a escolha do usu�rio
	
		system("cls"); // responsavel por limpar a tela
	
	switch(opcao) // inicio da sele��o do menu
		{
		case 1:
		registro();
		break;
		
		case 2:
	 	consulta();
		break;
		
		case 3:
		deletar();
		break;

		default:
		printf("Essa op��o n�o est� disponivel!\n");
		system("pause");
		break;
		}
	

	}
}
	// fim da sele��o

	
	

