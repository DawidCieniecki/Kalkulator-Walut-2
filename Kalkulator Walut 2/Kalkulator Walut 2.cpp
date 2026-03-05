#include <iostream>

using namespace std;



int main()
{
    float kwota_poczatkowa;

        float kwota_koncowa;
        string waluta;
        cout << "Podaj ile pieniedzy chcesz wymienic" << endl;
        cin >> kwota_poczatkowa;
        cout << "Podaj walute" << endl;
        cin >> waluta;
        if (waluta == "euro")
        {
            kwota_koncowa = kwota_poczatkowa / 4.2;

        }
        else if (waluta == "dolar")
        {
            kwota_koncowa = kwota_poczatkowa / 3.6;
        }

        else if (waluta == "frank")
        {
            kwota_koncowa = kwota_poczatkowa / 4.6;
        }

        cout << "Kwota koncowa to: " << kwota_koncowa << endl;

}

