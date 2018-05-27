//Aluno = Heitor Rodrigues Cunha  Matricula = 11621EEL008

#include<stdio.h>

int func(int y, int t) 
{
	if(y==0)
		return t+1;
	else if(t==0)
		return func(y-1, 1);
	else
		return func(y-1, func(y, t-1));
}

int main()
{

	int y, t;
	printf("digite os valores de alfa e beta: ");
	scanf("%i %i", &y, &t);
	getchar();
	printf("\n%i\n", func(y,t));	
	
	return 0;
}
