//
// Created by louis on 15/02/2022.
//

#ifndef UNTITLED_ETAT7_H
#define UNTITLED_ETAT7_H

#include "Etat.h"

class Etat7 : public Etat{
public :
    Etat7(){

    }
    ~Etat7() {

    }
    virtual void transition(Automate * d, Symbole * s);
};


#endif //UNTITLED_ETAT7_H
