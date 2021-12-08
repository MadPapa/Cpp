#include <iostream>
#include <time.h>

using namespace std;

int czyPodzielna(int, int);
int ileCyfr(char []);

int main()
{

    ///zad_1
    char napis[20];
    char new_napis[20];

    cout << "Podaj napis z liczbami:" << endl;
    cin.getline(napis, 20);

    int dlugosc = 0;
    while(napis[dlugosc] != '\0')
        dlugosc++;

    for(int i = 0; i < dlugosc; i++)
    {
        if(napis[i] >= '0' && napis[i] <= '9')
            new_napis[i] = ' ';
        else
            new_napis[i] = napis[i];
    }

    cout << new_napis << endl;


    ///zad_2
    cout << endl;
    char napis_2[25];
    cout << "Podaj napis z liczbami:" << endl;;
    cin.getline(napis_2, 25);
    cout << "ile cyfr w napisie = " << ileCyfr(napis_2) << endl;

    return 0;
}
int czyPodzielna(int liczba1, int liczba2)
{
    if(liczba2 % liczba1 == 0)
        return 1;
    else
        return 0;
}

int ileCyfr(char napis[])
{
    int i = 0;
    int ile = 0;
    while(napis[i] != '\0')
        i++;
    for(int j = 0; j < i; j++)
    {
        if(napis[j] >= '0' && napis[j] <= '9')
            ile++;
    }
    return ile;
}
