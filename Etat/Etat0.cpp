//
// Created by louis on 15/02/2022.
//

#include <iostream>
#include "Etat0.h"
#include "Etat3.h"
#include "Etat2.h"
#include "Etat1.h"

void Etat0::transition(Automate * d, Symbole * s){

    cout << "Transition Etat0 avec symbole " << Etiquettes[*s] << endl;
    switch(*s) {
        case INT :
            d->Decalage(new Etat3(), s);
            break;
        case OPENPAR :
            d->Decalage(new Etat2(), s);
            break;
        case EXPR:
            d->Decalage(new Etat1(), s);
        default:
            d->Error();
    }

}