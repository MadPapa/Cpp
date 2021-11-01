Ćwiczenia 2

\=============

- Zmienne i stałe typów numerycznych
- Instrukcje sterujące: if, switch
- Operatory porównania
- Operatory matematyczne
- Operatory logiczne


Dzisiaj zajmiemy się typami numerycznymi.

**int** - typ całkowity, o długości domyślnej dla danej architektury komputera

**float** - typ zmiennopozycyjny (zwany również zmiennoprzecinkowym), reprezentujący liczby rzeczywiste 

**double** - typ zmiennopozycyjny o podwójnej precyzji 

**Te trzy typy liczbowe są typami ze znakiem, czyli dopuszczalny zakres wartości jest podzielony między liczby dodatnie i ujemne.**

Przykładowo int zajmuje 4 bajty (32 bity) i dopuszczalny zakres liczb to:

−2 147 483 648 — +2 147 483 647


**Stałe**

\=========

przykłady stałych całkowitych: 12 	-4 	876

przykłady stałych rzeczywistych: 	12.67  	3.456 

**Uwaga! separatorem dziesiętnym jest kropka**

Notacja naukowa:

0.1267E2        0.1267\*102      0.1267\*100

W tym wypadku 0.1267 to **mantysa**, 2 to wykładnik nazywany **cechą**

E3 oznacza 103   czyli 1000

E-3  oznacza 10-3 czyli  0.001

Domyślnie stałe 8.24 czy 2.4E7 są typu double. Jeśli chcemy mieć stałą typu float trzeba dopisać do niej f lub F

8.24f 

2.4E7f



Instrukcje warunkowe

\=============================

C jest językiem imperatywnym - oznacza to, że instrukcje wykonują się jedna po drugiej w takiej kolejności w jakiej są napisane. Aby móc zmienić kolejność wykonywania instrukcji potrzebne są instrukcje sterujące.

Instrukcja **if**

\================


**if** (wyrażenie) 

`        `instrukcja1;// jeśli wyrażenie jest prawdziwe

**else** 

`        `instrukcja2;// jeśli wyrażenie jest nieprawdziwe 

lub tylko

**if** (wyrażenie) 

`        `instrukcja1;// jeśli wyrażenie jest prawdziwe


Najpierw jest obliczane wyrażenie. Jeśli jego wynikiem jest „prawda”, wykonywana jest instrukcja1, jeśli nie „instrukcja2”

Jeżeli w miejscach „instrukcja1” „instrukcja2” chcesz umieścić kilka instrukcji, **to należy je zgrupować za pomocą nawiasów klamrowych {}**

**if** (wyrażenie) 

{

`     	`instrukcja1;

instrukcja2;

`	`…

}



Uwaga! Nawiasy {} powodują, że instrukcje umieszczone w nawiasach traktowane są jako jedna instrukcja blokowa.

operatory porównania:

\>

<

\>=

<=

==	równy

!=	różny

**uwaga!!!!**

**================**

**liczba=6  //podstawienie wartości na zmienną**

**liczba==6  //porównanie czy zmienna liczba ma wartość 6**

**zadanie 1**

\==========

Wczytać liczbę całkowitą i sprawdzić, czy wczytana liczba całkowita jest >0. Wypisać stosowny komunikat.

**int main()**

**{**

`	`**int liczba;**

`	`**cout << "Podaj liczbe calkowita > 0: ";**

`	`**cin >> liczba;**

`	`**if (liczba>0)**

`        `**cout << "OK \n";**

`     `**else**

`        `**cout << "Zle, nie podales liczby >0\n";**

`	`**return 0;**

**}**

lub tak

**int main()**

**{**

**int liczba;**

`	`**cout<<"Podaj liczbe calkowita > 0: ";**

`	`**cin>>liczba;**

`	`**if (liczba>0)**

`     `**{ //tu konieczne jest grupowanie instrukcji**

`        `**cout<<"OK \n";**

`        `**return 0;**       

`     `**}**

`    	`**cout<<"Zle, nie podales liczby >0\n";**

`    	`**return 0;**

**}**

**Zadanie 2**

**============**

Wczytać dwie różne liczby całkowite.

Wypisać większą z podanych liczb.

**int main()**

**{**

`	`**int liczba1,liczba2;**

`	`**cout<<"Podaj liczbe calkowita: ";**

`	`**cin>>liczba1;**

`    	`**cout<<"Podaj liczbe calkowita: ";**

`	`**cin>>liczba2;**

`	`**if (liczba1>liczba2)**

`    	`**{**

`        `**cout<<"Wieksza z liczb:" <<liczba1;**

`        `**return 0;**

`    	`**}**

`    	`**cout<<"Wieksza z liczb:" <<liczba2;**

**return 0;**

**}**

**Zadanie 3**

**===================**

**wczytać trzy różne liczby całkowite.**

**Wypisać największą z podanych liczb.**


**int main()**

**{**

`	`**int liczba1,liczba2,liczba3;**

`	`**cout<<"Podaj trzy rozne liczby calkowite: ";**

`	`**cin>>liczba1>>liczba2>>liczba3;**

`	`**if (liczba1>liczba2)**

`        `**if (liczba1>liczba3)**

`            `**cout<<"Najwieksza z liczb:" <<liczba1;**

`        `**else**

`            `**cout<<"Najwieksza z liczb:" <<liczba3;**

`     `**else**

`        `**if (liczba2>liczba3)**

`            `**cout<<"Najwieksza z liczb:" <<liczba2;**

`        `**else**

`            `**cout<<"Najwieksza z liczb:" <<liczba3;**

`	`**return 0;**

**}**


**lub można tak:**

**int main()**

**{**

`	`**int liczba1,liczba2,liczba3,max;**

`	`**cout<<"Podaj trzy rozne liczby calkowite: ";**

`	`**cin>>liczba1>>liczba2>>liczba3;**

`	`**if (liczba1>liczba2)**

`        `**max=liczba1;**

`    	`**else**

`        `**max=liczba2;**

`    	`**if (max>liczba3)**

`        `**cout<<"Największa z liczb: "<<max<<endl;**

`    	`**else**

`        `**cout<<"Największa z liczb: "<<liczba3<<endl;**

`	`**return 0;**

**}**






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


Jeżeli po obu stronach operatora dzielenia ‘/’ mamy argumenty typu całkowitego to wynik jest liczba całkowitą. Jest to dzielenie całkowitoliczbowe.

int main()

{

`	`float liczba1=13;int liczba2=10;

`	`float wynik;

`    	`wynik=liczba1/liczba2;

`    	`cout<<"wynik="<<wynik<<endl;

`	`return 0;

}

Inkrementacja post i pre 

int main()

{

`	`int liczba=13,wynik;

`    	`wynik=++liczba;

//wynik=liczba++;

`    	`cout<<"wynik="<<wynik<<endl;

`	`return 0;

}




zadanie

\========

Program wczytuje 2 liczby całkowite i pyta o sumę tych liczb.

Sprawdza, czy podano prawidłową sumę.

Wyświetla odpowiedni komunikat.

Deklaracja zmiennych

Wczytanie na zmienne

Pytanie o sumę

Czy suma prawidłowa?

Tak

`	`Komunikat „OK”

Nie

`	`Komunikat „Zla suma”



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

**Zadanie** 

Program prosi o wczytanie liczby całkowitej z przedziału <0,10> 

i sprawdza, czy podana została prawidłowa liczba. Wypisuje stosowny komunikat.





