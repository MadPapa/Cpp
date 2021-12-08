#include <iostream>
#include <time.h>

using namespace std;

int czyPodzielna(int, int);
int ileCyfr(char []);

int main()
{
    char napis[25];
    cin.getline(napis, 25);
    cout << "ile cyfr w napisie = " << ileCyfr(napis) << endl;

    
    /**
    ///zad_1
    char napis[20];
    char new_napis[20];

    cin.getline(napis, 20);

    int i = 0;
    while(napis[i] != '\0')
        i++;

    for(int j = 0; j < i; j++)
    {
        if(napis[j] >= '0' && napis[j] <= '9')
            j++;
        else
            new_napis[j] = napis[j];
    }

    cout << napis << endl;
    cout << new_napis << endl;
    **/

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