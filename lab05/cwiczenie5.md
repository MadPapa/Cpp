**Ćwiczenia 5**

**===========**

**1.Losowanie, funkcje rand i srand.**

**2.Przykłady prostych programów.**

**Losowanie**

\===========

funkcje **srand** i **rand**


**int rand()**

Generuje całkowitą liczbę pseudolosową z przedziału: <0,RAND\_MAX>

RAND\_MAX	Maksymalna zwracana wartość przez funkcję.

Jednak aby uzyskać każdorazowo inne wylosowane wartości należy 

powiązać funkcję srand z czasem rzeczywistym, ustawionym obecnie w komputerze. 

Biblioteka „ctime” (w języku C "time.h") dostarczy nam między innymi funkcji  time, która zwraca aktualny czas na komputerze w postaci liczby.

wywołanie wygląda następująco: 

srand(time(NULL))


**void srand( unsigned int seed );**

Funkcja ustawia punkt startowy, który jest stosowany do generowania serii pseudo losowych liczb całkowitych.


**ćwiczenie 1**

\=========

Wylosuj 15 liczb całkowitych.

Ogranicz losowanie do liczb do przedziału <0,100>.

Sprawdź ile wynosi wartość stałej RAND\_MAX

int main()

{

`    `int i;

`    `cout<<RAND\_MAX<<endl;

`    `for (i=1;i<=15;++i)

`        `cout<<rand()%101<<"  ";

`    `return 0;

}

Otrzymujemy za każdym razem ciąg tych samych liczb.

Należy użyć funkcji srand(time(NULL)), która ustawia za każdym razem inny punkt startowy.


**

**ćwiczenie 2**

**===========**

Program losuje liczby z przedziału <0,100> tak długo aż wylosuje 

liczbę 5.

Wylosowanie liczby 5 kończy losowanie!

Wypisuje ile razy wykonał losowanie.

1.Deklaracja zmiennych

2.Losowanie

3.Czy wylosowano 5?

NIE

`	`Zwiększenie licznika losowań

`	`Powrót do punktu 2.

TAK

`	`Komunikat, wyświetlenie licznika losowań


int main()

{

`    `int los,i,ile=0;

`    `srand(time(NULL));

`    `do

`    `{

`       `los=rand()%11;

`       `ile+=1;

`       `cout<<los<<endl;

`    `}while(los!=5);

`    `cout<<"Losowano "<<ile<<" razy\n";

`    `return 0;

}

**

**ćwiczenie 3**

**===========**

Program losuje liczby z przedziału <0,10> tak długo aż 3 razy wylosuje liczbę 5.

(Po wylosowaniu trzeci raz liczby 5 kończy losowanie)

1.Deklaracja zmiennych

2.Losowanie

3.Czy wylosowano 5?

TAK

`		`Zwiększenie licznika wylosowanych piątek

4.Czy wylosowano już 3 piątki?

`	`NIE

`		`Powrót do punktu 2.

`	`TAK

`		`Komunikat	



int main()

{

`    `int los,i,ile=0,ile5=0;

`    `srand(time(NULL));

`    `do

`    `{

`       `los=rand()%11;

`       `ile+=1;

`       `cout<<los<<endl;

`       `if (los==5)

`       `{

`           `ile5+=1;

`           `cout<<"======\n";

`       `}

`    `}while(ile5!=3);

`    `cout<<"Losowano "<<ile<<" razy\n";

`    `return 0;

}


**ćwiczenie 4**

**===========**

Program losuje liczby <0,10> tak długo,

aż wylosuje obie skrajne wartości (0 i 10).

int main()

{

`    `cout<<RAND\_MAX<<endl;

`    `int los,i,jest10=0,jest0=0;

`    `srand(time(NULL));

`    `do

`    `{

`       `los=rand()%11;

`       `cout<<los<<endl;

`       `if (los==10)jest10=1;

`       `if (los==0)jest0=1;

`    `//}while(!(jest10 && jest0));

`    `}while(!jest10 || !jest0);

`    `return 0;

}

**Uwaga, jak C/C++ rozumie [prawdę i fałsz](https://pl.wikibooks.org/wiki/C/Operatory "C/Operatory"):** 

- liczba całkowita różna od zera oznacza **prawdę**
- liczba całkowita równa zero oznacza **fałsz**.

**Zadanie 5**

**========**

Program losuje liczby całkowite z <0,100> tak długo, a  wylosuje 10 liczb parzystych.


**Zadanie 6**

**========**

Program losuje liczby z przedziału <0,10> tak długo aż wylosuje

**trzy jednakowe liczby pod rząd**.

**Zadanie 7**

**========**

Program losuje liczbę całkowitą z <1,100>

Sprawdza, czy podana liczba jest liczbą pierwszą.

(liczba pierwsza ma dokładnie dwa dzielniki naturalne: jedynkę i siebie)

Aby **sprawdzić, czy liczba** naturalna jest **liczbą pierwszą**, należy dzielić ją kolejno przez wszystkie **liczby** większe od i mniejsze równe pierwiastka kwadratowego z tej **liczby**. Jeśli przy każdym dzieleniu reszta z dzielenia jest różna od zera, to **liczba** jest **liczbą pierwszą**.
