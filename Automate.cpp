//
// Created by louis on 15/02/2022.
//

#include "Automate.h"
#include "Etat/Etat0.h"

Automate::Automate(Lexer &l) : lexer(l) {
    Etat0 e;
    etats.push(e);
}

void Automate::Execute() {

    Symbole * s;

    while(*(s=lexer.Consulter())!=FIN) {
        etats.front().transition(*this,*s);
        lexer.Avancer();
    }
}