/*************************************************
*Entwickeln Sie ein Programm, das ein auf der Spitze stehendes Dreieck
*mit Sternchen (*) auf dem Bildschirm ausgibt
**************************************************/

#include <stdio.h>

//

int main(void) {

	// variablen
	unsigned l, m, n;
	unsigned zeilen;
	unsigned nSterne, leerzeichen;

	printf("Bitte Anzahl der Zeilen eingeben\n");
	if ( scanf("%u", &zeilen)==0) {
		printf("ungültie Eingabe");
		return 0;
	}

	for (l = 1; l <= zeilen; l++) {
		leerzeichen = l;
		nSterne = (zeilen + 1 - l) *2 -1;

		printf("\n");

		for (m = 1; m <= leerzeichen; m++) {
			printf(" ");
		}

		for (n = 1; n <= nSterne; n++) {
			printf("*");
		}
	}
	printf("\n");
	return 0;
}

