#include <iostream>
#include <string.h>
#include <time.h>

using namespace std;

int czyOk1(char haslo[])
{
    int ok = 0;
    int dlugosc = strlen(haslo);
    if(dlugosc == 8)
        ok = 1;
    else
        return 0;

    for(int i = 0; i < dlugosc; i++)
    {
        if(haslo[i] >= '0' && haslo[i] <= '9')
            if(haslo[i] != haslo[i + 1])
                ok = 1;
            else
                return 0;
        else
            return 0;
    }


    return ok;
}

int czyOk2(char haslo[])
{
    int ok = 0;
    int dlugosc = strlen(haslo);

    if(dlugosc >= 8 && dlugosc <= 10)
        ok = 1;
    else
        return 0;

    if((haslo[0] >= 'A' && haslo[0] <= 'Z') && (haslo[dlugosc - 1] >= 'A' && haslo[dlugosc - 1] <= 'Z'))
        for(int i = 1; i < dlugosc - 1; i++)
            if(haslo[i] >= 'a' && haslo[i] <= 'z')
                ok = 1;
            else
                return 0;
    else
        return 0;

    return ok;
}

int dzielniki(int liczba)
{
    int ile = 0;
    for(int i = 1; i < liczba + 1; i++)
        if(liczba % i == 0)
            ile++;

    return ile;
}

void ostatnie(char napis[], int n)
{
    int new_len = strlen(napis) - n;
    char new_napis[new_len];

    int j = 0;

    for(int i = new_len; i < strlen(napis); i++)
    {
        new_napis[j] = napis[i];
        j++;
    }
    cout << new_napis;
}

void zamiana2(int tab[], int rozmiar)
{
    cout << "przed zamiana:" << endl;
    for(int i = 0; i < rozmiar; i++)
        cout << tab[i] << " ";
    cout << endl;

    for(int i = 0; i < rozmiar; i++)
    {
        if(tab[i] % 2 == 0)
            tab[i] = 0;
        if(tab[i] % 2 == 1)
            tab[i] = 1;
    }

    cout << "\npo zamianie:" << endl;
    for(int i = 0; i < rozmiar; i++)
        cout << tab[i] << " ";
    cout << endl;
}

int ileSpacji(char napis[])
{
    int ile = 0;
    int dlugosc = strlen(napis);

    for(int i = 0; i < dlugosc; i++)
        if(napis[i] == ' ')
            ile++;

    return ile;
}

int zamiana(char napis[])
{
    int ile = 0;
    int dlugosc = strlen(napis);

    for(int i = 0; i < dlugosc; i++)
        if(napis[i] == ' ')
        {
            napis[i] = '_';
            ile++;
        }

    return ile;
}

int suma(int tab[], int rozmiar, int liczba)
{
    int sum = 0;
    for(int i = 0; i < rozmiar; i++)
        if(tab[i] > liczba)
            sum += tab[i];

    return sum;
}

int sumaMaxMin(int tab[], int rozmiar)
{
    int min_value = tab[0];
    int max_value = tab[0];

    for(int i = 0; i < rozmiar; i++)
    {
        if(tab[i] > max_value)
            max_value = tab[i];
        if(tab[i] < min_value)
            min_value = tab[i];
    }

    return min_value + max_value;
}

int minParzysta(int tab[], int rozmiar)
{
    int min_value = 0;
    for(int i = 0; i < rozmiar; i++)
        if(tab[i] % 2 == 0)
        {
            min_value = tab[i];
            break;
        }
    for(int i = 0; i < rozmiar; i++)
        if(tab[i] % 2 == 0 && tab[i] < min_value)
            min_value = tab[i];

    return min_value;
}

int czyNrRej(char napis[])
{
    int ok = 0;
    if((napis[0] >= 'A' && napis[0] <= 'Z') && (napis[1] >= 'A' && napis[1] <= 'Z'))
        ok = 1;
    else
        return 0;
    for(int i = 3; i < 8; i++)
        if(napis[i] >= '0' && napis[i] <= '9')
            ok = 1;
        else
            return 0;

    return ok;
}

int f1(char napis[])
{
    int ile;
    int sum = 0;
    int dlugosc = strlen(napis);

    for(int i = 0; i < dlugosc; i++)
    {
        ile = 0;
        for(int j = 0; j < dlugosc; j++)
            if(napis[i] != napis[j])
                ile = 1;
            else
                ile = 0;

        sum += ile;
    }
    return sum;
}

void f2(char napis[])
{
    cout << "przed zmiana:" << endl;
    cout << napis << endl;

    for(int i = 0; i < strlen(napis); i++)
        if((napis[i] < 'A' || napis[i] > 'Z') && (napis[i] < 'a' || napis[i] > 'z'))
            napis[i] = '_';

    cout << "po zmianie:" << endl;
    cout << napis << endl;
}

void takieSame(int tab1[], int tab2[], int rozmiar)
{
    int licznik = 0;

    for(int i = 0; i < rozmiar; i++)
    {
        int powt = 1;
        for(int j = 0; j < rozmiar; j++)
            if(tab1[i] == tab2[j])
            {
                powt = 1;
                break;
            }
            else
                powt = 0;
        if(powt == 0)
            licznik++;
    }

    int new_tab[licznik];
    int idx = 0;
    for(int i = 0; i < rozmiar; i++)
    {
        int powt = 1;
        for(int j = 0; j < rozmiar; j++)
            if(tab1[i] == tab2[j])
            {
                powt = 1;
                break;
            }
            else
                powt = 0;
        if(powt == 0)
        {
            new_tab[idx] = tab1[i];
            idx++;
        }
    }
    cout << "\nw tab1 nie w tab2:" <<endl;
    for(int i = 0; i < licznik; i++)
        cout << new_tab[i] << " ";
    cout << endl;
}

int main()
{
    /*
    char haslo[20] = "01238771";
    cout << czyOk1(haslo);

    char haslo[20] = "AlamakotA";
    cout << czyOk2(haslo);

    cout << dzielniki(10);

    char napis[20] = "kowalski";
    ostatnie(napis, 3);

    int tab[7] = {3, 24, 7, 4, 9, 10, 8};
    zamiana2(tab, 7);

    char napis[] = "Ala ma 3 koty i 2 psy";
    cout << ileSpacji(napis);

    char napis[] = "Ala ma kota";
    cout << zamiana(napis);

    int tab[7] = {1, 2, 3, 4, 5, 6, 7};
    cout << suma(tab, 7, 4);

    int tab[7] = {3, 5, 8, 1, 9, 2, 7};
    cout << sumaMaxMin(tab, 7);

    int tab[7] = {3, 5, 8, 1, 9, 4, 7};
    cout << minParzysta(tab, 7);

    char napis[] = "LU 72347";
    cout << czyNrRej(napis);

    char napis[] = "Ala ma kota";
    cout << f1(napis);

    char napis[] = "alo98.wTY8%p";
    f2(napis);
    */
    srand(time(NULL));
    int tab1[5];
    for(int i = 0; i < 5; i++)
        tab1[i] = rand() % 11;

    int tab2[5];
    for(int i = 0; i < 5; i++)
        tab2[i] = rand() % 11;

    cout << "tab1:" << endl;
    for(int i = 0; i < 5; i++)
        cout << tab1[i] << " ";
    cout << endl;

    cout << "\ntab2:" << endl;
    for(int i = 0; i < 5; i++)
        cout << tab2[i] << " ";
    cout << endl;

    takieSame(tab1, tab2, 5);
    return 0;
}
