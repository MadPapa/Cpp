**Ćwiczenia 6**

**===========**

**1.Typ złożony, tablica**

**2.Definiowanie stałych, przedrostek const**

**3.Instrukcje break i continue**



**Typy złożone**

**tablice jednowymiarowe**

\=======================

Tablica to zbiór elementów należących do tego samego typu.

Deklaracja tablicy informuje kompilator o **liczbie** i **typie** elementów tablicy.

Elementy tablicy mogą należeć do takich samych typów jak zwykłe zmienne.


**deklaracja tablicy**

**=================**

`  `**typElementu nazwaTablicy[rozmiar];**

`  `przykłady deklaracji:

`  `int tabI[10];

`  `char znaki[20];



dostęp do elementów tablicy: **nazwaTablicy[indeks]**

np.: tabI[0], tabI[7]....

**indeks to liczba całkowita z przedziału:    0 - (rozmiar-1)**

int tabI[10];//tablica ma 10 elementów typu int

Uwaga!!!! indeksy tablicy zmieniają się od 0 - 9


**Elementy tablicy przechowywane są w obszarze ciągłym pamięci**

**Uwaga:**

**nazwa tablicy jest adresem pierwszego elementu tablicy!!!!**

nazwaTablicy==&nazwaTablicy[0]

int tab[]={1,4,2,6,9,10};

cout<<"adres: "<<tab<<endl;

cout<<&tab[0]<<endl;


**Inicjalizacja elementów tablicy**

int tab[10]={3,5,6,2,5,1,7,8,9,3};

int tab[]={3,5,6,2,5,1,7,8,9,3};

int tab[10]={0};//wszystkim elementom tablicy nadawana jest wartość 0





**zadanie 5**

**==========**

\1. Program losuje do tablicy 15 liczb całkowitych z <0,30>.

\2. Wypisuje wartości przechowywane w tablicy.

\3. Liczy sumę liczb w tablicy.

\4. Znajduje wartość maksymalną i minimalną w tablicy.

\5. Przesuwa elementy w tablicy wg zasady: 

1->0, 2->1, 3->2....pierwszy->ostatni

\6. Wypisuje elementy tablicy po przesunięciu

**Zadanie wykonać bez tablicy pomocniczej!!!**

**1 4 7 2 8 9**	tablica przed

Zabieram i zapamiętuję pierwszy element

`  `4 7 2 8 9

Przesuwam  <-

4   7 2 8 9

4 7   2 8 9

4 7 2   8 9

4 7 2 8   9

4 7 2 8 9  	

Ostatnie miejsce w tablicy jest puste, wstawiam tam zapamiętany pierwszy element

**4 7 2 8 9 1** 	tablica po

\7. Sprawdza, czy liczby w tablicy powtarzają się.


int main()

{

`    `int tab[15],i,suma=0,mini,maks,tmp;

`    `srand(time(NULL));

`    `for (i=0;i<15;i++)

`    `{

`        `tab[i]=rand()%31;

`        `cout<<tab[i]<<"  ";

`        `suma+=tab[i];

`    `}

`    `cout<<"\nsuma: "<<suma<<endl;

`    `mini=tab[0];maks=tab[0];

`    `for (i=1;i<15;i++)

`    `{

`        `if (tab[i]<mini)mini=tab[i];

`        `if (tab[i]>maks)maks=tab[i];

`    `}

`    `cout<<"minimum: "<<mini<<endl;

`    `cout<<"maksimum: "<<maks<<endl;

`    `return 0;

}

Wersja ze stałą **const**

int main()

{

`    `const int rozmiar=15;

`    `int tab[rozmiar],i,suma=0,mini,maks,tmp;

`    `srand(time(NULL));

`    `for (i=0;i<rozmiar;i++)

`    `{

`        `tab[i]=rand()%31;

`        `cout<<tab[i]<<"  ";

`        `suma+=tab[i];

`    `}

`    `cout<<"\nsuma: "<<suma<<endl;

`    `mini=tab[0];maks=tab[0];

`    `for (i=1;i<rozmiar;i++)

`    `{

`        `if (tab[i]<mini)mini=tab[i];

`        `if (tab[i]>maks)maks=tab[i];

`    `}

`    `cout<<"minimum: "<<mini<<endl;

`    `cout<<"maksimum: "<<maks<<endl;

`    `return 0;

}


**Instrukcje break i continue**

**============================**

Zastosowanie instrukcji **break** wewnątrz pętli spowoduje przerwanie działania pętli.

W przeciwieństwie do break, która przerywa wykonywanie pętli instrukcja **continue** powoduje przejście do następnej iteracji, o ile tylko warunek pętli jest spełniony. 

Przykład: 

Program wypisuje liczby z zakresu od 1 do 50, tylko te które nie są podzielne przez 5.

int main()

{

`   `int i;

`   `for (i = 1 ; i <= 50 ; ++i) 

`   `{

`     `if (i%5==0) continue ;

`     `printf ("%d, ", i);

`   `}

`   `return 0;

}





**Zadanie 2**

**=========**

Program losuje liczby całkowite z <0,10>

tak długo aż wylosuje **wszystkie** liczby z podanego przedziału.


