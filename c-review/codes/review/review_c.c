#include <stdio.h>


int somar(int n1, int n2)
{
	int soma = n1+n2;
	return soma;
}
int fatorial(int n)
{
	
	if(n==0 || n==1)
		return 1;
	else
	{
		int a=1,i;
		for(i=1;i<=n;i++)
		{ 
			a=a*i;
		
		}
		return a;	
	
	}
	
}


int main()
{
	//geting vars
	int n1, n2;
	printf("N1 e N2\n");
	scanf("%d %d", &n1, &n2);

	//print result
	printf("\nN1 + N2 = %d\n\nN1! = %d\n\nN2! = %d\n\n",somar(n1,n2), fatorial(n1), fatorial(n2));
	return 0;
}





