#include<iostream>
using namespace std;

bool czy_pierwsza(long long a) {
	//zwraca true, jezeli a jest liczba pierwsza
	//zwraca false, jezeli a nie jest liczba pierwsza
	bool pierwsza = 1;
	for (int i = 2; i <= sqrt(a); i++) {
		if (a % i == 0) {
			pierwsza = 0;
			break;
		}
	}
	return pierwsza;
}

int main() {
	long long liczba1, liczba2;
	cout << "podaj przedzial: ";
	cin >> liczba1 >> liczba2;
	if (liczba1 < 0 || liczba2 < 0 ) cout << "Blad, podano wartosc ujemna";
	else {
		cout << "Liczby pierwsze przedzialu (" << liczba1 << ", " << liczba2 << ") to:" << endl;

		for (int i = liczba1; i <= liczba2; i++) {		//wykonuje petle po wszystkich liczbach danego przedziału
			if (czy_pierwsza(i)) cout << i << endl;		//i sprawdza czy dana liczba jest pierwsza, nastepnie zwraca ją jeśli jest pierwsza
		}
	}
}