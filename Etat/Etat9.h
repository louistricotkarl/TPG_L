//
// Created by louis on 15/02/2022.
//

#ifndef UNTITLED_ETAT9_H
#define UNTITLED_ETAT9_H

#include "Etat.h"

class Etat9 : public Etat{
public :
    Etat9(){

    }
    ~Etat9() {

    }
    virtual void transition(Automate * d, Symbole * s);
};


#endif //UNTITLED_ETAT9_H
