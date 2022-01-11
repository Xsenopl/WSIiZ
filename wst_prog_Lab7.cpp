#include <iostream>
using namespace std;

void konwersja(int liczba);
int fib(int n);
int nwd(int a, int b);
int silnia(int n);
float ciag_a(int n);


int main()
{
	konwersja(0); cout << endl;
	konwersja(1); cout << endl;
	konwersja(2); cout << endl;
	konwersja(3); cout << endl;
	konwersja(4); cout << endl;
	konwersja(5); cout << endl;
	konwersja(16); cout << endl<<endl;

	cout << fib(0) << endl;
	cout << fib(1) << endl;
	cout << fib(2) << endl;
	cout << fib(3) << endl;
	cout << fib(4) << endl;
	cout << fib(5) << endl;
	cout << fib(6) << endl << endl;

	cout << nwd(1,1) << endl;
	cout << nwd(1,2) << endl;
	cout << nwd(6,6) << endl;
	cout << nwd(12, 8) << endl << endl;

	cout << silnia(0) << endl;
	cout << silnia(1) << endl;
	cout << silnia(2) << endl;
	cout << silnia(3) << endl;
	cout << silnia(4) << endl;
	cout << silnia(7) << endl<<endl;

	cout << ciag_a(1) << endl;
	cout << ciag_a(2) << endl;
	cout << ciag_a(3) << endl;
	cout << ciag_a(4) << endl;
	cout << ciag_a(5) << endl;
	cout << ciag_a(6) << endl;
	cout << ciag_a(7) << endl<<endl;
}


void konwersja(int liczba) {
	if (liczba == 1) cout << 1;
	else if (liczba == 0) cout << 0;
	else {
		konwersja(liczba / 2);
		cout << liczba % 2;
	}
}

int fib(int n) {
	if (n==0) return 0;
	if (n == 1) return 1;
	if (n >= 2) return fib(n - 1) + fib(n - 2);
}

int nwd(int a, int b) {				//algorytm Euklidesa
	if (b != 0)
		return nwd(b, a % b);

	return a;
}

int silnia(int n) {
	if (n == 0) return 1;
	else return n * silnia(n - 1);
}

float ciag_a(int n) {
	if (n == 1) return 0;
	if (n == 2) return 0.5;
	if (n > 2) return (-ciag_a(n - 1) * ciag_a(n - 2));
}