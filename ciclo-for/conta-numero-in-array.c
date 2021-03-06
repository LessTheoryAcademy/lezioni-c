#include <stdio.h>
int main() {
	
	int numbers[] = { 19, 10, 8, 17, 9, 2, 5, 2, 10, 4, 10, 2, 10, 10 };
	
	printf("mostrare tutti i numeri presenti in un array\n");
	
	// primo elemento di un array ha indice 0
	// ultimo elemento del nostro array ha indice 13, totale di elementi in array 14
	// ultimo elemento ha come indice il numero degli elementi dell'array - 1
	
	// 0, 1, 2, 3, 4, ...11
	
	int contatore;
	
	for(contatore = 0; contatore <= 11; contatore++) {
		
		int numeroDaMostrare = numbers[contatore];
		
		printf("Indice : %d Numero trovato : %d\n", contatore, numeroDaMostrare);
	}	
	 
	printf("contare quante volte è presente un numero in un array\n");		
	
	printf("Quale numero stai cercando?");
	
	int numeroRicercato;
	
	scanf("%d", &numeroRicercato);
	
	// in questa veriabile memorizziamo quante volte abbiamo trovato il numero che stiamo ricercando
	// all'interno dell'array
	int numeroPresente = 0;
	
	int lunghezzaArray = sizeof numbers / sizeof numbers[0];
	
	for (contatore = 0; contatore <= (lunghezzaArray - 1); contatore++)
	{
	    int numeroDaEsaminare = numbers[contatore];
	    
	    if (numeroDaEsaminare == numeroRicercato) {
	    	
		// se abbiamo trovato l'elemento che stiamo cercando, dobbiamo aumentare di 1 il valore della variabile
		// che tiene traccia di quante volte il numero è stato trovato
	    	numeroPresente++;
	    }
	}
	
	printf("Il numero che hai ricercato e' presente %d volte nell'array", numeroPresente);
   
	return 0;
}
