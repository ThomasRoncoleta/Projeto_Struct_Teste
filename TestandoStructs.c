#include <stdio.h>
#include <locale.h>

typedef struct
{
	char nome[10];
	int idade;
	float altura;
}ficha;

void imprime_aluno (ficha aluno)
{
	printf("\n\nNome: %s", aluno.nome);
	printf("\nIdade: %i", aluno.idade);
	printf("\nAltura: %.2f", aluno.altura);
}

int main ()
{
	setlocale(LC_ALL,"");
	
	ficha aluno;
	
	printf("Qual o nome do aluno ?: ");
	gets(aluno.nome);
	printf("Digite a idade do aluno: ");
	scanf("%i", &aluno.idade);
	printf("Digite a altura do aluno: ");
	scanf("%f", &aluno.altura);
	
	imprime_aluno(aluno);
	
	/*printf("\n\nNome: %s", aluno.nome);
	printf("\nIdade: %i", aluno.idade);
	printf("\nAltura: %.2f", aluno.altura);*/
	
	return 0;
}
