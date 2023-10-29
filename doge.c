/*
› An Adjective is either "wow", "many", "so" or "such".

› A Noun is either "lisp", "language", "c", "book" or "build".

› A Phrase is an Adjective followed by a Noun.

› A Doge is zero or more Phrases.
*/

#include "mpc.h"

// Build a parser 'Adjective' to recoqnize descriptions
mpc_parser_t* Adjective = mpc_or(4,
  mpc_sym("wow"),
  mpc_sym("many"),
  mpc_sym("so"),
  mpc_sym("such")
);

// Build a parser 'Noun' to recognize things
mpc_parser_t* Noun = mpc_or(5,
  mpc_sym("lisp"),
  mpc_sym("language"),
  mpc_sym("c"),
  mpc_sym("book"),
  mpc_sym("build")
);

// Build a parser 'Phrase' to recognize things AND descriptions
mpc_parser_t* Phrase = mpc_and(2,
  mpcf_strfold,
  Adjective,
  Noun,
  free
);

// Build a parser 'Doge' to recognize zero or more Phrases
mpc_parser_t* Doge = mpc_many(
  mpcf_strfold,
  Phrase
);

int main(int argc, char** argv) {
  return 0;
  }
