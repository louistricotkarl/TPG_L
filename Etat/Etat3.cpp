//
// Created by louis on 15/02/2022.
//

#include "Etat3.h"

void Etat3::transition(Automate * d, Symbole * s){

    if(*s == INT || *s == OPENPAR || *s == EXPR){
        d->Error();
    }
    else{
        d->Reduction(5);
    }

}