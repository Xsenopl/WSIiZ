#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	cout << "Zad 1:\t\t";
	float a = 3, b = 2, x, rozw;
	if (a == 0) cout << "SPRZECZNOSC";
	else { rozw = -b / a; cout << "Rozwiazanie:\t x=" << rozw; }
//______________________________________________________________
	cout << "\n\n\nZad 2:\t\t";
	float c = 1, delta;
		delta = b * b + 4 * a * c;
	if (a != 0) {
		if (delta < 0) cout << "BRAK rozw\n";
		else if (delta == 0) cout << "JEDNO rozw\n";
		else if (delta > 0) cout << "DWA rozw\n";
	}
	else cout << "Funkcja liniowa lub sprzeczna (wyzej)\n";
//_____________________________________________________________
	cout << "\n\n\nZad 3:\t\t";
	float deltaS;
	deltaS = sqrt(b * b + 4 * a * c);
	if (a != 0) {
		if (delta < 0) cout << "BRAK rozw\n";
		else if (delta == 0) cout << "x="<<(-b/(2*a));
		else if (delta > 0) cout << "x1="<<( (-b+deltaS) / (2*a) )<<"\tx2="<< ((-b - deltaS) / (2 * a))<<endl;
	}
	else cout << "Funkcja liniowa lub sprzeczna (wyzej)\n";
//____________________________________________________________
	cout << "\n\n\nZad 4:\t\t";
	cout << "Podaj x: ", cin >> x;
	if (x < 0)			cout << "x= " << -3 * x <<"\t";
	else if (x == 0)	cout << "x= " << 0 << "\t";
	else if (x > 0)		cout << "x= " << 2 * x << "\t";
//b(x)
	if (x >= 1)			cout << "x= " << pow(x,2) << "\t";
	else				cout << "x= " << x << "\t";

//c(x)
	if (x < 2)			cout << "x= " << x-4 << "\t";
	else if (x == 2)	cout << "x= " << 8 << "\t";
	else if (x > 2)		cout << "x= " << 2+x << "\t";
//____________________________________________________________
	cout << "\n\n\nZad 5:\t\t";
	cout << "podaj 3 liczby: ", cin >> a>> b>> c;
	if (a >= b && a >= c)
			if (b >= c)		cout << "a\tb\tc";
			else			cout << "a\tc\tb";
	else if (b >= a && b >= c)
			if (a >= c)		cout << "b\ta\tc";
			else			cout << "b\tc\ta";
	else if (c >= a && c >= b)
			if (a >= b)		cout << "c\ta\tb";
			else			cout << "c\tb\ta";

//____________________________________________________________
	cout << "\n\n\nZad 6:\n";
	bool deszcz, autobus;
	cout << "Napisz czy pada: \t", cin >> deszcz;
	cout << "Napisz czy autobus: \t", cin >> autobus;

	if (deszcz && autobus)		 cout << "Wez parasol \t" << "Dostaniesz sie na uczelnie \n";
	else if (deszcz && !autobus) cout << "Nie dostaniesz sie na uczelnie \n";
	else if (!deszcz && autobus) cout << "Dostaniesz sie na uczelnie\t" << "Milego dnia i pieknej pogody \n";
	else						 cout << " x^0^x \n";
//____________________________________________________________
	cout << "\n\n\nZad 7:\n";
	bool znizka, premia;
	cout << "Napisz czy znizka: \t", cin >> znizka;
	cout << "Napisz czy premia: \t", cin >> premia;
// Poniżej prezentuje moje rozwiązania. Nie zdołałem utworzyć trzech ifów w jednym. Nie znalazłem sytuacji, w której nie byłoby błędów logicznych lub byłaby powiedziana cała prawda. Zazwyczaj pierwszy zawsze był true, czasem drugi. 
// Jestem najbardziej zadowolony z trzeciego podejścia, ale nie mogłem w nim uniknąć && (z treści zadania zrozumiałem, że nie mam z tego korzystać). Musiałem też zrobić drugiego niezależnego ifa, by oznajmić wyłącznie o braku zniżki

	if (!znizka || premia)		 cout << "Mozesz kupic samochod ! \t" << "Znizki na samochod nie ma :( \n";
	if (!znizka || !premia)      cout << "Zakup samochod trzeba odlozyc na pozniej... \t" << "Znizki na samochod nie ma \n";
	if (znizka || premia)        cout << "Mozesz kupic samochod ! \n";

	cout << endl << endl;
	if (znizka || premia)        cout << "Mozesz kupic samochod ! \n";
	if (!znizka || !premia)      cout << "Zakup samochod trzeba odlozyc na pozniej... \n";
	if (!znizka)				 cout << "Znizki na samochod nie ma :( \n";

	cout << endl << endl;
	if(znizka || premia)		cout << "Mozesz kupic samochod ! \n";
	else if(!znizka && !premia) cout << "Zakup samochod trzeba odlozyc na pozniej... \n";
	if (!znizka)				cout << "Znizki na samochod nie ma :( \n";



}
