//Nome = Heitor Rodrigues Cunha  Matricula = 11621EEL008

#include <stdio.h>

int main()
{
    int j = 0;
	int cumulativa = 0;
	char bits[256];  
	scanf("%s", bits);
	getchar();
	
	while(bits[j])
	{
		
		if(bits[j] >= 48 && bits[j] <= 57) // verifica se o caractere atual é um algarismo
		{
			bits[j] = bits[j] - '0'; //converte char para int 
			
			cumulativa = cumulativa * 10 + bits[j]; //compõe o numero usando cada algarismo
			
		}
		
		j++;
	}
	printf("\n O numero digitado e: %d", cumulativa);
	getch();
	
	return 0;
}
