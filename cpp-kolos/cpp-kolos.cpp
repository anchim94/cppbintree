// cpp-kolos.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include <iostream>
#include "Node.h"
#include "Animal.h"
#include "Human.h"

int main()
{
    std::cout << "Hello World!\n"; 
	Node* p = new Human();
	//std::cout << p->height() << " \n";
	p->squeezin(new Animal(10));
	p->squeezin(new Animal(150));
	p->squeezin(new Animal(30));
	p->squeezin(new Animal(170));
	p->squeezin(new Animal(20));
	p->squeezin(new Animal(180));
	p->squeezin(new Animal(15));
	p->squeezin(new Animal(110));
	p->squeezin(new Animal(1));
	p->squeezin(new Human());
	p->print();
	delete p;
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
