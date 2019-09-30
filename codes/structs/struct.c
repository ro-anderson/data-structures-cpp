#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct pessoa
{
	int idade;
	float peso;
}tpessoa;

int main () 
{
	tpessoa p;
	tpessoa *pp;
	pp = &p;

	printf("\nIdade:\n");
	scanf("%d", &p.idade);
	printf("Peso:\n");
	scanf("%f", &p.peso);
	/*p.idade = 20;
	p.peso = 70.56;*/
	printf("Idade:%d\nPeso:%.2f\n", (*pp).idade, (*pp).peso); //usar () pois * tem menor precedência dq .
	//malloc for struct

	tpessoa *p3;

	p3= (struct pessoa*)malloc(sizeof(struct pessoa));
	p3->idade=20;
	p3->peso=87.9;
	printf("%d\n", p3->idade);
	return 0;
}