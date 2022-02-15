//
// Created by louis on 15/02/2022.
//

#include "Etat9.h"
#include "Etat4.h"

#include <iostream>
using namespace std;


void Etat9::transition(Automate * d, Symbole * s){
    cout << "Transition Etat9 avec symbole " << Etiquettes[*s] << endl;
    switch(*s) {
        case PLUS :
            d->Reduction(4);
            break;
        case MULT :
            d->Reduction(4);
            break;
        case CLOSEPAR:
            d->Reduction(4);
            break;
        case FIN :
            d->Reduction(4);
            break;
        default:
            d->Error();
    }

}