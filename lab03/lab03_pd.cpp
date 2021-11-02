#include <iostream>

using namespace std;

int main()
{
    /**
        zad. 1
        Program wczytuje 2 liczby ca�kowite i pyta o sum� tych liczb.
        Sprawdza, czy podano prawid�ow� sum�.
        Wy�wietla odpowiedni komunikat.
        Deklaracja zmiennych
        Wczytanie liczb na zmienne
        Pytanie o sum�
        Czy suma prawid�owa?
        Tak
        Komunikat �OK�
        Nie
        Komunikat �Zla suma�
    **/

    cout << "Zad.1" << endl;

    cout << "Podaj 2 liczby calkowite:" << endl;

    int liczba_1, liczba_2;

    cout << "liczba 1: ";
    cin >> liczba_1;

    cout << "liczba 2: ";
    cin >> liczba_2;

    int suma = liczba_1 + liczba_2;

    cout << liczba_1 << " + " << liczba_2 << " = " << suma << ", wynik sumy prawidlowy?" << endl;
    string answer;
    cout << "--> ";
    cin >> answer;

    if(answer == "Tak" || answer == "tak")
        cout << "OK" << endl;
    else if (answer == "Nie" || answer == "nie")
        cout << "Zla suma" << endl;
    else
        cout << "(poprawna odpowiedz to 'Tak' lub 'Nie')" << endl;


    /**
        zad.2
        Deklarujemy dwie zmienne typu int i przypisujemy im warto�ci.
        Program pyta jak� operacj� chcemy wykona� na tych liczbach.
        Do wyboru mamy: + - * /
        Wczytujemy operator.
        Program sprawdza jaki operator zosta� podany i wypisuje wynik operacji.
        W przypadku podania znaku innego ni� prawid�owy operator wy�wietlany jest komunikat �Nieprawid�owy operator�
    **/

    cout << endl;
    cout << "Zad.2" << endl;

    int var_1 = 10;
    int var_2 = 5;

    cout << "Jaka operacje wykonac:" << endl;
    cout << "( +, -, *, /)" << endl;

    char answer2;

    cout << "--> ";
    cin >> answer2;

    switch(answer2)
    {
        case '+':
            cout << var_1 << " + " << var_2 << " = " << var_1 + var_2;
            break;

        case '-':
            cout << var_1 << " - " << var_2 << " = " << var_1 - var_2;
            break;

        case '*':
            cout << var_1 << " * " << var_2 << " = " << var_1 * var_2;
            break;

        case '/':
            cout << var_1 << " / " << var_2 << " = " << var_1 / var_2;
            break;
    }

    return 0;
}
