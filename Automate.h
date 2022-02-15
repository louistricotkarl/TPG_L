//
// Created by louis on 15/02/2022.
//

#ifndef UNTITLED_AUTOMATE_H
#define UNTITLED_AUTOMATE_H

#include <queue>
#include "symbole.h"
#include "Etat/Etat.h"
#include "lexer.h"

using namespace std;


class Automate {

public:
    Automate(Lexer & l):lexer(l){

    }
    ~Automate(){

    }

    void Execute();


private :
    Lexer lexer;
    queue<Etat> etats;
    queue<Symbole> symbole;
};


#endif //UNTITLED_AUTOMATE_H
