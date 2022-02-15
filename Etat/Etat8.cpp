//
// Created by louis on 15/02/2022.
//

#include "Etat8.h"
#include "Etat3.h"
#include "Etat5.h"

#include <iostream>
using namespace std;


void Etat8::transition(Automate * d, Symbole * s){
    cout << "Transition Etat8 avec symbole " << Etiquettes[*s] << endl;
    switch(*s) {
        case PLUS :
            d->Reduction(3);
            break;
        case MULT :
            d->Reduction(3);
            break;
        case CLOSEPAR:
            d->Reduction(3);
            break;
        case FIN :
            d->Reduction(3);
            break;
        default:
            d->Error();
    }

}