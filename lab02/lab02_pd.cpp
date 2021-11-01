#include <iostream>

using namespace std;

int main()
{
    ///zad_1
/*
    Program prosi o podanie liczby calkowitej.
    Sprawdza, czy podana liczba jest liczba parzysta.
    Wypisuje odpowiedni komunikat.
    Uwaga! uzyj operatora  % modulo (reszta z dzielenia)
    33%2    reszta 1
    12%2	   reszta 0
*/

    int n;
    cout << "Podaj liczbe calkowita: ";
    cin >> n;

    if(n % 2 == 0) cout << "Parzysta" << endl;
    else cout << "Nieparzysta" << endl;
    cout << endl;


    ///zad_2
/*
    Wprowadz kwote zarobionych pieniedzy i policz jaki podatek nalezy zaplaciæ od tej kwoty.
    Zalozenie:
    Do kwoty 60000.00 zl. placimy podatek 17%
    Powyzej kwoty 60000 podatek wynosi 30%

*/

    double saldo;
    cout << "Podaj kwote zarobionych pieniedzy: ";
    cin >> saldo;

    if(saldo < 0) cout << "Saldo ujemne?" << endl;
    else if(saldo <= 60000) cout << "Podatek do zaplacenia = " << saldo * 0.17 << endl;
    else cout << "Podatek do zaplacenia = " << saldo * 0.3 << endl;
    cout << endl;

    ///zad_3
/*
    Deklarujemy dwie zmienne typu int i przypisujemy im wartosci.
    Program pyta jaka operacje chcemy wykonac na tych liczbach.
    Do wyboru mamy: + - * /
    Wczytujemy operator.
    Program sprawdza jaki operator zostal podany i wypisuje wynik operacji.
    W przypadku podania znaku innego niz prawidlowy operator wyswietlany jest komunikat „Nieprawidlowy operator”

*/

    int number_1, number_2;
    cout << "Podaj 2 liczby calkowite:" << endl;
    cout << "Liczba 1: "; cin >> number_1;
    cout << "Liczba 2: "; cin >> number_2;

    cout << "Wybierz znak dzialania:" << endl;
    cout << "+ - * /" << endl;
    char key;
    cin >> key;

    switch(key)
    {
        case '+':
            cout << "wynik = " << number_1 + number_2;
            break;

        case '-':
            cout << "wynik = " << number_1 - number_2;
            break;

        case '*':
            cout << "wynik = " << number_1 * number_2;
            break;

        case '/':
            cout << "wynik = " << number_1 / number_2;
            break;

        default:
            cout << "Nieprawidlowy operator" << endl;
    }
    cout << endl;
    return 0;
}
