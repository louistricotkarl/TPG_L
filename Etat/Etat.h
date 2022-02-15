//
// Created by louis on 15/02/2022.
//

#ifndef UNTITLED_ETAT_H
#define UNTITLED_ETAT_H


#include "../symbole.h"
#include "../Automate.h"
#include <map>


class Etat {

public :
    Etat(){
    }
    ~Etat(){
    }
    virtual void transition(Automate * d, Symbole * s) = 0;

};


#endif //UNTITLED_ETAT_H
