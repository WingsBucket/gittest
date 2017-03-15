/*
 * sztosik.cpp
 *
 * Copyright 2017 user <user@lap79>
 *
 */


#include <iostream>
#include <cstdlib>
using namespace std;

void push(int stos[], int &sp, int dane) {
    cout << dane << " ";
    stos[sp] = dane;
    sp++;
}

int pop(int stos[], int &sp) {
    sp--;
    return stos[sp];
}

int main(int argc, char **argv)
{
    int *stack; //wskaźnik na sztosik
    int sr; //rozmiar sztosu
    int sp = 0; //stack pointer- wskaźnik sztosidła

    cout << "Podaj rozmiar: ";
    cin >> sr;
    if (!cin) {
        cout << "Błędne dane!";
        return -1;
    }
    stack = new int[sr];

    srand(time(NULL));
    for (int i=0; i<sr; i++)
        push(stack, sp, rand()%100 + 1); //wstaw na sztos
        cout << endl;
    for (int i=0; i<sr; i++)
        cout << pop(stack, sp) << " "; //zdejmij ze sztosu
    //cout << pop(stack, sp) << " ";

	return 0;
}

