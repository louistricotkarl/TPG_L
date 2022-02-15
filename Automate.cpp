//
// Created by louis on 15/02/2022.
//

#include "Automate.h"
#include "Etat/Etat0.h"

Automate::Automate(Lexer &l) : lexer(l) {

    Etat0 * e = new Etat0();
    etats.push_back(e);

    Execute();
}

void Automate::Decalage(Etat * e, Symbole * s){
    etats.push_back(e);
    symboles.push_back(s);
    if(*s != EXPR)
        lexer.Avancer();
}

Automate:Error(){
    symbles.push_back(new Symbole(ERR));
};
void Automate::Execute() {

    Symbole * s;

    while(*(s=lexer.Consulter())!=FIN) {
        etats.back()->transition(this,s);
    }
}