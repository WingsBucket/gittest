/*
 * wskazniki.cpp
 *
 * Copyright 2017 user <user@lap79>
 *
 * Wskaźniki i dynamiczne struktury danych
 *
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv) {
/*
    int x = 11;
    cout << x << endl; //wartość
    cout << &x << endl; //adres
    cout << sizeof(x) << endl; //rozmiar w pamięci

    int *pussy;
    pussy = &x;
    cout << pussy << endl;
    cout << *pussy << endl; //dereferencja
    *pussy += *pussy;
    cout << *pussy << endl; //dereferencja ; dwie doopy w kiblu
    pussy +=1; // inkremenracja wskaźnika
    cout << pussy << endl;
*/

    int *tbIntPtr = NULL;
    int tab[100];
    cout << tab << endl;
    int ile = 0;
    cout << "Ile liczb podasz? ";
    cin >> ile;
    tbIntPtr = new int[ile];
    cout << tbIntPtr << endl;
    cout << "Podaj kolejne liczby: " << endl;
    for (int i = 0; i < ile; i++)
        cin >> tbIntPtr[i];
    cout << tbIntPtr;
	return 0;
}

