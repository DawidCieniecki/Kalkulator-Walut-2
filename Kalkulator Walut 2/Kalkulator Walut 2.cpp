#include <iostream>
#include <map>

using namespace std;



int main()
{
	map<string, float> ceny;
	ceny["euro"] = 4.2;
	ceny["dolar"] = 3.6;
	ceny["frank"] = 4.6;
	ceny["funt"] = 4.9;
	float kwota_poczatkowa;

	float kwota_koncowa;
	string waluta;
	cout << "Podaj ile pieniedzy chcesz wymienic" << endl;
	cin >> kwota_poczatkowa;
	cout << "Podaj walute" << endl;
	cin >> waluta;
	kwota_koncowa = kwota_poczatkowa / ceny[waluta];

	cout << "Kwota koncowa to: " << kwota_koncowa << endl;


}

