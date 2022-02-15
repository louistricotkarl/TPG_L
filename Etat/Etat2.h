//
// Created by louis on 15/02/2022.
//

#ifndef UNTITLED_ETAT2_H
#define UNTITLED_ETAT2_H

#include "Etat.h"

class Etat2 : public Etat{

public :

    Etat2(){

    }
    ~Etat2() {

    }

    virtual void transition(Automate * d, Symbole * s);
};

#endif //UNTITLED_ETAT2_H
