//Nome : Heitor Rodrigues Cunha  Matricula: 11621EEL008

#include <stdio.h>

int main()
{
	int j , i, num[64], *pnum;
	char msg[256], *pfras;
	
	for(i = 0; i < 256; i++) msg[i] = '\0';
	printf("1 Codificar\n2 Decodificar\n\nEscolha 1 ou 2 = ");
	scanf("%d",&j);
	getchar();
	
	switch(j)
	{
		case 1:
		{
			printf("Entre com uma mensagem de ate 255 caracteres : \n\n"); 
			gets(msg);
			char *pfras = msg;
			printf("\nA frase codificada e:\n\n");
			
			for(i = 0; msg[i] ;i++)
			{
				pnum = (int*)pfras;
				if(pnum[i]!= 0)
				printf("%d",pnum[i]);
				if(pnum[i+1]!= 0) 
				printf(", ");
			}
			break;
		}
		
		case 2:
		{
			printf("\nDigite os numeros com ate 64 casas, e o ultimo entre 1 e ""4095\nDigite 0 em frase decodificada 2:\n\n");
			
			for(i = 0; i < 64; i++)
			 {
				printf("Frase a ser decodificada %d:\n ", i + 1); 
				scanf("%d", &num[i]);
				pfras = (char*)num;
				if(num[i]==0) 
				break;
			 }
			 
			 printf("\nFrase decodificada: %s", pfras);
	    }
			
	}
	return 0;
}

