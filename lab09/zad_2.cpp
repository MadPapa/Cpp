#include <iostream>
#include <string.h>

using namespace std;

// Funkcja: int czyHaslo(char  napis[]) sprawdza, czy napis przekazany jako argument  jest poprawnym haslem.
// a)Prawidlowa liczba znakow w hasle:   8  (2 punkty)
//
// b)Pierwszym znakiem w hasle nie moze byc litera (2 punkty)
//
// c)Haslo sklada sie wylacznie z liter i cyfr
// Musza byc minimum dwie cyfry i minimum dwie litery
// (3 punkty)
//
// d)W hasle nie moze byc wiecej liter niz cyfr (3 punkty)
//
// Wynik funkcji: 1 haslo prawidlowe – 0 nie jest prawidlowe

int czyHaslo(char napis[])
{
    int l_lit = 0;
    int l_cyf = 0;

    int len = strlen(napis);

    if(len != 8)
        return 0;

    if(isalpha(napis[0]))
        return 0;

    for(int i = 0; i < len; i++)
    {
        if(isalpha(napis[i]) || isdigit(napis[i]))
            if(isalpha(napis[i]))
                l_lit++;
            else
                l_cyf++;
        else
            return 0;
    }

    if(l_lit < 2 || l_cyf < 2)
        return 0;

    if(l_lit > l_cyf)
        return 0;

    return 1;
}

int main()
{
    cout << "Podaj haslo: ";
    char napis[20] = "7ab98F98";
    //cin.getline(napis, 20);

    cout << czyHaslo(napis);
    return 0;
}
