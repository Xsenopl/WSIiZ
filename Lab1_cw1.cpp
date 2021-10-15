#include <iostream>
using namespace std;
int main()
{
    cout << "Nr albumu: 65574\n";                                   // Zad1
int liczba1;
    cout << "Podaj liczbe: ", cin >> liczba1;                       // Zad2
    if (liczba1 % 2 == 0) cout << "dana liczba jest parzysta\n";
    else  cout << "dana liczba NIE jest parzysta\n";

float liczba2, liczba3, liczba4, liczba5, srednia;                  // Zad3
    cout << "podaj jeszcze dwie liczby: ", cin >> liczba2 >> liczba3;
 //   cout << liczba2 << endl << liczba3;
    if (liczba2 > liczba3)      cout << liczba2 << " jest wieksza od " << liczba3;
    else if (liczba3 > liczba2) cout << liczba3 << " jest wieksza od " << liczba2;
    else                        cout << "liczby " << liczba2 << " i " << liczba3 << " sa  rowne";
cout << "\n\n";
                                                                    // Zad4
cout << "Podaj jeszcze 4 liczby: ", cin >> liczba2 >> liczba3 >> liczba4 >> liczba5;
    srednia = (liczba2 + liczba3 + liczba4 + liczba5) / 4;
    cout << "Srenia podanych liczb = " << srednia;

cout << "\n\n ----KALKULATOR----\n";                                // Zad5
int dzialanie;
    cout << "Liczba: ", cin >> liczba2;
    cout << "Wybierz dzialanie: \n 1. Dodawanie\n 2. Odejmowanie\n 3. Mnozenie\n 4. Dzielenie\n", cin>>dzialanie;
    cout << "Liczba: ", cin >> liczba3;
    switch (dzialanie) {
        case 1: cout <<"\t\t\t" << liczba2 << "+" << liczba3 << "=" << liczba2 + liczba3 << endl; break;
        case 2: cout <<"\t\t\t" << liczba2 << "-" << liczba3 << "=" << liczba2 - liczba3 << endl; break;
        case 3: cout <<"\t\t\t" << liczba2 << "*" << liczba3 << "=" << liczba2 * liczba3 << endl; break;
        case 4: 
            if (liczba3 == 0)   { cout << "Nie dzielimy przez zero\n"; break; }
            else                { cout << liczba2 << "/" << liczba3 << "=" << liczba2 / liczba3 << endl; break; }
        default: cout << "Blad kalkulatora - ERROR!"; break;
    }
return 0;
}

