#include <iostream>
#include "lexer.h"
#include "Automate.h"


int main(void) {
   string chaine("(1+34)*123");
   Lexer l(chaine);
   Automate a(l);


   return 0;
}

