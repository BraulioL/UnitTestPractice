#include "Password.h"
#include <string>

using std::string;

/*
  The function receives a string counts how many times the same character 
  occurs at the beginning of the string, before any other characters (or the
  end of the string). The function is case-sensitive so 'Z' is different than
  'z' and any ASCII characters are allowed.
*/
int Password::count_leading_characters(string phrase){
  int repetition = 1;
  int index = 0;
  while( index < phrase.length()-1 && phrase[index] == phrase[index+1] ){
    repetition++;
    index++;
  }
  return repetition;
}


/*
  receives a string and returns whether it has both at least one upper-case
  letter and at least one lower-case letter
*/
bool Password::has_mixed_case(string pass){
  bool has_upper = false;
  bool has_lower = false;

  for(int i = 0; i < pass.length(); i++){
    if(pass[i] >= 'A' && pass[i] <= 'Z'){
      has_upper = true;
    }

    if(pass[i] >= 'a' && pass[i] <= 'z'){
      has_lower = true;
    }

  }

  return has_upper && has_lower;
}