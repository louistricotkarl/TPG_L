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
            d->Reduction(2);
            break;
        case MULT :
            d->Decalage(new Etat5(), s);
            break;
        case CLOSEPAR:
            d->Reduction(2);
            break;
        case FIN :
            d->Reduction(2);
            break;
        default:
            d->Error();
    }

}