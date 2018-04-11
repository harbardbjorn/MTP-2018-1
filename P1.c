//Heitor Rodrigues Cunha    Matricula = 11621EEL008
#include <stdio.h>

 int main () 
{
  
int posi = 0;		//posicao da variavel na string
int estado = 0;
  
char var[256];		//declarando uma string
  printf ("Declare o numero desejado em binario: ");
  
scanf ("%s", &var[posi]);	// quarda os valores no endereco de memoria da variavel
  
 
while (var[posi] != '\0')	//enquanto var estiver com valores em memoria faca
    {
      
if (var[posi] != '0' && var[posi] != '1')	//impedindo que se digite algo diferente do pedido
	{
	  
printf ("Esta errado digite novamente :(");	//mostrar ao usuario que a algo errado
	  return 1;		//encerra o programa para que se digite outro valor 
	}
      
if (estado == 0 && var[posi] == '0')	//se o estado estiver = 0 e a var estiver com valor 0 
	{
	  
estado = 0;		//entao estado = 0 
	}
      
      else if (estado == 0 && var[posi] == '1')	// senao (se o estado for igual a zero e var estiver com valor = a 1 )
	{
	  
estado = 1;		// entao estado = 1
	}
      
      else if (estado == 1 && var[posi] == '0')	// senao (se estado for igual a 1 e var estiver com valor = a 0)
	{
	  
estado = 2;		// entao estado = a 2
	}
      
      else if (estado == 2 && var[posi] == '1')	// senao (se estado for igual a 2 e var estiver com valor = a 1)
	{
	  
estado = estado;	//entao estado = 0
	}
      
      else if (estado == 2 && var[posi] == '0')	// senao (se estado for igual a 2 e var estiver com valor = a 0)
	{
	  
estado = 1;		//entao estado = a 1
	}
      
      else if (estado == 1 && var[posi] == '1')	// senao (se estado for igual a 1 e var estiver na posicao = a 1)
	{
	  
estado = 0;		//entao estado = a 0
	}
      
      else			//senao estado = 0
	{
	  
estado = estado;
	
}
      
posi++;			//a cada posicao analisada pula-se para a procima e repita a analise
    }
  
 
printf ("A sequencia original e: %s", var);	// mostra o que esta guardado na var
  
printf ("\nO estado e: %d\n", estado);	// mostre o que esta guardado dentro de estado 
  
 if (estado == 0)
 {
     printf("O numero e multiplo de 3\n");
 }
 else 
 {
     printf("O numero não e multiplo de 3");
 }
 
return 0;

}


