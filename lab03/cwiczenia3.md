Cwiczenia 3

\===================

* Operatory matematyczne
* Instrukcja warunkowa switch
* Zmienne typu char
* Operatory logiczne
* Rzutowanie typów

operatory matematyczne:

\==========================

\+

\-

\*

/

++ inkrementacja, przyrost o 1, i++ (post), ++i (pre)

-- dekrementacja, zmniejszenie o 1, i--, --i

% modulo, reszta z dzielenia całkowitego

Przykłady użycia:

int main()

{

`	`int liczba1=13,liczba2=10;

`	`float wynik;

`    	`wynik=liczba1/liczba2;

`    	`cout<<"wynik="<<wynik<<endl;

`	`return 0;

}


Jeżeli po obu stronach operatora dzielenia ‘/’ mamy argumenty typu całkowitego to wynik jest liczba całkowitą. Jest to wtedy dzielenie całkowitoliczbowe!

int main()

{

`	`int liczba1=13;int liczba2=10;

`	`float wynik;

`    	`wynik=liczba1/liczba2;

`    	`cout<<"wynik="<<wynik<<endl;

`	`return 0;

}

Inkrementacja post i pre 

\========================

int main()

{

`	`int liczba=13,wynik;

`    	`wynik=++liczba;

//wynik=liczba++;

`    	`cout<<"wynik="<<wynik<<endl;

`	`return 0;

}




Instrukcja: **switch**

**=========================**

Aby ograniczyć wielokrotne stosowanie instrukcji if możemy użyć instrukcji switch. 

Składnia: 

**switch (wyrażenie)** 

**{**

`   `**case** wartość1: 

`	`//instrukcje, jeśli wyrażenie == wartość1 

`     `break;

`   `**case** wartość2: 

`	`// instrukcje, jeśli wyrażenie == wartość2 

`     `break;

`   `/\* ... \*/

`   `**default:** // instrukcje, jeśli żaden z wcześniejszych warunków nie został spełniony

**}**


przykład

\=========

int main()

{

`   `int liczba;

`   `cout<<"Podaj liczbe: ";

`   `cin>>liczba;

`   `switch (liczba)

`   `{

`   	`case 1:

`     		`cout<<"Podano 1\n";

`     		`break;

`   	`case 2:

`     		`cout<<"Podano 2\n";

`     		`break;

`   	`default: // instrukcje, jeśli żaden z wcześniejszych warunków nie został spełniony

`     		`cout<<"Inna liczba (nie 1 lub 2)\n";

`           `break;

`   `}

`   `return 0;

}

Należy pamiętać o użyciu **break** po zakończeniu listy instrukcji następujących po case. Jeśli tego nie zrobimy, program przejdzie do wykonywania instrukcji z następnego case. 


Operatory logiczne:

\======================

!  	nie	negacja

&& 	i	dwuargumentowy operator koniunkcji, iloczyn logiczny

|| 	lub	dwuargumentowy operator alternatywy, suma logiczna 

**ar1 && arg2**  //prawda jeżeli oba argumenty są prawdziwe

**ar1 || arg2**  //prawda, jeżeli co najmniej jeden z argumentów jest prawdziwy

**!arg1**		//zamienia prawdę na fałsz a fałsz na prawdę

**Zadanie 1**

**===============**

Program prosi o wczytanie liczby całkowitej z przedziału <0,10> 

i sprawdza, czy podana została prawidłowa liczba. Wypisuje stosowny komunikat.

Deklaracja zmiennej

Wczytanie liczby na zmienną

Czy podano liczbę z <0,10>?

Tak

`	`komunikat: "OK"

Nie

`	`komunikat: "zla liczba"


**typ char**

**========**

Służy do przechowywania znaków, ale z technicznego punktu widzenia jest on typem całkowitym.


W rzeczywistości typ char przechowuje liczby całkowite a nie znaki. 

**Aby wyświetlać znaki komputer wykorzystuje kod numeryczny,** 

**w którym liczbom odpowiadają określone znaki.** 

Stosowany system kodowania nazywa się **ASCII**.

Typ char zapamiętywany jest na 1 bajcie.

00000000 – 11111111

0-255

1\*20+1\*21+1\*22+1\*23+… 1\*27 = 255

0 -127 podstawowy zestaw znaków

128 -255 rozszerzony zestaw znaków


Rozszerzony zestaw znaków zapewnia obsługę liter narodowych używając do tego zakresu 128–255, jednocześnie **obszar wspólny (0-127) pozostaje nietknięty.** 

**Tabela kodów ASCII**

Standard ASCII przeznacza pierwsze 32 kody (0–31) na znaki sterujące używane do przesyłania informacji pomiędzy komputerami lub pomiędzy komputerem a innymi urządzeniami np. zmiana wiersza, sygnał dźwiękowy itd.)

<https://pl.wikipedia.org/wiki/ASCII>

Kody od 128-255 to tzw. “rozszerzony zestaw znaków” zawierający kody przypisywane w zależności od kraju np. kody liter występujących tylko w języku polskim: ą, ę, ó, ł, ń itd. 

Znaki polskie  

Ą	Ć 	Ę	Ł	Ń	Ó	Ś	Ź	Ż

164	143	168	157	227	224	151	141	189	

Ą	ć	ę	ł	ń	ó	ś	ź	ż

165	134	169	136	228	162	152	171	190


Linux korzysta z systemu kodowania UTF-8, strona kodowa dla Windows to: 1250

**Stałe znakowe**

**=============**

**stałe znakowe brane są w apostrofy!!!!**

**Np.:** '**a**' **,** '**.** '  **,** '**5**'

4 stała całkowita

'4' znak, stała znakowa

"4" napis

**Zadanie 2**

**=========**

Zadeklarować zmienną typu char, wczytać znak na zmienną i sprawdzić jaki jest kod tego znaku.

Język C umożliwia jawne rzutowanie typów. 

**Rzutowanie to inaczej jawne przekształcenie typu**. Ponieważ przekształcenie ma być jawne, to znaczy, że to osoba pisząca program określa jakie przekształcenie ma zostać wykonane.

**Schematycznie** operację rzutowania możemy zapisać następująco:

**typ (wyrazenie);** //metoda dostępna tylko w języku C++

lub

**(typ) wyrazenie;** //metoda dostępna w języku C i C++

Np.: char znak=’c’;int kod=int(znak);

int main()

{

`    `char znak;

`    `int kod;	

`    `cout<<"Podaj znak:";

`    `cin>>znak;

`    `kod=znak;//niejawna konwersja 	

`    `cout << "Podales znak: "<<znak<<" kod tego znaku to: "<<kod<<endl;

`    `//int(znak) jawna konwersja, rzutowanie

`    `cout << "Podales znak: "<<znak<<" kod tego znaku to: "<<int(znak)<<endl;

}

**Zadanie 3**

**=========**

Wczytać znak i sprawdzić, czy podany znak jest wielką literą.


int main()

{

`    	`char znak;

`    	`cout<<"Podaj wielka litere: ";

`    	`cin>>znak;

`    	`if ((znak>='A') && (znak<='Z'))

`     `{

`            `cout<<"OK\n";

`            `return 0;

`     `}

`     `cout<<"To nie jest wielka litera!!\n";

`     `return 0;

}



