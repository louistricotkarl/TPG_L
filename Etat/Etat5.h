//
// Created by louis on 15/02/2022.
//

#ifndef UNTITLED_ETAT5_H
#define UNTITLED_ETAT5_H

#include "Etat.h"

class Etat5 : public Etat{
public :

    Etat5(){

    }
    ~Etat5() {

    }
    virtual void transition(Automate * d, Symbole * s);
};


#endif //UNTITLED_ETAT5_H
