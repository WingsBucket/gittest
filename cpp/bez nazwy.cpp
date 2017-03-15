/*
 * onp.cpp
 *
 * Copyright 2017 user <user@lap79>
 *
 */


#include <iostream>
#include <string.h>
#include <locale>

using namespace std;

int main(int argc, char **argv)
{
    string onp; // c========================D-< PYTONK
    getline(cin, onp);
    cout << "Podano: " << onp << endl;

    for(unsigned int i=0; i<onp.length(); i++)
    {
        if (onp[i] == ' ')
            ;
        else if (isdigit(onp[i]))
            cout << "liczba" << endl;
        else
            cout << onp[i] << " ";
    }

	return 0;
}

