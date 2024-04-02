#include <iostream>

using namespace std;

double sredniaWazona(int *wartosci, int *wagi, int iloscElementow)
{
    double sumaWazona = 0;
    double sumaWag = 0;

    for (int i = 0; i < iloscElementow; ++i)
    {
        sumaWazona += wartosci[i] * wagi[i];
        sumaWag += wagi[i];
    }
    if (sumaWag != 0)
    {
        return sumaWazona / sumaWag;
    }
    else
    {
        cout << "Problem, suma wag jest rowna zero." << endl;
        return 0;
    }
}

int main()
{
    int iloscElementow;
    cout << "podaj ilosc elementow: ";
    cin >> iloscElementow;
    int *wartosci = new int[iloscElementow];
    int *wagi = new int[iloscElementow];
    cout << "Wprowadz swoje wartosci i wagi:" << endl;
    for (int i = 0; i < iloscElementow; ++i)
    {
        cout << "wartosc " << i + 1 << ": ";
        cin >> wartosci[i];
        cout << "waga " << i + 1 << ": ";
        cin >> wagi[i];
    }

    double srednia = sredniaWazona(wartosci, wagi, iloscElementow);
    cout << "srednia wazona wynosi: " << srednia << endl;
    delete[] wartosci;
    delete[] wagi;

    return 0;
}
