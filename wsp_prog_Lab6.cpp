#include <iostream>
#include "Lab6_f.h"
using namespace std;



int main()
{
	int a = 2, b = 3, c = 5;
	cout << "a = " << a << "\tb = " << b << "\tc = " << c << endl;
	cout << "p_kola(a) = "			<<p_kola(a)				<<endl;
	cout << "p_prostokata(a, b) = "	<< p_prostokata(a,b)	<<endl;
	cout << "p_trojkata(a, b) = "	<< p_trojkata(a,b)		<<endl;

	cout << "p_szescianu(a) = "<< p_szescianu(a)	<<endl;
	cout << "v_szescianu(a) = "<< v_szescianu(a)	<<endl;
	cout << "p_walca(a, c) = " << p_walca(a,c)		<<endl;
	cout << "v_walca(a, c) = " << v_walca(a,c)		<<endl;

	int liczba = 2;
	if (LiczbaPierwsza(liczba)) cout << "Pierwsza";
	else						cout << "NIE pierwsza";

	cout << "\n\n";
	
	 konwersja(0); cout << "\n";
	 konwersja(1); cout << "\n";
	 konwersja(2); cout << "\n";
	 konwersja(3); cout << "\n";
	 konwersja(4); cout << "\n";
	 konwersja(5); cout << "\n";
	 konwersja(15); cout << "\n";
	 konwersja(16); cout << "\n";
	 konwersja(30); cout << "\n";
	 cout << "\n\n";

	 cout << dwusilnia(0) << "\n\n";
	 cout << dwusilnia(4) << "\n\n";
	 cout << dwusilnia(8) << "\n\n";
	 cout << dwusilnia(1) << "\n\n";
	 cout << dwusilnia(3) << "\n\n";
	 cout << dwusilnia(5) << "\n\n";
	 cout << dwusilnia(9) << "\n\n";



}

