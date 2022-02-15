//
// Created by louis on 15/02/2022.
//

#include "Etat3.h"
#include <iostream>
using namespace std;

void Etat3::transition(Automate * d, Symbole * s){

    cout << "Transition Etat3 avec symbole " << Etiquettes[*s] << endl;
    if(*s == INT || *s == OPENPAR || *s == EXPR){
        d->Error();
    }
    else{
        d->Reduction(5);
    }

}