#include <iostream>
#include <time.h>
#include <math.h>

using namespace std;

int main()
{
    /**
        zad. 1
        Program wypisuje wszystkie liczby pierwsze z <1,200>
    **/
    cout << "Zad_1" << endl;
    for(int i = 1; i <= 200; i++)
    {
        if(i < 2)
            continue;

        bool czy_pierwsza = true;
        for(int j = 2; j <= sqrt(i); j++)
        {
            if(i % j == 0)
                czy_pierwsza = false;
        }
        if(czy_pierwsza)
            cout << i << ", ";
    }
    cout << endl;


    /**
        zad. 2
        Program losuje liczbe z przedzialu <0,100>
        Nalezy odgadnac jaka liczbe wylosowal
        podpowiedzi: za duza lub za mala
        liczy ile razy zgadywales

        kolejne kroki:
        losowanie
        pytanie: jaka to liczba
		sprawdzenie czy wylosowana==podanej
		NIE - podpowiedz i powrot do pytanie
		TAK - koniec
        wypisanie wyniku

    **/
    cout << endl;
    cout << "Zad_2" << endl;

    srand(time(NULL));

    int los = rand() % 101;
    int liczba;
    int proba = 0;

    while(liczba != los)
    {
        cout << "podaj liczbe z zakresu <0, 100>" << endl;
        cout << "--> ";
        cin >> liczba;
        cout << endl;
        proba++;

        if(liczba == los)
        {
            cout << "Tak" << endl;
            cout << "Proby: " << proba << endl;
        }

        else if(liczba < los)
            cout << "Nie, za malo :(" << endl;

        else
            cout << "Nie, za duzo :(" << endl;
    }

    /**
        zad. 3
        Program losuje dwie liczby calkowite z <0,10>
        Pyta o iloczyn tych liczb.
        Koniec gdy zostanie podany prawidlowy wynik,
        lub liczba wykonanych prob > 3.
        (mamy 3 szanse na podanie prawidlowego wyniku!)
    **/

    cout << endl;
    cout << "Zad_3" << endl;

    int los_1 = rand() % 11;
    int los_2 = rand() % 11;


    int iloczyn = los_1 * los_2;
    int answer;
    int life = 3;

    while(life > 0)
    {
        cout << "Podaj iloczyn liczb wylosowanych z zakresu <0, 10>" << endl;
        cout << "zycia: " << life << endl;
        cout << "--> ";
        cin >> answer;
        cout << endl;

        if(answer == iloczyn)
            {
                cout << "Tak :)" << endl;
                break;
            }
        else
        {
            cout << "Nie :(" << endl;
            cout << endl;
            life--;
        }
        if(life == 0)
            cout << "Poprawna odpowiedz to: " << iloczyn << endl;
    }



    return 0;
}
