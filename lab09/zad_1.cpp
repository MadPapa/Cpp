// Funkcja int ile(int tab[],int rozmiar)
// Zwraca  liczbe elementow tablicy, ktore w tablicy wystepuja tylko raz.
// Elementy tablicy: 7,5,10,5,5,7,12,1,5,1
// powtorzone: 10,12
// wynik: 2

#include <iostream>

using namespace std;

int ile(int tab[], int rozmiar)
{
    int ile = 0;
    for(int i = 0; i < rozmiar; i++)
    {
        int pow = 0;
        for(int j = 0; j < rozmiar; j++)
        {
            if(tab[i] == tab[j])
                pow++;
        }
        if(pow == 1)
                ile++;
    }

    return ile;
}

int main()
{
    const int rozmiar=10;
    int tab1[rozmiar]={7, 5, 10, 5, 5, 7, 12, 1, 5, 1};
    int tab2[rozmiar]={4, 4, 4, 4, 5, 5, 5, 8, 9, 10};
    cout<<"wynik: "<<ile(tab1,rozmiar)<<endl;

    return 0;
}

