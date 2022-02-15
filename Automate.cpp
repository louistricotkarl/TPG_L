//
// Created by louis on 15/02/2022.
//

#include "Automate.h"
#include "Etat/Etat0.h"
#include <iostream>

using namespace std;

Automate::Automate(Lexer &l) : lexer(l) {

    Etat0 * e = new Etat0();
    etats.push_back(e);

    Execute();
}

void Automate::Decalage(Etat * e, Symbole * s){
    etats.push_back(e);
    symboles.push_back(s);
    if(*s != EXPR){
        lexer.Avancer();
        s = lexer.Consulter();
        etats.back()->transition(this,s);
    }

}

void Automate::Error(){
    5/0;
};

void Automate::Accepter(){
    cout << "FINISHED" << endl;
}

void Automate::Reduction(int r){

    int tmp;

    switch(r){
        case 5:
            tmp = ((Entier *)symboles.back())->GetValeur();
            symboles.pop_back();
            etats.pop_back();
            etats.back()->transition(this,(new Expression(tmp)));
            break;

        case 2 :
            tmp = 0;
            tmp += ((Entier *)symboles.back())->GetValeur();
            symboles.pop_back();
            symboles.pop_back();
            tmp += ((Entier *)symboles.back())->GetValeur();
            symboles.pop_back();
            for(int i = 0; i < 3;i++){
                etats.pop_back();
            }

            etats.back()->transition(this,(new Expression(tmp)));

            break;
        case 3:
            tmp = 0;
            tmp += ((Entier *)symboles.back())->GetValeur();
            symboles.pop_back();
            symboles.pop_back();
            tmp *= ((Entier *)symboles.back())->GetValeur();
            symboles.pop_back();
            for(int i = 0; i < 3;i++){
                etats.pop_back();
            }
            etats.back()->transition(this,(new Expression(tmp)));
            break;

        case 4:
            symboles.pop_back();
            tmp = ((Entier *)symboles.back())->GetValeur();
            symboles.pop_back();
            symboles.pop_back();

            for(int i = 0; i < 3;i++){
                etats.pop_back();
            }

            etats.back()->transition(this,(new Expression(tmp)));
            break;
    }

}
void Automate::Execute() {
    Symbole * s = lexer.Consulter();
    etats.back()->transition(this,s);
}