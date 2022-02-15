//
// Created by louis on 15/02/2022.
//

#include "Etat2.h"
#include "Etat3.h"
#include "Etat6.h"
#include <iostream>
using namespace std;


void Etat2::transition(Automate * d, Symbole * s){
    cout << "Transition Etat2 avec symbole " << Etiquettes[*s] << endl;
    switch(*s) {
        case INT :
            d->Decalage(new Etat3(), s);
            break;
        case OPENPAR :
            d->Decalage(new Etat2(), s);
            break;
        case EXPR :
            d->Decalage(new Etat6(),s);
            break;
        default:
            d->Error();
    }

}