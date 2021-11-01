Zaczynamy:

Do pracy potrzebne będzie nam zintegrowane środowisko programistyczne, IDE (od ang. integrated development environment) 

Proponowane środowiska:

DEV C++

CODE BLOCKS

My używamy CodeBlocks

Potrzebne jest narzędzie w postaci języka programowania. Został wybrany język C z kilkoma elementami języka C++.

Poznacie składnię tego języka, dostępne instrukcje , dowiecie się jak korzystać z dodatkowych bibliotek i jak pisać własne funkcje.

**Trochę teorii:**

Język C jest imperatywnym, strukturalnym język programowania zaliczanym do języków wysokiego poziomu.

Programy imperatywne składają się z ciągu komend do wykonania przez komputer.

Programy strukturalne opierają się na podziale [kodu źródłowego](https://pl.wikipedia.org/wiki/Kod_%C5%BAr%C3%B3d%C5%82owy) [programu](https://pl.wikipedia.org/wiki/Program_komputerowy) na procedury i hierarchicznie ułożone bloki z wykorzystaniem struktur kontrolnych w postaci instrukcji wyboru i pętli.

Język wysokiego poziomu jest to typ języka, którego składnia oraz słowa kluczowe są łatwe do zrozumienia dla człowieka a nie dla procesora komputera.

Tworzenie programu w języku C/C++ składa się z dwóch faz:

\1.	Najpierw tworzy się tzw. tekst programu źródłowego. Jest to zwykły plik tekstowy, który można utworzyć w dowolnym procesorze tekstu, np. w notatniku. Jednak dla wygody stosuje się dedykowane edytory programu w języku C.

**W pliku źródłowym za pomocą odpowiednich reguł zapisujemy treść programu, czyli to, co ma być wykonane przez komputer.**

\2.	Gdy zakończymy pisanie tekstu programu źródłowego, poddajemy go tzw. **kompilacji**. Uruchamiamy specjalny program, który nazywa się kompilatorem języka C. Do kompilatora przekazujemy plik z tekstem programu źródłowego. Kompilator analizuje ten tekst i na jego podstawie **tworzy binarny program,** który możemy uruchomić na docelowym komputerze. 

Na bazie języka C powstał nowszy standard, zwany językiem C++. 

Język C++ daje programiście narzędzie wyposażone w obiekty, dziedziczenie, przeciążanie operatorów i funkcji, itp. ale o tym będzie na innych zajęciach.



Budowa programu w języku C - podstawy

\==================================================

Każdy program w języku C/C++ musi zawierać funkcję o nazwie "**main**".

To właśnie ta funkcja wykonywana jest jako pierwsza.

**Kod funkcji umieszcza się w nawiasach klamrowych {}.**

**Kolejne instrukcje oddzielane są średnikiem.**

**Wielkość liter jest rozróżniana.**

"main" i "Main" to zupełnie różne napisy!!!

Podstawowy szkielet funkcji **main**

int main()

{

`	`instrukcje;

` 	`return 0; 

}

Funkcja zwraca wartość.

Należy określić jakiego typu jest zwracana wartość.

***int*** umieszczony przed main oznacza, że funkcja zwraca liczbę całkowitą. 

int - integer, typ całkowitoliczbowy

nawiasy () po main, main(), to miejsce na argumenty przekazywane do funkcji. W naszym przykładzie nie przekazujemy do funkcji żadnych argumentów, ale nawiasy po nazwie funkcji zawsze są obowiązkowe!!!

Instrukcja:

***return*** określa, jaką wartość zwraca funkcja.

return zakończy działanie funkcji.



Przykład 1

Program wypisuje na wyjściu (na ekranie komputera) tekst "Witaj"

Potrzebna jest funkcja, która wypisuje teksty na wyjście. 

**Ciąg znaków ujęty w znaki cudzysłowu nazywamy napisem lub stałą napisową np.: "Podaj liczbe:\n"**

Sekwencja: \n reprezentuje znak nowego wiersza.

Zamiast \n można użyć manipulatora ***endl*** 

***endl*** to tzw. manipulator powodujący przejście do następnego wiersza. 

cout<<”Witaj”<<endl;

**Instrukcje wejścia/wyjścia**

**cin** i **cout**

instrukcja ***cout*** umożliwia wypisywanie danych na ekranie komputera.

Żeby możliwe było korzystanie z tych instrukcji należy do programu załączyć plik nagłówkowy ***iostream***. 

Do dołączenia służy dyrektywa preprocesora ***include***

<< jest operatorem przesłania danych do strumienia wyjściowego. 

np.: cout<<"Pierwszy program:" 

instrukcja **cin** umożliwia wczytywanie danych wpisywanych z klawiatury do zmiennej, 

\>> jest operatorem przesłania danych do strumienia wejściowego.

Najpierw przygotujemy sobie katalog roboczy.

W tym celu na dysku proszę utworzyć katalog: **c:/*wdpGr1***

W tym katalogu na każde zajęcia powinni Państwo tworzyć osobny podkatalog i w nim umieszczać programy z zajęć.

W ten sposób unikniecie robienia bałaganu na dysku.

Zatem tworzymy podkatalog **c:/ *wdpGr1*/cw1**

**Uwaga!!!** 

w nazwach katalogów i nazwach plików proszę używać jedynie znaków alfabetu łacińskiego, 

cyfr i znaku \_

Nie używamy spacji w nazwach.

**Jest to dobra praktyka każdego programisty**.


Piszemy pierwszy program.

Uruchamiamy program codeBlocks i postępujemy zgodnie z instrukcją.



` `Kliknij w ***Create a new project*** (Tworzenie nowego projektu). 


wybierz jako kategorię **Console application** (aplikacja konsoli)


Wybierz **Next**


Następne okienko służy do wyboru języka programowania dla twojego projektu. Wybierz C++:





W polu **Project title** (tytuł/nazwa projektu) wpisujesz nazwę dla swojego projektu. 

W polu **Folder to create project** in (katalog, w którym ma zostać utworzony projekt) wpisz ścieżkę do swojego katalogu, który wcześniej założyłeś sobie na dysku, 

Pozostałych pól tekstowych nie zmieniaj. Program wypełnia je automatycznie wg dwóch pierwszych pól. Kliknij w Next.



Ostatnie okienko umożliwia wybór kompilatora oraz konfiguracji. Konfiguracje mamy dwie:

Debug – konfiguracja uruchomieniowa, stosujemy ją przy tworzeniu programu, gdy chcemy śledzić jego wykonanie i poprawiać w nim zauważone błędy. W konfiguracji tej mamy kilka udogodnień użytecznych przy uruchamianiu programu.

Release – konfiguracja finalna, stosujemy ją wtedy, gdy tworzony program został już całkowicie uruchomiony (tzn. usunięto z niego wszystkie błędy) i jest gotowy do rozprowadzenia wśród użytkowników końcowych.

Konfiguracje te są istotne przy dużych projektach. W twoim przypadku zaznacz konfigurację Debug i odznacz Release:

Nie zmieniaj zawartości pozostałych pól tekstowych, ponieważ określają one katalogi w obrębie katalogu projektowego, w których znajdziesz pliki wynikowe, do których wkrótce przejdziemy. Kliknij w przycisk Finish.





Projekt został utworzony. W panelu Management (zarządzanie) powinno pojawić się na zakładce Projects drzewko struktury twojego projektu (jeśli nie widzisz tego panelu wybierz z menu View/Manager).

Rozwiń drzewo projektu i dwukrotnie kliknij plik main.cpp

Pliki zawierające tekst programu w języku C++ mają rozszerzenie nazwy cpp. Program może się składać z wielu takich plików. Główny jest plik o nazwie **main.cpp**, który jest automatycznie tworzony w CodeBlocks. Kliknij dwukrotnie myszką w nazwę main.cpp. Spowoduje to wczytanie pliku z dysku i otwarcie go w wewnętrznym edytorze.

Omówmy krótko to, co widzisz w edytorze.

Każdy program w języku C musi posiadać dokładnie jedną funkcję o nazwie main(), ponieważ od tej funkcji rozpoczyna się wykonanie programu.

#include <iostream>

using namespace std;

int main()

{

`    `cout << "Hello world!" << endl;

`    `return 0;

}

Treść funkcji umieszczamy w nawiasach klamrowych {}. 

W naszej funkcji main mamy tutaj dwie instrukcje:

cout  – instrukcja, która przesyła na konsolę tekst.

return 0 – rozkaz języka C/C++, który kończy działanie funkcji i zwraca 0 jako jej wynik.

Zwróć uwagę, że **na końcu każdej instrukcji umieszczony jest średnik**. Średnik pełni tutaj rolę znaku kończącego daną instrukcję. Jeśli go pominiesz, kompilator zgłosi błąd w czasie kompilacji.

Sprawdźmy, czy wygenerowany program działa.

Teraz wystarczy program skompilować i uruchomić.

**Działanie kompilatora sprowadza się do czytania tekstowego pliku** 

**z kodem programu, raportowania ewentualnych błędów i produkowania**

**pliku wynikowego.**

Wybieramy z menu „Build/Build and run”  - kompilacja i uruchomienie (skrót klawiszowy F9)

Jeżeli wszystko OK powinno pokazać się okno konsoli:


A w okienku “Logs and others” w zakładce „Build messages” pokaże się informacja o braku błędów.

Jeśli nie widać okienka Logs & others” wybierz z menu View/Logs

Jeśli wszystko OK skasujemy utworzony program i krok po kroku omówię kolejne linijki programu.



**#include <iostream>** 

**// biblioteka związana z obsługą strumieni cin i count**

**using namespace std;** 

**// ustawiam wykorzystanie przestrzeni nazw std, żeby nie trzeba** 

**//było pisać ciągle np. std::cout, std::cin**

**int main(){** 

**// Funkcja, która jako pierwsza jest wywoływana przez system**

**{**

`    	`**cout<<"Witam w pierwszym programie!\n\n";** 

`	`**//tekst, umieszcza się  pomiędzy cudzysłowami.** 

`	`**//wyrażenie \n wewnątrz tekstu wstawia znak nowej linii**

`	`**return 0;//instrukcja, która zwraca wynik funkcji i kończy program**

`	`**cout<<”To koniec programu\n”;//ten tekst już się nie wyświetli** 

**//bo wcześniej był return**

**}**

\======================

Stosowanie komentarzy

Komentarz jest dodatkową informacją umieszczaną w programie. Służy ona najczęściej do opisania sposobu działania lub przeznaczenia określonych fragmentów kodu. Komentarze są ignorowane przez kompilator, zatem program wynikowy nie jest przez nie większy, czy wolniejszy. Stosuj je często.

/\* To jest komentarz

`   `blokowy. Zajmuje on

`   `kilka linii 

\*/



// to jest komentarz liniowy

\==========

**Pojęcie zmiennej.**

Zmienne służą do przechowywania danych**.**

Zmienna jest to pewien fragment pamięci o ustalonym rozmiarze, który posiada własny identyfikator (nazwę) oraz może przechowywać pewną wartość, zależną od typu zmiennej.

Dla komputera każdy obszar w pamięci jest taki sam - to ciąg zer i jedynek. 

Podczas pisania programu musimy wskazać, w jaki sposób ten ciąg ma być interpretowany i o tym właśnie decyduje typ zmiennej.

Typ zmiennej wskazuje właśnie sposób, w jaki pamięć, w której znajduje się zmienna będzie wykorzystywana. Określając go przekazuje się kompilatorowi informację, ile pamięci trzeba zarezerwować dla zmiennej, a także w jaki sposób wykonywać na niej operacje.

W języku C wyróżniamy 4 podstawowe typy zmiennych. Są to:

**int** - typ całkowity, o długości domyślnej dla danej architektury komputera

**float** - typ zmiennopozycyjny (zwany również zmiennoprzecinkowym), reprezentujący liczby rzeczywiste 

**double** - typ zmiennopozycyjny o podwójnej precyzji 

**char** - typ znakowy, jednobajtowe liczby całkowite bez znaku służą do przechowywania znaków

dodatkowe :

typ logiczny : bool  (w języku C wymaga dołączenia biblioteki stdbool.h) 

Określając typ zmiennej przekazuje się kompilatorowi informację, ile pamięci trzeba zarezerwować na zmienną, a także w jaki sposób wykonywać na niej operacje.

**Nazwy zmiennych, stałych i funkcji**

Identyfikatory, czyli nazwy zmiennych, stałych i funkcji mogą składać się z liter (bez polskich znaków), cyfr i znaku podkreślenia z tym, że nazwa taka nie może zaczynać się od cyfry. Nie można używać nazw zarezerwowanych dla danego języka (słów kluczowych języka) .

Nazwa zmiennej powinna również kojarzyć się ze spełnianą przez tą zmienną funkcją w programie.

Przykłady błędnych nazw:

2liczba      	nie można zaczynać nazwy od cyfry

moja funkcja 	nie można używać spacji

$i           nie można używać znaku $

if           if to słowo kluczowe

Aby kod był bardziej czytelny, przestrzegajmy poniższych (umownych) reguł:

o	nazwy naszych zmiennych piszemy małymi literami: i, plik, imie

o	nazwy stałych, zadeklarowanych przy pomocy dyrektywy  #define, piszemy wielkimi literami: ROZMIAR

o	nazwy funkcji piszemy małymi literami: print

o	wyrazy w nazwach oddzielamy jedną z konwencji:

§	oddzielanie podkreśleniem: nazwa\_pliku

§	konwencja pascalowska: NazwaPliku

§	konwencja wielbłądzia: nazwaPliku



**Deklaracja zmiennych**

Wszystkie zmienne muszą być zadeklarowane przed ich użyciem!!!

Deklaracja zmiennej:

**typZmiennej nazwaZm1[=wartość];**

Zmiennej, w momencie zadeklarowania, można od razu przypisać wartość:

typ nazwaZm=wartość;

np:.

int liczba1=20;

Zadanie:

Zadeklarowac zmienne całkowite: liczba1, liczba2 i przypisać im wartości: 5 i 14

Wypisać wartości przechowywane w zmiennych liczba1 i liczba2 oraz sumę liczb przechowywanych w zmiennych liczba1 i liczba2.

Do wypisania użyjemy instrukcji cout.


#include <stdio.h> 

int main()

{

`	`int liczba1=5,liczba2=14;

`    	`cout<<"liczba1="<<liczba1<<endl;

`    	`cout<<"liczba2="<<liczba2<<endl;

`	`cout<<liczba1<<"+" <<liczba2<<"="<<liczba1+liczba2<<endl;

`	`return 0;

}

**Uwaga!!!**

**Wcięcia w programie podkreślają logiczną strukturę programu!!!**

\==========

Sprawdzimy ile miejsca zajmują zmienne różnych typów.

Język C zawiera wbudowany operator ***sizeof***, który zwraca rozmiary zmiennych i typów w bajtach.

Operator jest jednoargumentowy. Argumentem jest zmienna lub typ.

Wynik to liczba bajtów rezerwowanych na zmienną (typ tej zmiennej).

użycie operatora sizeof:

int liczba=15;

***sizeof(liczba)***	 lub	 ***sizeof(int)***

Zadanie 3

\--------------

Wypisz ile miejsca w pamięci zajmują zmienne typu: int, char, float i double

int main()

{

`        `cout<< "Typ int: "<<sizeof(int)<<'\n';

`        `cout<< "Typ float: "<<sizeof(float)<<'\n';

`        `cout<< "Typ double: "<<sizeof(double)<<'\n';

`        `cout<< "Typ char: "<<sizeof(char)<<'\n';

`        `return 0;

}


