#include <stdio.h>

#include <stdbool.h>

int main() {

	int numbers[] = { 10, 15, 25, 5, 15 };
	
	printf("verificare se un numero e' presente in un array e stampare a video se l'abbiamo trovato o no\n\n");
	
	int numeroDaCercare = 15;
	
	int indice;
	
	int lunghezzaArray = sizeof numbers / sizeof numbers[0];
	
	// ricordarci se abbiamo trovato il numero o no
	bool isTrovato = false;
	
	for(indice = 0; indice < lunghezzaArray; indice++) {
		
		int numeroDaVerificare = numbers[indice];
		
		printf("numero da verificare vale %d\n", numeroDaVerificare);
		
		if (numeroDaVerificare == numeroDaCercare) {
			
			isTrovato = true;
			
		} 
		// evitare l'errore di settare a false isTrovato se numeroDaVerificare != numeroDaCercare
		/*
		else {
			
			isTrovato = false;
		}
		*/
		
		/*
		if (numeroDaVerificare == numeroDaCercare) {
			
			printf("elemento trovato\n");
			
		} else {
			
			printf("elemento non trovato\n");
		}
		*/
	}
	
	if (isTrovato) {
		
		printf("elemento trovato\n");
		
	} else {
		
		printf("elemento non trovato\n");
	}
	
	// -----------------------------------------------------------
	
	// int numbers[] = { 10, 15, 25, 5, 15 };
	
	printf("\n\n-------------------------------\n\n");
	
	printf("verificare se un numero e' presente in un array e stampare a video 'elemento trovato' "
	"e l'indice in cui si trova in caso positivo (stampare un messaggio informativo anche se non e' stato trovato)\n\n");
	
	numeroDaCercare = 15;
	
	// ricordarci se abbiamo trovato il numero o no
	isTrovato = false;
	
	int indiceElementoTrovato = -1;
	
	for(indice = 0; indice < lunghezzaArray; indice++) {
		
		int numeroDaVerificare = numbers[indice];
		
		printf("numero da verificare vale %d\n", numeroDaVerificare);
		
		if (numeroDaVerificare == numeroDaCercare) {
			
			isTrovato = true;
			
			indiceElementoTrovato = indice;
		} 
	}
	
	if (isTrovato) {
		
		printf("elemento trovato nell'indice %d\n", indiceElementoTrovato);
		
	} else {
		
		printf("elemento non trovato\n");
	}
	
	// -----------------------------------------------------------
	
	// int numbers[] = { 10, 15, 25, 5, 15 };
	
	printf("\n\n-------------------------------\n\n");
	
	printf("verificare se un numero e' presente in un array e stampare a video 'elemento trovato' "
	"e l'indice in cui si trova in caso positivo (stampare un messaggio informativo anche se non e' stato trovato)"
	"se e' presente piu' di una volta, mostrare il primo indice in cui si trova\n\n");
	
	numeroDaCercare = 15;	
	
	// ricordarci se abbiamo trovato il numero o no
	isTrovato = false;
	
	indiceElementoTrovato = -1;
	
	for(indice = 0; indice < lunghezzaArray; indice++) {
		
		int numeroDaVerificare = numbers[indice];
		
		printf("numero da verificare vale %d\n", numeroDaVerificare);
		
		if (isTrovato == false && numeroDaVerificare == numeroDaCercare) {
			
			isTrovato = true;
			
			indiceElementoTrovato = indice;
		} 
	}
	
	if (isTrovato) {
		
		printf("elemento trovato nell'indice %d\n", indiceElementoTrovato);
		
	} else {
		
		printf("elemento non trovato\n");
	}	
   
	return 0;
}
