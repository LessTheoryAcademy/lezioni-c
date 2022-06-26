#include <stdio.h>

#include <stdbool.h>

int main() {

	// dichiariamo e inizializziamo un array di numeri interi
	int numbers[] = { 10, 15, 25, 5, 15 };
	
	printf("verificare se un numero e' presente in un array e stampare a video se l'abbiamo trovato o no\n\n");
	
	// dichiariamo il numero che vogliamo ricercare all'interno dell'array
	int numeroDaCercare = 15;
	
	// valore utilizzato all'interno del ciclo for (il nostro "contatore"...)
	int indice;
	
	// calcoliamo dinamicamente la lunghezza dell'array dei numeri
	int lunghezzaArray = sizeof numbers / sizeof numbers[0];
	
	// dobbiamo ricordarci se abbiamo trovato il numero o no..l'abbiamo già trovato? ovviamente no...
	// la ricerca sta iniziando ora...quindi per forza isTrovato è uguale a false
	bool isTrovato = false;
		
	for(indice = 0; indice < lunghezzaArray; indice++) {
	
		// esaminiamo numero per numero 
		
		int numeroDaVerificare = numbers[indice];
		
		printf("numero da verificare vale %d\n", numeroDaVerificare);
		
		// verifichiamo se il numero che stiamo esaminando in questo momento è uguale al numero che stiamo ricercando
		if (numeroDaVerificare == numeroDaCercare) {
			
			// in caso affermativo, dobbiamo ricordarcelo...quindi settiamo a true la variabile isTrovato
			isTrovato = true;
			
		} 
		// evitare l'errore di settare a false isTrovato se numeroDaVerificare != numeroDaCercare
		/*
		else {
			
			isTrovato = false;
		}
		*/
		
		// ed evitiamo anche di stampare ad ogni ciclo se il numero che stiamo esaminando è uguale a quello che stiamo ricercando,
		// non va bene! Dobbiamo mostrarlo solo alla fine del ciclo, altrimenti la frase "elemento trovato" o "elemento non trovato"
		// verrà mostrata ad ogni esecuzione del ciclo...ed ovviamente non va bene :)
		/*
		if (numeroDaVerificare == numeroDaCercare) {
			
			printf("elemento trovato\n");
			
		} else {
			
			printf("elemento non trovato\n");
		}
		*/
	}
	
	// ora che siamo fuori dal ciclo, possiamo finalmente mostrare a video se l'elemento è stato trovato oppure no
	if (isTrovato) {
		
		printf("elemento trovato\n");
		
	} else {
		
		printf("elemento non trovato\n");
	}
	
	// -----------------------------------------------------------
	
	// int numbers[] = { 10, 15, 25, 5, 15 };
	
	printf("\n\n-------------------------------\n\n");
	
	// questa versione è leggermente diversa, verifichiamo se un elemento è presente in un array, 
	// e stampare a video anche l'indice dell'elemento se viene trovato
	
	printf("verificare se un numero e' presente in un array e stampare a video 'elemento trovato' "
	"e l'indice in cui si trova in caso positivo (stampare un messaggio informativo anche se non e' stato trovato)\n\n");
	
	numeroDaCercare = 15;
		
	isTrovato = false;
	
	// questa variabile ci serve perchè deve memorizzare l'indice dell'elemento (se lo troviamo)
	// inizializziamolo con un valore che per noi significa un indice che non esiste: -1 non può essere infatti un valore di indice valido
	int indiceElementoTrovato = -1;
	
	for(indice = 0; indice < lunghezzaArray; indice++) {
		
		int numeroDaVerificare = numbers[indice];
		
		printf("numero da verificare vale %d\n", numeroDaVerificare);
		
		if (numeroDaVerificare == numeroDaCercare) {
		
			// abbiamo trovato l'elemento, perfetto!
			isTrovato = true;
			
			// memorizziamo il suo indice!
			indiceElementoTrovato = indice;
		} 
	}
	
	// e qua mostriamo il risultato della ricerca	
	if (isTrovato) {
		
		printf("elemento trovato nell'indice %d\n", indiceElementoTrovato);
		
	} else {
		
		printf("elemento non trovato\n");
	}
	
	// -----------------------------------------------------------
	
	// int numbers[] = { 10, 15, 25, 5, 15 };
	
	printf("\n\n-------------------------------\n\n");
	
	// questo esercizio è simile a quello precedente ma...ha una piccola modifica: vogliamo mostrare il PRIMO indice dell'elemento trovato
	// (cioè se l'elemento viene trovato nell'indice 2 e 5, deve essere mostrato l'indice 2)
	
	printf("verificare se un numero e' presente in un array e stampare a video 'elemento trovato' "
	"e l'indice in cui si trova in caso positivo (stampare un messaggio informativo anche se non e' stato trovato)"
	"se e' presente piu' di una volta, mostrare il primo indice in cui si trova\n\n");
	
	numeroDaCercare = 15;	
	
	isTrovato = false;
	
	indiceElementoTrovato = -1;
	
	for(indice = 0; indice < lunghezzaArray; indice++) {
		
		int numeroDaVerificare = numbers[indice];
		
		printf("numero da verificare vale %d\n", numeroDaVerificare);
		
		if (isTrovato == false && numeroDaVerificare == numeroDaCercare) {
			
			// dobbiamo entrare qua (e memorizzare l'indice), SOLO SE l'elemento non era stato già trovato,
			// in caso contrario non facciamo nulla dato che abbiamo già segnato come trovato l'elemento
			// e abbiamo memorizzato il suo indice...il primo indice, cioè quello che chiede l'esercizio
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
