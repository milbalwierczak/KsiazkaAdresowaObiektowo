#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "Adresat.h"
#include "PlikZAdresatami.h"
#include "UzytkownikMenedzer.h"

using namespace std;

class AdresatMenedzer{
    vector <Adresat> adresaci;
    int idOstatniegoAdresata;
    int idZalogowanegoUzytkownika;
    PlikZAdresatami plikZAdresatami;

    Adresat podajDaneNowegoAdresata();

public:
    AdresatMenedzer();
    void ustawIdZalogowanegoUzytkownika(int noweIdZalogowanegoUzytkownika);
    void dodajAdresata();
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku();

};

#endif
