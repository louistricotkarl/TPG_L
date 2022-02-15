//
// Created by louis on 15/02/2022.
//

#include "Automate.h"
#include "Etat/Etat0.h"
#include <iostream>

using namespace std;

Automate::Automate(Lexer &l) : lexer(l) {
    stop = false;
    Execute();
}

void Automate::Decalage(Etat * e, Symbole * s){
    etats.push_back(e);
    symboles.push_back(s);
    if(*s != EXPR){
        lexer.Avancer();
    }

}

void Automate::Error(){
   // 5/0;
};

void Automate::Accepter(){
    stop = true;
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
    Etat0 * e = new Etat0();
    etats.push_back(e);

    Symbole * s ;

    while(*(s=lexer.Consulter())!=FIN) {
        etats.back()->transition(this,s);

    }
    while(!stop)
        etats.back()->transition(this,s);

    cout << "Result : " << ((Entier *)symboles.back())->GetValeur() << endl;
}