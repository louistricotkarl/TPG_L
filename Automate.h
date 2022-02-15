//
// Created by louis on 15/02/2022.
//

#ifndef UNTITLED_AUTOMATE_H
#define UNTITLED_AUTOMATE_H

#include <queue>
#include "symbole.h"
#include "Etat/Etat.h"
#include "Etat/Etat0.h"
#include "Etat/Etat1.h"
#include "Etat/Etat2.h"
#include "Etat/Etat3.h"
#include "Etat/Etat4.h"
#include "Etat/Etat5.h"
#include "Etat/Etat6.h"
#include "Etat/Etat7.h"
#include "Etat/Etat8.h"
#include "Etat/Etat9.h"


#include "lexer.h"
#include <map>

using namespace std;


class Automate {

public:
    Automate(Lexer & l);
    ~Automate(){

    }

    void Execute();


private :
    Lexer lexer;
    queue<*Etat> etats;
    queue<*Symbole> symbole;
    map<int,*Etat> allEtat;
};


#endif //UNTITLED_AUTOMATE_H
