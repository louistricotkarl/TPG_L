//
// Created by louis on 15/02/2022.
//

#ifndef UNTITLED_ETAT4_H
#define UNTITLED_ETAT4_H


#include "Etat.h"

class Etat4 : public Etat{

public :

    Etat4(){

    }
    ~Etat4() {

    }

    virtual void transition(Automate * d, Symbole * s);
};

#endif //UNTITLED_ETAT4_H
