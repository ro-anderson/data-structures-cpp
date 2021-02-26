#include<stdio.h>
#include<stdlib.h>
#define MAX 10
void f(int *v)
{
	int i;
	for (i=0;i<10;i++)
	{
		v[i]=i;
	}
	
}


int main()
{
	int *v;

	v=(int*)malloc(MAX*sizeof(int)); //malloc returns a generic type of ponteir so we have to cast
	if(v==NULL) //case is imposible to aloc memorie requested
	{
		printf("Memória insuficiente\n");
		exit(1);
	}	

	v[0]=10;
	v[1]=20;

	printf("\n%d %d\n\n", v[0], v[1]);

	free(v);
	return 0;
}
