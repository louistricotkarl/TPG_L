//
// Created by louis on 15/02/2022.
//

#include "Etat1.h"
#include "Etat4.h"
#include "Etat6.h"
#include "Etat5.h"


void Etat1::transition(Automate * d, Symbole * s){
    switch(*s) {
        case PLUS :
            d->Decalage(new Etat4(), s);
            break;
        case MULT :
            d->Decalage(new Etat5(), s);
            break;
        case FIN :
            d->Accepter();
            break;
        default:
            d->Error();
    }

}