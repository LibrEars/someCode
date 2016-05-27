/*********************************************************************
*Entwickeln Sie ein Programm, das Ihnen die Werte der Sinusfunktion
*in 10er Schritten von 0 bis 360° mit drei Stellen nach dem Komma 
*ausgibt. Die Sinusfunktion sin() ist in der Header-Datei math.h 
*definiert. Achten Sie auf eventuelle Typkonvertierungen
*********************************************************************/

#include <stdio.h>
#include <math.h>

double zehnSine(void);

int main(void) {
	
	// Funktion ausführen
	zehnSine();
	
}


// Funktionsdefinition
double zehnSine(void) {
	// Konstante Pi definieren
	const double Pi = 3.141592653;
	
	// Variablen definieren
	double winkel;
	double rad;
	double sinus;
	int i;
	
	printf("winkel   sinus\n");

	for (i = 0; i <= 36; i++) {
		winkel = i * 10;

		rad = winkel * Pi / 180;
		sinus = sin(rad);

		printf("%6g  %6.3f\n", winkel, sinus);
	}
	return 0;
}




