#include <iostream>

using namespace std;

int main ()
{
	int A; // Zmienna
	int *pA; // Wska�nik
	
	A = 10; // Warto�� zmiennej
	pA = &A; // Adres zmiennej do wska�nika
	
	*pA = 20; // Dostanie si� do warto�ci zmiennej przez wska�nik
	
	cout << A; // Wypisanie zmiennych
	
	return 0;
}

