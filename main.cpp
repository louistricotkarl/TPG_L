#include <iostream>
#include "lexer.h"
#include "Automate.h"


int main(void) {
   string chaine("1+2+3+4*5*(5+5+3)");
   Lexer l(chaine);
   Automate a(l);


   return 0;
}

