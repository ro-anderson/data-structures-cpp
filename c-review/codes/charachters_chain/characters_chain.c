#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*In C we doesn't have a real char, they are int converted by the ASCC table.
each leter is associated to a int. if a=99 -> b=100 etc*/

//Test if is a letter or no.
int letra(char c)
{
	if(c<'0' || c > '9')
		return 1;
	return 0;
}

int main()
{
	printf("%d\n",letra('a'));
	
	/*Characters chain - a list of char that always end with \0' */

	char nome[] = "Óto come doce seco de mocot";
	int i =0;

	printf("Char by char:\n");
	while(nome[i] != '\0')
	{
		printf("%c", nome[i]);
		i++;
	}

	printf("\n\nWith porcento s:\n%s\n\n",nome);

	printf("Digite seu nome:");
	scanf("%[^\n]", nome);
	printf("Ola %s\n", nome);
	return 0;
}
