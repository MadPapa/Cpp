
**Ćwiczenia 3**

**===========**

- Instrukcje pętli:
  - for
  - while
  - do while


**Instrukcje pętli**

**======================**

Często zdarza się, że nasz program musi wielokrotnie powtarzać ten sam ciąg instrukcji. 

Aby nie przepisywać wiele razy tego samego kodu można skorzystać z tzw. Instrukcji pętli.

**pętla for**

` `**for (wyrażenie1; wyrażenie2; wyrażenie3)**

` `**{**

`   `**//instrukcje do wykonania w pętli**

` `**}**

**wyrażenie1** - jest to instrukcja, która będzie wykonana przed pierwszym przebiegiem pętli. 

Zwykle jest to inicjalizacja zmiennej, która będzie służyła jako "licznik" przebiegów pętli.

**wyrażenie2** - jest warunkiem zakończenia pętli. 

**Pętla wykonuje się tak długo, jak długo prawdziwy jest ten warunek!**

**wyrażenie3** - jest to instrukcja, która wykonywana będzie po każdym przejściu pętli, jako ostatnia instrukcja w pętli. 

Zwykle zamieszczone są tu instrukcje, które zmieniają licznik o odpowiednią wartość.


**Zadanie 1**

**==========**

Wypisać liczby całkowite z przedziału <1,20>

int main()

{

`    `int i;

`    `for (i=1;i<=20;++i)

`        `cout<<i<<endl;

`    `return 0;

}


**Zadanie 2**

**===========**

Wypisać sumę liczb całkowitych z przedziału: <5,15>

int main()

{

`    `int i,suma=0;

`    `for (i=5;i<=15;++i)

`        `suma+=i;//suma=suma+1;

`    `cout<<"suma="<<suma<<endl;

`    `return 0;

}

Uwaga!!!

Operator przypisania	„=”

Np.:	liczba=4;liczba=liczba+5;

**Złożone operatory przypisania:** 

Operatory arytmetyczne:

x += y 	// x = x + y 

x -= y 	// x = x – y 

x ∗= y	// x = x ∗ y 

x /= y 	// x = x / y 

x %= y 	// x = x % y

**Zadanie 3**

**=========**

Wypisać wszystkie małe litery alfabetu łacińskiego i ich kody ASCII

int main()

{

`    	`char znak;

`    	`for (znak='a';znak<='z';++znak)

`        `cout<<znak<<'\t' <<int(znak)<<endl;// '\t' - znak tabulacji

`	`return 0;

}



**pętla while**

\-------------------

**while (wyrażenie)**

**{**

`   `**//instrukcje do wykonania w pętli** 

**}**


**do**

**{**

`   `**//instrukcje do wykonania w pętli** 

**}while(wyrażenie)**

W obu przypadkach instrukcje wykonywane są tak długo, **dopóki wyrażenie jest prawdziwe**.

W pętli „while” warunek sprawdzany jest na początku. Jeżeli zwróci fałsz instrukcje wewnątrz pętli nie wykonają się ani razu.

W pętli „do.. while” instrukcje wewnątrz pętli wykonają się co najmniej raz.

**Zadanie 4**

**==========**

Program prosi o podanie litery(znaku) ‘a’ tak długo aż będzie podany prawidłowy znak.

int main()

{

`    `char znak;

`    `do

`    `{

`        `cout<<"Podaj a:"<<endl;

`        `cin>>znak;

`    `}while(znak!='a');

`    `cout<<"OK\n";

`    `return 0;

}

**Zadanie 5**

**=========**

Program prosi o podanie małej litery ‘a’ lub wielkiej litery 'A'.

tak długo aż zostanie podana prawidłowa litera. 

Podanie ‘a’ lub ‘A’ kończy program!


Przydatne przy budowaniu warunków logicznych!!!

**I prawo De Morgana**

Zaprzeczenie [koniunkcji](https://www.medianauka.pl/koniunkcja-iloczyn-logiczny) dwóch zdań logicznych jest równoważne [alternatywie](https://www.medianauka.pl/alternatywa-suma-logiczna) zaprzeczeń tych zdań.

Innymi słowy zdanie: nieprawda, że p i q ma taką samą wartość logiczną co: nieprawda, że p lub nieprawda, że q

~(p ∧ q) ⇔ (~p) ∨ (~q)

**II prawo De Morgana**

Zaprzeczenie alternatywy dwóch zdań logicznych jest równoważne koniunkcji zaprzeczeń tych zdań.

Innymi słowy zdanie: nieprawda, że p lub q ma taką samą wartość logiczną co: nieprawda, że p i nieprawda, że q

~(p ∨ q) ⇔ (~p) ∧ (~q)


**zadanie 6**

**=========**

Program wczytuje liczbę całkowitą i liczy sumę cyfr z których zbudowana jest liczba.

Np.: liczba 3145  suma: 3+1+4+5 =13

3145%10 	**5**

3145/10	314

314%10	**4**

314/10	31

31%10		**1**

31/10		3

3%10		**3**

3/10		0

koniec


**Zadanie 7**

**=========**

Program wczytuje liczby całkowite tak długo dopóki suma tych liczb nie przekroczy 100. 
