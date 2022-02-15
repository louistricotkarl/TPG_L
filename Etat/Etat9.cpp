//
// Created by louis on 15/02/2022.
//

#include "Etat9.h"
#include "Etat4.h"

using namespace std;

void Etat8::transition(Automate * d, Symbole * s){

    switch(*s) {
        case PLUS :
            d->Reduction(new Etat4(), s);
            break;
        case MULT :
            d->Reduction(new Etat4(), s);
            break;
        case CLOSEPAR:
            d->Reduction(new Etat4(), s);
            break;
        case FIN :
            d->Reduction(new Etat4(), s);
            break;
        default:
            d->Error();
    }

}