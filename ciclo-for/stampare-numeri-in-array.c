#include <stdio.h>
int main() {

	printf("stampare tutti i numeri presenti in un array\n");
	
	int numbers[] = { 19, 10, 8, 17, 9, 2, 5, 2, 10, 4, 10, 2, 10, 10, 13, 15 };
	
	/*
	
		0 : 19
		1 : 10
		2 : 8
		...
		13 : 10
		
		lunghezza : 14
	
	*/
	
	int contatore;
	
	int lunghezzaArray = sizeof numbers / sizeof numbers[0];
	
	for(contatore = 0; contatore <= (lunghezzaArray - 1); contatore++) {
		
		int numeroTrovato = numbers[contatore];
		
		printf("Contatore vale %d Numero trovato vale %d\n", contatore, numeroTrovato);
	}
	
	// int numbers[] = { 19, 10, 8, 17, 9, 2, 5, 2, 10, 4, 10, 2, 10, 10 };
	
	// 0...13
	
	//printf("Numero trovato vale %d\n", numbers[indice]);
   
	return 0;
}
