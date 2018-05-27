//Aluno = Heitor Rodrigues Cunha   Matricula = 11621EEL008

#include<stdio.h>

int soma(int *pt, int *pz) 
{	
	return (*pz) + ((pz == pt) ? 0 : soma(pt, pz-1));
}

int main()

{
	int tam;
	
	printf("digite os numeros:\n");
	scanf("%i", &tam);	
	getchar();
	
	int i, val[tam];
	printf("digite os valores:\n");
	for(i=0; i<tam; i++)
	
	{
	   scanf("%i", &val[i]);	
       getchar();
	}
	
	int *first = val,*last = val+tam-1;
	printf("\nmedia = %f\n", (float) soma(first, last)/tam);
	
	return 0;
}
