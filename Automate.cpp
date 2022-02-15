//
// Created by louis on 15/02/2022.
//

#include "Automate.h"

Automate::Automate(Lexer &l) : lexer(l) {

    allEtat.insert(0, new Etat0());
    allEtat.insert(1, new Etat1());
    allEtat.insert(2, new Etat2());
    allEtat.insert(3, new Etat3());
    allEtat.insert(4, new Etat4());
    allEtat.insert(5, new Etat5());
    allEtat.insert(6, new Etat6());
    allEtat.insert(7, new Etat7());
    allEtat.insert(8, new Etat8());
    allEtat.insert(9, new Etat9());

}

void Automate::Execute() {

    Symbole * s;

    while(*(s=lexer.Consulter())!=FIN) {
        s->Affiche();
        lexer.Avancer();
    }
}