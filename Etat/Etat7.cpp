//
// Created by louis on 15/02/2022.
//

#include "Etat7.h"
#include "Etat5.h"
#include "Etat2.h"

using namespace std;

void Etat7::transition(Automate * d, Symbole * s){

    switch(*s) {
        case PLUS :
            d->Reduction(new Etat2(), s);
            break;
        case MULT :
            d->Decalage(new Etat5(), s);
            break;
        case CLOSEPAR:
            d->Reduction(new Etat2(), s);
            break;
        case FIN :
            d->Reduction(new Etat2(), s);
            break;
        default:
            d->Error();
    }

}