#include <iostream>
#include<ctime>
using namespace std;

int main()
{
//____________________________________________________
	int a, i{ 0 };
	cout << "Wprowadz liczbe: ", cin >> a;
	for (int i = 0; i < a; i++) cout << i << ", ";
cout << endl;
	while (i < a)				cout << i++ << ", ";
cout << endl; i = 0;
	do {
		cout << i++ << ", ";
	} while (i < a);
//____________________________________________________

cout << endl;
	do {
		cin >> a;
	} while (a >= 0);
//____________________________________________________

	cout << endl << "Wpisuj liczby: ";
	int sumaP{ 0 }, sumaM{ 0 }, dod{ 0 }, uj{ 0 };
	for (int i = 0; i < 10; i++)
	{
		cin>> a;
		if (a > 0)		{ sumaP += a; dod++; }
		else if (a < 0) { sumaM += a; uj++; }
		else continue;
	}
	cout << "Ilosc dodatnich= " << dod << "\t\tIlosc ujemnych= " << uj << endl;
	cout << "Suma dodatnich= " << sumaP << "\t\tSuma ujemnych= " << sumaM << endl;
//___________________________________________________

	int n{ 10 }; sumaP = 0; sumaM = 0;
	cout << endl << "Zakres (z kodu) liczb do "<<n<<endl;
	for (int i=0; i<=n; i++) {
		if (i % 2 == 0) sumaP += i;
		else continue;
	}
	cout << "Suma liczb parzystych= " << sumaP <<endl;
//___________________________________________________

	sumaP=0;
	cout << endl << "Podaj n= ", cin >> n;
	srand(time(NULL));
	for (int b,i = 0; i <= n; i++) {
		b = rand() % 34 + 11;
		cout << b << endl;
		if (b % 2 == 0) sumaP += b;
		else continue;
	}
	cout << "Suma liczb parzystych= " << sumaP << endl;



return 0;
}
