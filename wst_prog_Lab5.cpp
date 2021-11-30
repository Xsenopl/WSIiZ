#include <iostream>
using namespace std;

int main()
{
//TEORIA
/*	
	int tab[5]; // null '\0' automatycznie
	char tab0[] = "witaj";						 //null '\0' automatycznie		tab jest maxymalnie wielka
	char tab1[] = { 'w','i','t','a','j','\0' }; //null '\0' - potrzebny			tab ma 6 elem
	char tab2[5] = { 'w','i','t','a','j' };		 //null '\0' automatycznie		tab ma 6 elem
//_______________________________________________________________________
	char znaki[100]; cout << "Daj imie i nazwisko: ";
	cin.getline(znaki, 100).get();					 //
	cout << "Imie i nazwisko: " << znaki << endl;

	cout << "Ponownie daj imie i nazwisko: ";
	cin.get(znaki, 100);
	cout << znaki;

	//strcpy_s(a,b) -- kopiuje z tab a do b
	//strcat_s(a,b)
	//strcmp(a,b)  -- zwraca 0 jeśli łańcuchy są indentyczne; 1 jeśli różne
	//strlen(a) -- zwr ilość elem tablicy (jak jest "Jan" to 3)
	//size
	//sizeof(a) / sizeof(a[0])
//	string imie;
//	imie.append
//	imie.push_back;
*/
//____________________________________________
	char zdanie1[] = { "lot" };			//jest tablicą o maksymalnej długości; zdefiniowana w sposób (?)ciągły
	char zdanie2[] = { 'l','o','t' };	//jest tablicą o długości 4; zdefiniowana w sposób (?)nieciągły
	int liczby[100];
	char znaki[100];
	//cin>>liczby; // -- żle, trzeba podać numer komórki
	//cin>>znaki; // --dobrze, ale nie pokaże tego co zapisze po spacji (mimo że zapisze)
//__ZAD3_______________________________________
	char  tab[] = "wiosna";
	cout << tab << " " << strlen(tab) << endl;
	
//__ZAD4_______________________________________
	char s1[100], s2[100];
	cin.getline(s1, 100);
	cin.getline(s2, 100);
	cout << s1 << "\t" << strlen(s1) << endl;
	cout << s2 << "\t" << strlen(s2) << endl;

	strcpy_s(s1, s2);		//s2 do s1 --- zamienia treść s1 na treść s2
	cout << s1 << "\t" << strlen(s1) << endl;
	cout << s2 << "\t" << strlen(s2) << endl;
	
	strcat_s(s1, s2);	//s1 potem s2
	cout << s1 << "\t" << strlen(s1) << endl<<endl;

//__ZAD5_________________________________________
	char adres[30], nr[8], staz1[4]; int ocena;
	cout << "Podaj nazwę ulicy na której mieszkasz: ", cin.getline(adres,30);
	cout << "Podaj nr domu: ", cin.getline(nr,8);
	cout << "Na ile oceniasz swoje umiejętności programowania w skali [2 - 5]: "; cin >> ocena;
	cout << "Twoj staz programistyczny: "; cin.getline(staz1, 4);		// z niewiadomego mi powodu, program nie pozwala mi wpisać wartości do staz, kiedy te instrukcje są w tej linii
				
	cout << "Twoj staz programistyczny: "; cin.getline(staz1, 4);		// z jakiegoś powodu pozwala około 1 raz na 2 kompilowania programu, nawet jeśli nic nie zmieniałem treściwego

	strcat_s(adres, nr);
	cout << "Adres: " <<  adres << endl;
	if (ocena < 2)		cout << "Ocena: 2" << endl;
	else if (ocena > 6) cout << "Ocena: 5" << endl;
	else				cout << "Ocena: " << ocena - 1 << endl;

	cout << "Staz: "<< staz1 <<" dni" << endl << endl;

//__ZAD5_________________________________________
	char tekst[100]; 
	int a=0,c=0;
	cout << "Wpisz tekst: ", cin.getline(tekst, 100);

//	char tekst[] = { "ameryka"};


//	int ttt[] = { 1,2,3,1,5,6,7,11 };
	for (char b : tekst) {
		if (b == 'a' || b=='o' || b == 'e' || b == 'i' || b == 'u' || b == 'y') { a++; }
		else if(b == 'q' || b=='w' || b == 'r' || b == 't' || b == 'p' || b == 's' || b == 'd' || b == 'f' || b == 'g' || b == 'h' || b == 'j' || b == 'k' || b == 'l' || b == 'z' || b == 'x' || b == 'c' || b == 'v' || b == 'b' || b == 'n' || b == 'm')
		{
			c++;
		}
	}
	cout <<"Samoglosek \t"<< a <<endl;
	cout <<"Spolglosek \t"<< c;
}
