#include<cmath>
#include<iostream>
using namespace std;

float p_kola(int r) {
	return 3.14 * r;
}
int p_prostokata(int a, int b) {
	return a * b;
}
int p_trojkata(int a, int b) {
	return a * b / 2;
}
int p_szescianu(int a) {
	return a*a*6;
}
int v_szescianu(int a) {
	return a*a*a;
}
float p_walca(int a, int c) {
	return 3.14*a*a*2 + 3.14*a*2*c;
}
float v_walca(int a, int c) {
	return 3.14 * a*a * c;
}

bool LiczbaPierwsza(int liczba) {
	if (liczba < 2) return 0;
	else 
		for (int i = 2; i * 2 <= liczba; i++)
		{
			if (liczba % i == 0) 	return 0;		// 0 niepierwsza	1 - pierwsza
		}
	return 1;
}

void konwersja(int liczba) {
	if (liczba == 1) cout<<1;
	else if (liczba == 0) cout<< 0;
	else {
		konwersja(liczba/2);
		cout<< liczba%2;
	}
}

long dwusilnia(long n) {
	if (n == 0 || n==1)	return 1;
	else 				return n * dwusilnia(n - 2);

}






