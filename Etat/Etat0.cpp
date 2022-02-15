//
// Created by louis on 15/02/2022.
//

#include <iostream>
#include "Etat0.h"
#include "Etat4.h"
#include "Etat2.h"

using namespace std;

void Etat0::transition(Automate * d, Symbole * s){

    switch(*s) {
        case INT :
            d->Decalage(new Etat4(), s);
            break;
        case OPENPAR :
            d->Decalage(new Etat2(), s);
            break;
        default:
            d->Error();
    }

}