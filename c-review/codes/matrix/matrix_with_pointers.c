#include<stdio.h>
#include<stdlib.h>
#define LIN 2
#define COL 2

/*void f_static(float mat[][2])
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
}*/

int main()
{
	int **mat,i;

	mat = (int**)malloc(LIN*sizeof(int)); //malloc to vec of pointers
	for (i=0; i<LIN; i++)
	{
		mat[i]= (int*)malloc(COL*sizeof(int));//malloc to each pointer
	}
	
/*The advantage to do this approach is that now we can access the 
	matrix elements as we are used to in math.*/

	mat[0][0]=1; 
	mat[0][1]=0; 
	mat[1][0]=0; 
	mat[1][1]=1; 

	printf("%d\n", mat[0][1]);
	//liberando espaço
	for(i=0;i<LIN;i++)
	{
		free(mat[i]); //liberando memória de cada ponteiro
	}
	free(mat); //por último, liberando memória do ponteiro de ponteiros
	return 0; 
	
}