#include <iostream>
#include <time.h>

using namespace std;

int pole(int, int);
int maks(int, int);
void szlaczek(int, char);
void losuj(int [], int, int);
void wypisz(int [], int);
int suma(int [], int);
int czyRosnacy(int [], int);



int main()
{

    int bok1 = 5;
    int bok2 = 5;
    cout << "pole = " << pole(bok1, bok2) << endl;

    int liczba1 = 20;
    int liczba2 = 22;
    cout << "maks = " << maks(liczba1, liczba2) << endl;

    int ile = 10;
    char znak = '.';
    szlaczek(ile, znak);

    int rozmiar = 10;
    int koniec = 99;
    int tab[rozmiar];
    losuj(tab, rozmiar, koniec);

    wypisz(tab, rozmiar);

    cout << "suma w tablicy = " << suma(tab, rozmiar) << endl;

    cout << "czy rosnacy = " << czyRosnacy(tab, rozmiar) << endl;

    int liczba_1 = 2;
    int liczba_2 = 4;

    cout << "czyPodzielna = " << czyPodzielna(liczba_1, liczba_2) << endl;


    return 0;
}

int pole(int bok1, int bok2)
{
    return bok1 * bok2;
}

int maks(int liczba1, int liczba2)
{
    if(liczba1 > liczba2)
        return liczba1;
    else
        return liczba2;
}

void szlaczek(int ile, char znak)
{
    for(int i = 0; i < ile; i++)
        cout << znak;
    cout << endl;
}

void losuj(int tab[], int rozmiar, int koniec)
{
    srand(time(NULL));
    for(int i = 0; i < rozmiar; i++)
       tab[i] = rand() % koniec;
}

void wypisz(int tab[], int rozmiar)
{
    for(int i = 0; i < rozmiar; i++)
        cout << tab[i] << ", ";
    cout << endl;
}

int suma(int tab[], int rozmiar)
{
    int suma = 0;
    for(int i = 0; i < rozmiar; i++)
        suma += tab[i];
    return suma;
}

int czyRosnacy(int tab[], int rozmiar)
{
    int wynik = 0;
    for(int i = 0; i < rozmiar - 1; i++)
    {
        if(tab[i] < tab[i+1])
            wynik = 1;
        else
        {
            wynik = 0;
            break;
        }
    }
    return wynik;
}

