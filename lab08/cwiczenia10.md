**Ćwiczenia 10**

- **Napisy cd..**
- **Funkcje, deklaracja, definicja, wartość zwracana**
- **Przekazywanie argumentów do funkcji**


**Zadanie 1**

**========**

Wczytuje napis, usuwa z napisu wszystkie cyfry. Uwaga napis ulega zmianie!!

Wypisz napis po usunięciu cyfr.


**funkcje**

**============**

typWyniku nazwaFunkcji([lista argumentów])

{

`	`instrukcja1;

`	`..

`	`[return wynik;]

}


**deklaracja funkcji** //umieszczamy przed main!!!!!

\==================

typWyniku nazwaFunkcji([typArg1,..] );

Deklaracja mówi kompilatorowi, jaki jest typ wartości zwracanej, ile i jakiego typu są argumenty.

Dzięki deklaracji kompilator prawidłowo obsłuży wartość zwracaną, sprawdzi czy przekazano odpowiednia liczbę parametrów,

sprawdzi typy parametrów

**Deklarację umieszczamy przed definicją funkcji main.**

**definicja funkcji**//umieszczamy po main

\======================

typWyniku nazwaFunkcji([typArg1 nazwaArg1,..])

{

`	`instrukcja1;

`	`..

`	`[return wynik;]

}

Definicja zawiera kod źródłowy funkcji.

**Umieszczamy go po kodzie źródłowym funkcji main.**

**wywołanie funkcji**

\=================

nazwaFunkcji([argument1,..])

**uwaga! liczba i typ argumentów w deklaracji,** 

**definicji i wywołaniu musi być taka sama.**

typWyniku **void** oznacza,że funkcja nie zwraca żadnej wartości.

Nie będzie wtedy instrukcji return i jest to wtedy procedura.


\==========================

Uwaga!!!!!

Jeżeli definicję funkcji umieścimy przed main to jest to funkcja

typu inline.

Kompilator widząc że funkcja jest inline w miejsce jej wywołania 

nie wstawia jak w normalnym przypadku wskaźnika do tej funkcji w pamięci, lecz wpisuje jej kod w miejsce jej wystąpienia.

\=========================


**ćwiczenie 1**

**===========**

Funkcja int pole(bok1,bok2) zwraca w wyniku pole prostokąta o podanych bokach.

#include <iostream>

int pole(int,int);//deklaracja funkcji

using namespace std;

int main()

{

`    `int liczba1,liczba2;

`    `cout<<"Podaj boki prostokata: ";

`    `cin>>liczba1>>liczba2;

`    `cout<<"Pole prostokata o bokach: "<<liczba1<<", "<<liczba2<<": "<<pole(liczba1,liczba2)<<endl;

`    `return 0;

}

int pole(int bok1,int bok2)//definicja funkcji

{

`    `return bok1\*bok2;

}

**Ćwiczenie 2**

**=============**

Funkcja int maks(int liczba1,int liczba2) zwraca wartość większego z argumentów.

**ćwiczenie 3**

**===========**

funkcja void szlaczek(int ile,char znak)

wyświetla znak powtórzony razy: ile

np.: szlaczek(10,'.') wyświetli:

..........



**Przekazywanie tablic do funkcji**

Przekazując tablicę jako argument, do funkcji przekazujemy adres pierwszego elementu tej tablicy i zwykle w kolejnym argumencie podajemy rozmiar tablicy.

Przekazując tablicę do funkcji podajemy jej nazwę.

Uwaga!! nazwa tablicy jest adresem pierwszego elementu tablicy


**Zadanie 5**

**=========**

Funkcja **void losuj(int tab[],int rozmiar,int koniec)** losuje do tablicy

rozmiarze ***rozmiar*** liczby z przedziału <0,koniec>

Funkcja **void wypisz(int tab[],int rozmiar)** 

wypisuje elementy tablicy.

Funkcja **int suma(int tab[],int rozmiar)** 

zwraca w wyniku sumę elementów tablicy

funkcja **int czyRosnacy(int tab[],int rozmiar)**

zwraca w wyniku 1,jeżeli elementy tablicy tworzą ciąg rosnący, 

zwraca 0 w przeciwnym wypadku.

#include <iostream>

#include <ctime>

using namespace std;

void losuj(int [],int ,int);

void wypisz(int [],int);

int suma(int [],int);

int main()

{

`    `int rozmiar=5;

`    `int tablica[rozmiar];

`    `losuj(tablica,rozmiar,10);

`    `wypisz(tablica,rozmiar);

`    `cout<<"suma elementow: "<<suma(tablica,rozmiar)<<endl;

`    `return 0;

}

void losuj(int tab[],int rozmiar,int koniec)

{

`    `srand(time(NULL));

`    `for (int i=0;i<rozmiar;++i)

`        `tab[i]=rand()%(koniec+1);

}

void wypisz(int tab[],int rozmiar)

{

`    `for (int i=0;i<rozmiar;++i)

`        `cout<<tab[i]<<" ";

`    `cout<<endl;

}

int suma(int tab[],int rozmiar)

{

`    `int wynik=0;

`    `for (int i=0;i<rozmiar;++i)

`        `wynik+=tab[i];

`    `return wynik;

}


