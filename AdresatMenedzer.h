#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>
#include "Adresat.h"
#include "PlikZAdresatami.h"
#include "MetodyPomocnicze.h"

using namespace std;

class AdresatMenedzer
{
    int idOstatniegoAdresata = 0; // do zmiany po zaimplementowaniu wczytywania adresatów z pliku
    int idZalogowanegoUzytkownika;
    vector <Adresat> adresaci;

    Adresat podajDaneNowegoAdresata();
    PlikZAdresatami plikZAdresatami;

public:
    AdresatMenedzer(string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami) {};
    int dodajAdresata();
    void ustawIdZalogowanegoUzytkownika(int idUzytkownikaPoZalogowaniu);
};


#endif


