#include<stdio.h>
#include<stdlib.h>
#define LIN 2
#define COL 2

void f_static(float mat[][2])
{
	int i,j;
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("%.2f\t", mat[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	float mat[2][2]={{2,3},{4,5}};
	
	f_static(mat); //Declaração estática

	int *mat2;
	int i;
	mat2 = (int*)malloc(LIN*COL*sizeof(int));
	if (mat==NULL)
	{
		printf("Memória insuficiente.\n");
		exit(1);
	}
	for (i=0; i<LIN*COL; i++)
	{
		mat2[i]=i;
	}
	return 0;
}