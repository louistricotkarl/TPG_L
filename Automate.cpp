//
// Created by louis on 15/02/2022.
//

#include "Automate.h"


void Automate::Execute() {

    Symbole * s;

    while(*(s=lexer.Consulter())!=FIN) {
        s->Affiche();
        lexer.Avancer();
    }
}