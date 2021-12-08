ćwiczenia 5

\=============

\1. Napisy w języku C/C++

\2. Funkcja getline() i get()


Napis

\======

Napis -  ciąg znaków zawarty pomiędzy dwoma cudzysłowami.

**W klasycznym C nie ma typu napisowego, a rolę zmiennych napisowych pełnią tablice znaków.**

Napis jest traktowany jak tablica znaków zawierająca znak NUL (null) na końcu. Nazwa NUL (przez jedno 'L') jest nazwą znaku w kodzie ASCII 0, literałem tego znaku jest '\0'

**Koniec napisu oznaczany jest znakiem '\0'.** 



char tekst[] = "Komputer"; /\* Umieszcza napis w tablicy \*/

char tekst[] = {'K','o','m','p','u','t ','e','r',**'\0'**};



Do poszczególnych znaków odwołujemy się jak w każdej tablicy.

deklaracja:

char napis[20];

char napis[]="Napis w jezyku C";//rozmiar tablicy jest wyliczany na podstawie liczby znaków w napisie.

cout<< napis[0]);//wypisze "N"

cout<< napis[3]);//wypisze "i"


Uwaga!

cin czyta napis do pierwszego białego znaku (spacja, tabulacja).

Wprowadzanie danych wierszami.

\================================

Funkcja **getline()** wczytuje całe wiersze za koniec danych uznaje znak nowego wiersza.Funkcja wczytuje i odrzuca znak nowego wiersza.

Funkcja wywołuje sie korzystając z zapisu 

**cin.getline(tablica,ile)**

Funkcja ma dwa parametry:

**tablica** - nazwa tablicy na wczytane dane

**ile** - maksymalna liczba wczytanych znaków

Funkcja wczyta do tablicy "tablica" nie więcej znaków niż liczba  podana jako drugi argument.

Funkcja **get(tablica,ile)** wczytuje całe wiersze, za koniec danych uznaje znak nowego wiersza.Funkcja zostawia znak nowego wiersza w kolejce wejściowej.

Funkcję wywołuje sie korzystając z zapisu: 

**cin.get(tablica,ile)**

Jest też inna postać funkcji get()

Wywołonie **cin.get()** (bezparametrowe)powoduje wczytanie nastepnego znaku z kolejki wejściowej.


**Zadanie 1**

**===========**

Program wczytuje imię np.: "Alicja"

a następnie wypisuje wczytane imię w pionie.

Liczy ile znaków ma podane imię (bez końcowego znaku „NUL”).

Program wczytuje imię i nazwisko. Sprawdza, czy dane zostały poprawnie zamamiętane na zmiennej.

A

l

i

c

j

a

int main()

{

`    `char imie[15],osoba[30];char nazwisko[30];

`    `char imie1[]="Anna";

`    `int i;

`    `cout<<"imie: "<<imie1<<"znakow w tablicy: "<<sizeof(imie1)<<endl;

`    `cout<<"Podaj imie: ";

`    `cin>>imie;

`    `i=0;

`    `while(imie[i]!='\0')

`    `{

`        `cout<<imie[i]<<endl;

`        `i++;

`    `}

`    `cout << "znakow jest: " <<i<< endl;

`    `cout<<"Podaj imie i nazwisko: "<<endl;

`    `cin>>osoba;

`    `cout<<"witaj "<<osoba<<endl;//wypisuje tylko imie, ponieważ 	//cin czyta do pierwszego białego znaku

`    `cin>>nazwisko;

`    `cout<<nazwisko<<endl; 

}

int main()

{

`    `char imie[15],osoba[30];

`    `char imie1[]="anna";

`    `int i;

`    `cout<<"imie: "<<imie1<<" znakow w tablicy: "<<sizeof(imie1)<<endl;

`    `cout<<"Podaj imie: ";

`    `cin.getline(imie,15);

`    `i=0;

`    `while(imie[i]!='\0')

`    `{

`        `cout<<imie[i]<<endl;

`        `i++;

`    `}

`    `cout << "znakow jest: " <<i<< endl;

`    `cout<<"Podaj imie i nazwisko: "<<endl;

`    `cin.getline(osoba,30);

`    `cout<<"witaj "<<osoba<<endl;

`    `return 0;

}




**Zadanie 2**

**===========**

Program wczytuje napis i znak.

Liczy ile razy znak wystąpił w napisie.

Wyświetla komunikat.

int main()

{

`    `char napis[20],znak;

`    `int i,ile=0;

`    `cout<<"Podaj napis: ";

`    `cin.getline(napis,20);

`    `cout<<"Podaj znak: ";

`    `cin>>znak;

`    `i=0;

`    `while(napis[i]!='\0')

`    `{

`        `if (napis[i]==znak)ile++;

`        `i++;

`    `}

`    `cout<<"znak "<<znak<<" w napisie: "<<napis<<" wystapil " <<ile<<" razy "<<endl;

`    `return 0;

}


**Zadanie 3**

**=========**

Program wczytuje hasło i sprawdza czy podane hasło jest prawidłowe 

Założenia: hasło musi mieć dokładnie 5 znaków,

musi składać sie wyłącznie z liter i cyfr.

int main()

{

`    `const int ile=5;//prawidłowa liczba znaków

`    `char napis[10];

`    `int i,ileM=0,ileW=0,ileC=0;

`    `cout<<"podaj haslo: ";

`    `cin.getline(napis,10);

`    `i=0;

`    `while(napis[i]!='\0')i++;

`    `if (i!=ile)

`    `{

`            `cout<<"Nieprawidlowa liczba znakow!!\n";

`            `return 0;

`    `}

`    `for (i=0;i<ile;++i)

`    `{

`        `if (napis[i]>='a' && napis[i]<='z')ileM++;

`        `if (napis[i]>='A' && napis[i]<='Z')ileW++;

`        `if (napis[i]>='0' && napis[i]<='9')ileC++;

`    `}

`    `if (ileM+ileW+ileC==ile)

`        `cout<<"OK\n";

`    `else

`        `cout<<"Dozwolone znaki w hasle to litery i cyfry!!!";

`    `return 0;

}








