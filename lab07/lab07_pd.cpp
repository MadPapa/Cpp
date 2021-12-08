#include <iostream>

using namespace std;

int main()
{
    ///zad_1
    cout << "zad_1" << endl;

    char napis[20];
    cin.getline(napis, 20);

    int len = 0;
    while(napis[len] != '\0')
        len++;

    for (int i = 0; i < len; i++){

        if (napis[i] == ' ')
            napis[i] = '_';
    }
    cout << napis << endl;


    cout << endl;

    ///zad_2
    cout << "zad_2" << endl;

    string haslo;
    int ileM = 0, ileD = 0, ileC = 0;

    getline(cin, haslo);

    int dlugosc = haslo.length();

    if(dlugosc < 6 || dlugosc > 8){

        cout << "haslo nie ok" << endl;
        return 0;
    }
    for(int i = 0; i < dlugosc; i++){

        if(haslo[i] >= 'a' && haslo[i] <= 'z')
            ileM++;

        if(haslo[i] >= 'A' && haslo[i] <= 'Z')
            ileD++;

        if(haslo[i] >= '0' && haslo[i] <= '9')
            ileC++;
    }
    if(ileM >= 1 && ileD >= 1 && ileC >= 1)
        cout << "haslo ok" << endl;
    else
        cout << "zla ilosc odpowiednich znakow w hasle" << endl;

    return 0;
}
