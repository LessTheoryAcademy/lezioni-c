#include <stdio.h>
int main() {
	
	int numbers[] = { 10, 15, 25, 5 };
	
	printf("fare la somma dei numeri contenuti in un array\n");
	
	int somma = 0;
	
	int lunghezzaArray = sizeof numbers / sizeof numbers[0];
	
	int contatore;
	
	for(contatore = 0; contatore < lunghezzaArray; contatore++) {
		
		int numeroDaSommare = numbers[contatore];
		
		somma = somma + numeroDaSommare;
	}	
	 	
	printf("La somma vale %d", somma);
	
	// --------------------------------------------
	
	printf("fare la somma dei numeri contenuti in un array (con numeri inseriti da noi)\n");
	
	int lunghezzaArrayCreatoDaNoi;
	
	printf("quanto e' grande il nostro array?");		
	
	scanf("%d", &lunghezzaArrayCreatoDaNoi);
	
	int arrayCreatoDaNoi[lunghezzaArrayCreatoDaNoi];
	
	for(contatore = 0; contatore < lunghezzaArrayCreatoDaNoi; contatore++) {
		
		printf("inserisci il prossimo numero :");	
		
		int numeroInserito;	
	
		scanf("%d", &numeroInserito);		
		
		arrayCreatoDaNoi[contatore] = numeroInserito;
	}
	
	somma = 0;
	
	for(contatore = 0; contatore < lunghezzaArrayCreatoDaNoi; contatore++) {
		
		int numeroDaSommare = arrayCreatoDaNoi[contatore];
		
		somma = somma + numeroDaSommare;
	}	
	 	
	printf("La somma vale %d", somma);	
   
	return 0;
}
