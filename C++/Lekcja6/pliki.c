#include <stdio.h>

int main () {
	
	/* 
		"Uchwyt do pliku." - wska�nik do struktury, kt�ra symbolizuje plik.
	*/
	FILE *f;
	
	/* 
		Zmienna na poszczeg�lny znak.
	*/
	char ch;
	
	/*
		fopen(Nazwa,TrybOtwarcia); - otwarcie pliku do odczytu. Przypisanie do f adresu struktury, kt�ry zwraca funkcja.
	*/
	f = fopen("alfa.txt", "r");
	
	/* 
		Je�eli plik nie jest 0, to czytaj.
	*/
	if (f > 0) {
		
		/* 
			Do ko�ca pliku.
		*/
		while (feof(f) == 0) {
			/* 
				Czytaj znak.
			*/
			ch = getc(f);
			/* 
				Wypisuj znak.
			*/
			putchar(ch);
		}
		
		/* 
			Zamkni�cie pliku.
		*/
		fclose(f);
			
	} else {
		printf("\n Blad otwarcia pliku!");
	}
	
	return 0;
}
