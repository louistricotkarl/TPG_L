//
// Created by louis on 15/02/2022.
//

#include "Etat4.h"
#include "Etat3.h"
#include "Etat2.h"
#include "Etat7.h"
#include <iostream>
using namespace std;


void Etat4::transition(Automate * d, Symbole * s){

    cout << "Transition Etat4 avec symbole " << Etiquettes[*s] << endl;
    switch(*s) {
        case INT :
            d->Decalage(new Etat3(), s);
            break;
        case OPENPAR :
            d->Decalage(new Etat2(), s);
            break;
        case EXPR:
            d->Decalage(new Etat7(), s);
            break;
        default:
            d->Error();
    }

}