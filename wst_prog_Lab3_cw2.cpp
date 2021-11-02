#include <iostream>
using namespace std;

int main()
{
	int i{1}, n, sumaP{0};
	cout << "Podaj liczbe studentow: ", cin >> n;
	while(n<1||n>100) cout << "Podaj WLASCIWA liczbe studentow: ", cin >> n;

	while (i <= n) {
		int punkt;
		cin >> punkt;	
			if (punkt >= 0 && punkt<=100)
				sumaP += punkt;
			else continue;
		i++;

	}
	cout << "Srednia punktow w grupie = " << (float)sumaP / n<<endl;
//________NIESKOŃCZONA PĘTLA______________________________________________________________________________________
/*	sumaP = 0, i = 1;
	while (true) {
		int punkt;
		cin >> punkt;

		if (punkt >= 0 && punkt <= 100)
			sumaP += punkt;
		else continue;
		i++;

	}
	cout << "Srednia punktow w grupie = " << (float)sumaP / n << endl;


//__________PĘTLA DO_WHILE_______________________________________________________________
	sumaP = 0;
	 do{
		int punkt;
		cin >> punkt;

		if (punkt >= 0 && punkt <= 100)
			sumaP += punkt;
		else continue;
		i++;

	 } while (true);
	cout << "Srednia punktow w grupie = " << (float)sumaP / n << endl;
*/
//____________________________________________________________
	cout << "ZADANIE 5\n";
	for (int j = 1; j <= 100; j++)	cout << j << " ";
	cout << "\n\n";
	for (int j = 100; j >= 0; j--)	cout << j << " ";
	cout << "\n\n";
	for (int j = 7; j <= 77; j+=7)	cout << j << " ";
	cout << "\n\n";
	for (int j = 20; j >= 0; j-=2)	cout << j << " ";
	cout << "\n\n";

}
