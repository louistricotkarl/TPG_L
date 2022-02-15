//
// Created by louis on 15/02/2022.
//

#ifndef UNTITLED_AUTOMATE_H
#define UNTITLED_AUTOMATE_H

#include <deque>
#include "symbole.h"
#include "lexer.h"
#include <map>

class Etat;
class Etat0;



using namespace std;


class Automate {

public:
    Automate(Lexer & l);
    ~Automate(){

    }

    void Execute();


private :
    Lexer lexer;
    deque<Etat*> etats;
    deque<Symbole*> symboles;
};


#endif //UNTITLED_AUTOMATE_H
