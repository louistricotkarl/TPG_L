//
// Created by louis on 15/02/2022.
//

#include "Automate.h"
#include "Etat/Etat0.h"

Automate::Automate(Lexer &l) : lexer(l) {
    Etat0 * e = new Etat0();
    etats.push_back(e);
}

void Automate::Execute() {

    Symbole * s;

    while(*(s=lexer.Consulter())!=FIN) {
        etats.front()->transition(this,s);
        lexer.Avancer();
    }
}