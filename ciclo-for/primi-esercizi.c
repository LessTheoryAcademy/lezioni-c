#include <stdio.h>
int main() {
	 
	// stampare la frase "ciao a tutti" per 10 volte
	printf("stampare la frase 'ciao a tutti' per 10 volte\n");
	
	int contatore;
	
	for (contatore = 0; contatore < 10; contatore++)
	{
	    printf("ciao a tutti\n");
	}
	
	// stampare i numeri che vanno da 0 a 10
	printf("\n\nstampare i numeri che vanno da 0 a 10\n");
			
	for (contatore = 0; contatore <= 10; contatore++)
	{
	    printf("Numero stampato %d\n", contatore);
	}
	
	// stampare i numeri che vanno da 5 a 20
	printf("\n\nstampare i numeri che vanno da 5 a 20\n");
	
	for (contatore = 5; contatore <= 20; contatore++)	
	{
	    printf("Numero stampato %d\n", contatore);
	}
	
	// stampare i numeri che vanno da 10 a 0
	printf("\n\nstampare i numeri che vanno da 10 a 0\n");
	
	for (contatore = 10; contatore >= 0; contatore--)
	{
	    printf("Numero stampato %d\n", contatore);
	}
	
	// stampare i numeri che vanno da 20 a 5
	printf("\n\nstampare i numeri che vanno da 20 a 5\n");
	
	for (contatore = 20; contatore >= 5; contatore--)
	{
	    printf("Numero stampato %d\n", contatore);
	}
	
	// stampare i numeri che vanno da 2 a 10, ma solo quelli pari (2, 4, 6, 8, 10)
	printf("\n\nstampare i numeri che vanno da 2 a 10, ma solo quelli pari (2, 4, 6, 8, 10)\n");
	
	for (contatore = 2; contatore <= 10; contatore += 2)
	{
	    printf("Numero stampato %d\n", contatore);
	}   
   
	return 0;
}
