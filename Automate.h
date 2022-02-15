//
// Created by louis on 15/02/2022.
//

#ifndef UNTITLED_AUTOMATE_H
#define UNTITLED_AUTOMATE_H

#include <queue>
#include "symbole.h"
#include "lexer.h"
#include <map>

class Etat;
class Etat0;
class Etat1;

using namespace std;


class Automate {

public:
    Automate(Lexer & l);
    ~Automate(){

    }

    void Execute();


private :
    Lexer lexer;
    queue<Etat> etats;
    queue<Symbole> symboles;
};


#endif //UNTITLED_AUTOMATE_H
