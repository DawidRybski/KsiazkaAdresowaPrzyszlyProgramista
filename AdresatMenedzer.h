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
    const int ID_ZALOGOWANEGO_UZYTKOWNIKA;
    vector <Adresat> adresaci;

    Adresat podajDaneNowegoAdresata();
    PlikZAdresatami plikZAdresatami;
    void wyswietlDaneAdresata(Adresat adresat);
    int podajIdWybranegoAdresata();
    char wybierzOpcjeZMenuEdycja();

public:
    AdresatMenedzer(string nazwaPlikuZAdresatami, int idZalogowanegoUzytkownika)
    : plikZAdresatami(nazwaPlikuZAdresatami), ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika)
    {
        adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
    };
    void dodajAdresata();
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();
    void wyswietlWszystkichAdresatow();
    void wyswietlIloscWyszukanychAdresatow(int iloscAdresatow);
    void usunAdresata();
    void edytujAdresata();
};


#endif


