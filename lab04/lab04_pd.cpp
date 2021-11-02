#include <iostream>

using namespace std;

int main()
{
    /**
        Zadanie 1
        =========
        Program prosi o podanie liczby >0 tak d³ugo a¿ bêdzie podana prawid³owa liczba.
    **/

    cout << "Zad.1" << endl;

    int liczba;

    while(true)
    {

        cout << "Podaj liczbe: ";
        cin >> liczba;
        cout << endl;
        if(liczba > 0)
            break;
    }

    /**
        Zadanie 2
        =========
        Program prosi o podanie liczby z przedzia³u <10,20> tak d³ugo a¿ bêdzie podana prawid³owa liczba.
    **/

    cout << endl;

    cout << "Zad.2" << endl;

    int liczba_2;

    while(true)
    {
        cout << "Podaj liczbe z przedzialu <10, 20>" << endl;
        cout << "--> ";
        cin >> liczba_2;
        cout << endl;
        if(liczba_2 >= 10 && liczba_2 <= 20)
            break;
    }

    /**
        Zadanie 3
        ==========
        Program wczytuje liczbê ca³kowit¹ i liczy z ilu cyfr sk³ada siê liczba.
        Np.: liczba 341806 wynik: 6 (sk³ada siê z 6 cyfr)
    **/

    cout << endl;

    cout << "Zad.3" << endl;

    cout << "Podaj liczbe calkowita: ";
    int liczba_3, ile_cyfr = 0;
    cin >> liczba_3;
    int tmp = liczba_3;

    while(tmp > 0)
    {
        tmp /= 10;
        ile_cyfr++;
    }

    cout << "\nLiczba " << liczba_3 << " wynik: " << ile_cyfr << " (sklada sie z " << ile_cyfr << " cyfr)" << endl;


    return 0;
}
