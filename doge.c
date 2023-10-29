/*
› An Adjective is either "wow", "many", "so" or "such".

› A Noun is either "lisp", "language", "c", "book" or "build".

› A Phrase is an Adjective followed by a Noun.

› A Doge is zero or more Phrases.
*/

#include "mpc.h"

mpc_parser_t* Adjective = mpc_new("adjective"); // Build a parser 'Adjective' to recoqnize descriptions

mpc_parser_t* Noun = mpc_new("noun"); // Build a parser 'Noun' to recognize things

mpc_parser_t* Phrase = mpc_new("phrase"); // Build a parser 'Phrase' to recognize things AND descriptions

mpc_parser_t* Doge = mpc_new("doge"); // Build a parser 'Doge' to recognize zero or more Phrases

mpca_lang(MPCA_LANG_DEFAULT,
  "
    adjective : \"wow\" | \"many\"            \
              | \"so\" | \"such\";            \
    noun      : \"lisp\" | \"language\"       \
              | \"c\" | \"book\" | \"build\"; \
    phrase    : <adjective> <noun>;           \
    doge      : <phrase>*;                    \
  ",
  Adjective, Noun, Phrase, Doge);

// Do some parsing here...

mpc_cleanup(4, Adjective, Noun, Phrase, Doge);

int main(int argc, char** argv) {
  return 0;
  }
