#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    double sumaLiczb = 0.0;
    vector<double> Zestawliczb;
    cout << "podaj liczbe elementow zbioru: ";
    cin >> n;
    cout << "podaj elementy zbioru: ";
    for (int i = 0; i < n; ++i)
    {
        double liczba;
        cin >> liczba;
        Zestawliczb.push_back(liczba);
        sumaLiczb += liczba;
    }
    double srednia = sumaLiczb / n;
    cout << "Srednia arytmetyczna wynosi: " << srednia << endl;

    return 0;
}
