#include <iostream>
#include<ctime>
using namespace std;
void kwadrat(int* wsk4);
int potega(int* ws5a, int* ws5b);
void wypisz(char* znak, int* wsk6);
int mniejsza(int* ws7a, int* ws7b);
void zamiana(int *z8a, int *z8b);

int main()
{
    srand(time(NULL));
    int z1a, z1b, z1c,* wsk1, *wsk1b, *wsk1c;
    wsk1 = &z1a; wsk1b = &z1b; wsk1c = &z1c;
    cout << "Podaj z1a = ", cin >> z1a;
    cout << "Podaj z1b = ", cin >> z1b;
    cout << "Podaj z1c = ", cin >> z1c;
    (double)z1a;

    cout << "Zad 1 z1a - " << wsk1 << endl;
    cout << "Zad 1 z1a = " << *wsk1 << endl;
    cout << "Zad 1 z1b - " << wsk1b << endl;
    cout << "Zad 1 z1b = " << *wsk1b << endl;
    cout << "Zad 1 z1c - " << wsk1c << endl;
    cout << "Zad 1 z1c = " << *wsk1c << endl;

    cout << "roznica z1a - z1b: " << (*wsk1) - (*wsk1b) << endl; 
    cout << "srednia z podanych liczb: " << ((*wsk1) + (*wsk1b) + (*wsk1c)) / 3 << endl << endl;;

    int z2[10], *wsk2;
    wsk2 = &z2[0]; cout << "Pierwszy elem.: " << wsk2<<endl;
    wsk2 = &z2[3]; cout << "Czwarty elem.: " << wsk2 << endl;
    wsk2 = &z2[0];
    for (int i = 0; i < 10; i++) {
        z2[i]=rand() % 10 + 5; //od 5 do 14
//        (*wsk2++)= rand() % 10 + 5;
        wsk2 = &z2[i];
        cout << i << " elem.: " <<z2[i]<<" "<< wsk2 << "\t";
    }   cout << "\n\n";
  //  wsk2 = &z2[8]; *wsk2++;
 //   cout << "XXXX elem.: " << wsk2 << endl;
//_______ZAD 3______________________________________________
    int suma = 0; double srednia;
    for (int* wsk3 = &z2[0]; wsk3 <= &z2[9]; wsk3++)
    {
        suma += (*wsk3);
    } srednia = suma / 10.0;
    cout << "suma= " << suma << "\tsrednia= " << srednia << endl;
    for (int* wsk3 = &z2[0]; wsk3 <= &z2[9]; wsk3++)
    {
        if (*wsk3 > srednia) cout << *wsk3<<", ";
    }
    cout << "\n\n";
//______ZAD 4_______________________________________________
    int z4 = 6, * wsk4 = &z4;
    cout << *wsk4 << "\t\t";
    kwadrat(wsk4);
    cout << *wsk4 << "\n";
//______ZAD 5_______________________________________________
    int z5a=10, z5b=2, * wsk5a = &z5a, * wsk5b = &z5b;
    cout << "Zadanie 5. 10^2 = " << potega(wsk5a, wsk5b) << "\n\n";
//______ZAD 6_______________________________________________
    char znak ='A', * znak6 = &znak; int z6 = 4, * wsk6 = &z6;
    wypisz(znak6, wsk6); cout << "z6 = " << z6 << "\n\n";
//______ZAD 7_______________________________________________
    int z7a = 2, z7b = 1;       // Jest to referencja
    cout<<mniejsza(&z7a, &z7b); //zamiast wskaźników - adresy zmiennych
    cout << endl;
//______ZAD 8_______________________________________________
    int z8a = 8, z8b = 4;
    zamiana(&z8a, &z8b);
    cout << z8a << " " << z8b;


}
    
void kwadrat(int* ws4) {
    (*ws4) = (*ws4) * (*ws4);
}
int potega(int* ws5a, int* ws5b) {

    return pow(*ws5a, *ws5b);
}
void wypisz(char* znak6, int* wsk6) {
    for (int i = 0; i < *wsk6; i++) cout << *znak6<<", ";
    (*wsk6)--;
}
// Kiedy robisz funkcję int* funkcja przy return nie ma gwiazdki (*ws) i zwraca numer komórki, a nie wartość
int mniejsza(int* ws7a, int* ws7b) {
    if ((*ws7a) < (*ws7b)) { 
        cout << (*ws7a) << "\t"; 
        return *ws7a; 
    }
    else {
        cout << (*ws7b) << "\t"; 
        return *ws7b;
    }
    return 0;
}
void zamiana(int* z8a, int* z8b) {
    int z = *z8a;
    (*z8a) = (*z8b);
    (*z8b) = z;
}
