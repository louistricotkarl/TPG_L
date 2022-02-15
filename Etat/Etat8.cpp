//
// Created by louis on 15/02/2022.
//

#include "Etat8.h"
#include "Etat3.h"
#include "Etat5.h"
#include "Etat2.h"

using namespace std;

void Etat8::transition(Automate * d, Symbole * s){

    switch(*s) {
        case PLUS :
            d->Reduction(new Etat3(), s);
            break;
        case MULT :
            d->Reduction(new Etat3(), s);
            break;
        case CLOSEPAR:
            d->Reduction(new Etat3(), s);
            break;
        case FIN :
            d->Reduction(new Etat3(), s);
            break;
        default:
            d->Error();
    }

}