#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    /**
        zad. 1
        Program wypisuje wszystkie liczby pierwsze z <1,200>

    **/
    cout << "Zad_1" << endl;
    cout <<"Still in progress :)" << endl;


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
    }



    return 0;
}
