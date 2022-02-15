//
// Created by louis on 15/02/2022.
//

#include "Etat6.h"
#include "Etat4.h"
#include "Etat5.h"
#include "Etat9.h"



void Etat6::transition(Automate * d, Symbole * s){

    switch(*s) {
        case PLUS :
            d->Decalage(new Etat4(), s);
            break;
        case MULT :
            d->Decalage(new Etat5(), s);
            break;
        case CLOSEPAR:
            d->Decalage(new Etat9(), s);
            break;
        default:
            d->Error();
    }

}