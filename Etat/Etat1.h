//
// Created by louis on 15/02/2022.
//
#ifndef UNTITLED_ETAT1_H
#define UNTITLED_ETAT1_H


#include "Etat.h"

class Etat1 : public Etat{

public :

    Etat1(){

    }
    ~Etat1() {

    }
    
    virtual void transition(Automate * d, Symbole * s);
};



#endif
