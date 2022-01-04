**Zad.1**

Funkcja int **czyOk1(char haslo[])** sprawdza, czy hasło podane jako argument, jest prawidłowe.

Zwraca w wyniku:  1 – tak prawidłowe, 0 – nie 

PRAWIDŁOWE HASŁO SPEŁNIA REGUŁY:

liczba znaków 8

prawidłowe hasło składa się wyłącznie z cyfr.

W haśle nie mogą wystąpić obok siebie takie same znaki.

„01238771” źle bo 77

**Zad.2**

Funkcja int **czyOk2(char haslo[])** sprawdza, czy hasło jest prawidłowe.

Zwraca w wyniku:  1 – tak prawidłowe, 0 – nie 

PRAWIDŁOWE HASŁO SPEŁNIA REGUŁY:

znaków <8,10>

pierwszy i ostatni znak musi być wielką literą.

pozostałe znaki to małe litery.

**Zad. 3**

Funkcja  **int dzielniki(int liczba)**.

Zwraca w wyniku liczbę dzielników podanej liczby.

Np.: dzielniki(10) wynik 4

1 2 5 10

**Zad. 4**

Funkcja **void ostatnie(char napis[],int n)**

z napisu zostawia n ostatnich znaków.

np: ostatnie("kowalski",3)  po wykonaniu funkcji zostaje "ski"

**Uwaga! napis ulega zmianie!**


**Zad. 5**

Funkcja  **void zamiana2(int tab[],int rozmiar)** zamienia elementy w tablicy wg zasady:

Parzyste na 0

Nieparzyste na 1

Przed zamiana:  3 24 7 4 9 10 8

Po zamianie:    1  0 1 0 1  0 0


**Zad. 6**

funkcja **int ileSpacji(char napis[])**

zwraca w wyniku liczbę spacji w napisie.  

Np.: ileSpacji(”Ala ma 3 koty i 2 psy”), wynik 5

**Zad. 7**

funkcja **int** **zamiana(char napis[])**

zamienia w napisie spacje na znak '\_'. Zwraca w wyniku liczbę wykonanych zamian.

Zamiana(”Ala ma kota”) wynik 2

Zmieniony napis: ”Ala\_ma\_kota”

**Zad. 8**

funkcja **int suma(int tab[], int rozmiar, int liczba)** 

funkcja zwraca sumę elementów tablicy większych od liczby przekazanej jako argument.

**Zad. 9**

funkcja i**nt sumaMaxMin(int tab[],int rozmiar)**

zwraca sumę wartości minimalnej i maksymalnej w tablicy

tablica: {3, 5, 8, 1, 9, 2, 7 } wynik 1+9=10

**Zad. 10**

funkcja  **int minParzysta(int  tablica[],int rozmiar)**

zwraca w wyniku najmniejsza parzystą wartość z tablicy

tablica: {3, 5, 8, 1, 9, 4, 7 } wynik 4

**Zad. 11**

Funkcja int czyNrRej(char napis[]) sprawdza, czy napis przekazany do funkcji ma format numeru rejestracyjnego. Poprawny nr rejestracyjny to „LL CCCCC” gdzie C – dowolna cyfra, L dowolna wielka litera.

**zad. 12**

Funkcja: **int f1(char napis[])** zwraca w wyniku z ilu różnych znaków składa się napis.

Np.: f1(„Ala ma kota”) wynik 8   (Ala mkot)

**Zad.13**

Funkcja:  **void f1(char napis[])** zamienia wszystkie znaki, które nie są literami na znak ‘\_’. 

Np.: przed zamianą 	 „alo98.wTY8%p”  

po zamianie:          „alo\_\_\_wTY\_\_p”  


**Zad. 14**

Funkcja void takieSame(int tab1[],int tab2[], int rozmiar)

Wypisuje liczby, które wystąpiły w tab1 a nie ma ich w tab2 

(bez powtórzeń)

Tablice są tego samego rozmiaru.

Tablice są wypełnione liczbami z przedziału <0,10>.











