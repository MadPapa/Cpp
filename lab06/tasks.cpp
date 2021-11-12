#include <iostream>
#include <time.h>

using namespace std;

void print_tab(int tab[], int rozmiar)
{
    for(int i = 0; i < rozmiar; i++)
        cout << tab[i] << ", ";

    cout << endl;
}

int main()
{
    srand(time(NULL));

    cout << "Zad_1" << endl;

    int liczba;
    while(true)
    {
        cout << "Podaj liczbe z zakresu <-20, 20>" << endl;
        cout << "--> ";
        cin >> liczba;
        cout << endl;

        if(liczba > -21 && liczba < 21)
            break;
    }


    cout << "Zad_2" << endl;

    int liczba_1, liczba_2;
    while(true)
    {
        cout << "Podaj po spacji dwie liczby ktorych roznica wyniesie 0" << endl;
        cout << "--> ";
        cin >> liczba_1 >> liczba_2;
        cout << endl;

        if(liczba_1 - liczba_2 == 100)
            break;
    }


    cout << "Zad_3" << endl;

    cout << "Podaj liczbe dodatnia calkowita: " << endl;
    cout << "--> ";

    int liczba3;
    cin >> liczba3;

    cout << "Dzielniki liczby: ";
    for(int i = 1; i <= liczba3; i++)
    {
        if(liczba3 % i == 0)
            cout << i << ", ";
    }
    cout << endl;

    cout << endl;
    cout << "Zad_4" << endl;

    int tab[15];
    int ile = 0;

    for(int i = 0; i < 15; i++)
    {
        tab[i] = rand() % 21;
        if(tab[i] % 2 == 0 && tab[i] > 10)
            ile++;
    }
    print_tab(tab, 15);

    cout << "wiekszych od 10 i parzystych: " << ile << endl;
    cout << endl;

    cout << "Zad_5" << endl;

    int tab2[10];
    cout << "losy: ";
    for(int i = 0; i < 10; i++)
    {
        int los = rand() % 61 - 30;
        tab[i] = los;
        cout << los << ", ";
    }
    cout << "\nPodaj liczbe calkowita: " << endl;
    cout << "--> ";

    int liczba5;
    cin >> liczba5;

    for(int i = 0; i < 10; i++)
        tab[i] += liczba5;

    for(int i = 0; i < 10; i++)
        cout << tab[i] << ", ";

    cout << endl;


    cout << "\nZad_6" << endl;

    int tab6[10];
    int los;

    cout << "losy: ";
    for(int i = 0; i < 10; i++)
    {
        los = rand() % 31;
        tab6[i] = los;
        cout << los << ", ";
    }

    cout << endl;
    for(int i = 0; i < 10; i++)
    {
        if(tab6[i] >= 15)
            tab6[i] = 1;

        else if(tab6[i] < 15)
            tab6[i] = 0;
    }

    cout << "Po zmianie: " << endl;

    for(int i = 0; i < 10; i++)
        cout << tab6[i] << ", ";

    cout << endl;


    cout << "\nZad_7" << endl;

    int liczba1 = rand() % 21;
    int liczba2 = rand() % 21;

    int suma = 0;
    if(liczba1 > liczba2 || liczba1 <= liczba2)
    {
        for(int i = liczba1; i <= liczba2; i++)
            suma += i;
    }
    cout << "zakres: <" << liczba1 << ", " << liczba2 << ">" << endl;
    cout << "suma = " << suma << endl;


    cout << "\nZad_8" << endl;

    cout << "n^2-1<100" <<endl;

    int n = 100;
    while(true)
    {
        if((n * n - 1) < 100)
            break;
        n--;
    }
    cout << "answer = " << n << endl;

    cout << "\nZad_9" << endl;

    ///9.1

    int tab_1[10];
    int tab_2[10];

    for(int i = 0; i < 10; i++)
    {
        tab_1[i] = rand() % 11;
        tab_2[i] = rand() % 11;
    }

    print_tab(tab_1, 10);
    print_tab(tab_2, 10);

    for(int i = 0; i < 10; i++)
    {
        bool wystapila = false;
        int tmp = tab_1[i];
        for(int j = 0; j < 10; j++)
        {
            if(tab_2[j] == tmp)
                wystapila = true;
        }
        if(!wystapila)
            cout << tab_1[i] << ", ";
    }
    cout << endl;
    ///9.2
    int czy_zawiera = 0;
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            if(tab_1[j] == tab_2[i])
                {
                    czy_zawiera++;
                    break;
                }
        }
    }
    if(czy_zawiera == 10)
        cout << "Tab1 zawiera wszystkie elementy tab2" << endl;
    else
        cout << "Tab1 nie zawiera wszystkich elementow tab2" << endl;

    cout << "\nZad_10" << endl;

    int tab_10[10];
    for(int i = 0; i < 10; i++)
        tab_10[i] = i;


    print_tab(tab_10, 10);

    ///10.a
    bool czy_rosnacy = false;
    for(int i = 0; i < 10; i++)
    {

        if(tab_10[i] <= tab_10[i+1])
            czy_rosnacy = true;

        else
            break;
    }

    if(czy_rosnacy)
        cout << "ciag jest rosnacy" << endl;
    else
        cout << "ciag nie jest rosnacy" << endl;


    ///10.b
    int parz = 0;
    int nie_parz = 0;

    for(int i = 0; i < 10; i++)
    {
        if(tab_10[i] % 2 == 0)
            parz++;
        else
            nie_parz++;
    }
    cout << "Parzyste: " << parz << endl;
    cout << "Nieparzyste: " << nie_parz << endl;


    return 0;
}
