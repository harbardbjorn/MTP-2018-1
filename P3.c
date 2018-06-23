//Heitor Rodrigues Cunha   //11621EEL008

#include <stdio.h>


void bits(unsigned int num, int m) 

{

	if(m != 0) 

	{

	bits(num/2, m-1);

	printf("%d", (num % 2));
	}	

}

int main()

{

	int u, x, y, resultado;

	printf(" 1 = NOT \n 2 = AND \n 3 = OR \n 4 = XOR \n 5 = Right Shift \n 6 = Left Shift");

	printf("\n\n Escolha uma porta logica: ");

	scanf("%d", &u);

	switch(u)

	{

		case 1:

			printf("\n Digite o numero: ");

			scanf("%d", &x);

			getchar(); 

			printf("\n ARGUMENTO NOT %d", x);

			printf("[");

			bits(x, 32); 

			printf("]");

			resultado=~x; 

			printf(" : %d", resultado);

			printf("[");

			bits(resultado, 32);

			printf("]");

			break; 

		

		case 2:

			printf("\n Digite o numero: ");

			scanf("%d", &x);

			getchar();

			printf(" Digite o segundo numero: ");

			scanf("%d", &y);

			getchar();

			printf("\n\n%d", x );

			printf("[");

			bits(x, 32);

			printf("]");

			printf(" ARGUMENTO AND %d", y);

			printf("[");

			bits(y, 32);

			printf("]");

			resultado=x&y; 

			printf(" : %d", resultado);

			printf("[");

			bits(resultado, 32);

			printf("]");

			break;

		case 3:

			printf("\n Digite o numero: ");

			scanf("%d", &x);

			getchar();

			printf(" Digite o segundo numero: ");

			scanf("%d", &y);

			getchar();

			printf("\n\n%d", x);

			printf("[");

			bits(x, 32);

			printf("]");

			printf(" ARGUMENTO OR %d", y);

			printf("[");

			bits(y, 32);

			printf("]");

			resultado=x|y; 

			printf(" : %d", resultado);

			printf("[");

			bits(resultado, 32);

			printf("]");

			break;

		case 4:

			printf("\n Digite o numero: ");

			scanf("%d", &x);

			getchar();

			printf(" Digite o segundo numero: ");

			scanf("%d", &y);

			getchar();

			printf("\n\n%d", x);

			printf("[");

			bits(x, 32);

			printf("]");

			printf(" ARGUMENTO XOR %d", y);

			printf("[");

			bits(y, 32);

			printf("]");

			resultado=x^y; 

			printf(" : %d", resultado);

			printf("[");

			bits(resultado, 32);

			printf("]");

			break;

		case 5:

			printf("\n Digite o numero: ");

			scanf("%d", &x);

			getchar();

			printf(" Digite o segundo numero: ");

			scanf("%d", &y);

			getchar();

			printf("\n\n%d", x);

			printf("[");

			bits(x, 32);

			printf("]");

			printf(" ARGUMENTO RIGHT SHIFT >> %d", y);

			printf("[");

			bits(y, 32);

			printf("]");

			resultado=x>>y; 

			printf(" : %d", resultado);

			printf("[");

			bits(resultado, 32);

			printf("]");

			break;

		case 6:

			printf("\n Digite o numero: ");

			scanf("%d", &x);

			getchar();

			printf(" Digite o segundo numero: ");

			scanf("%d", &y);

			getchar();

			printf("\n\n%d", x);

			printf("[");

			bits(x, 32);

			printf("]");

			printf(" ARGUMENTO LEFT SHIFT << %d", y);

			printf("[");

			bits(y, 32);

			printf("]");

			resultado=x<<y; 

			printf(" : %d", resultado);

			printf("[");

			bits(resultado, 32);

			printf("]");

			break;

	}

	getchar();

	return 0;

}
