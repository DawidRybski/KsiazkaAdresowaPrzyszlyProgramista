#ifndef ADRESAT_H
#define ADRESAT_H

#include <iostream>
using namespace std;

class Adresat
{
    int id;
    int idUzytkownika;
    string imie;
    string nazwisko;
    string numerTelefonu;
    string email;
    string adres;

public:
    void ustawId(int noweId);
    void ustawIdUzytkownika(int noweIdUzytkownika);
    void ustawImie(string noweImie);
    void ustawNazwisko(string noweNazwisko);
    void ustawNumerTelefonu(string nowyNumerTelefonu);
    void ustawEmail(string nowyEmail);
    void ustawAdres(string nowyAdres);

    int Adresat::pobierzId();
    int Adresat::pobierzIdUzytkownika();
    string Adresat::pobierzImie();
    string Adresat::pobierzNazwisko();
    string Adresat::pobierzNumerTelefonu();
    string Adresat::pobierzEmail();
    string Adresat::pobierzAdres();
};

#endif
