/*************************************************************
*Entwickeln Sie ein Programm, das das Skalarprodukt zweier 
*Vektoren bestimmt. Die Anzahl der Elemente und die Werte der 
*Vektoren sind in der Eingabeschleife manuell einzugeben.
*
* Überprüfen Sie, ob die Anzahl der Elemente die Maximalgröße 
* der Vektoren überschreitet und ermöglichen Sie ggf. eine 
* Korrektur. Legen Sie die maximale Anzahl der Vektorelemente 
* mit einer define-Anweisung durch den Präprozessor fest.
*
* Skalarprodukt: A*B = a1*b1 + a2*b2 + a3*b3 + ... + an*bn
*************************************************************/

#include <stdio.h>
#include <math.h>

#define elementMax 6

int main(void) {
	int i, ai, bi, element;
	int sProdukt = 0;

	printf("Programm zum berechnen des Skalarproduktes X*Y\n");

	// read the values
	printf("Anzahl der Elemente eingeben:\n");
	scanf("%d",&element);
	while (element > elementMax) {
		printf("Anzahl der Elemente zu groß\nNochmal eingeben\n");
		scanf("%d", &element);
	}		
	for (i = 0; i < element; i++) {
		printf("%d-tes x-element eingeben:\n", i+1);
		scanf("%d", &ai);
		printf("%d-tes y-element eingeben:\n", i+1);
		scanf("%d", &bi);

		// calculate
		sProdukt += ai*bi;
	}

	printf("Das Skalarprodukt X*Y = %d\n", sProdukt);
	return 0;
	
}

