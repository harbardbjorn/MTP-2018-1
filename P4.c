//Nome : Heitor Rodrigues Cunha  Matricula: 11621EEL008

#include <stdio.h>

int main()
{
    int i = 0;
	int cumulat = 0;
	char bits[256];  
	scanf("%s", bits);
	getchar();
	
	while(bits[i])
	{
		
		if(bits[i] >= 48 && bits[i] <= 57) 
		{
			bits[i] = bits[i] - '0'; 
			
			cumulat = cumulat * 10 + bits[i];
			
		}
		
		i++;
	}
	printf("\n O numero digitado e: %d", cumulat);
	getchar();
	
	return 0;
}
