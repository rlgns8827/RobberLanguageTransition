// Kihoon Yoo
// 2486883
// kiyoo@chapman.edu 
// CPSC-350-04
// PA 1: Robber Language Transition

#ifndef MODEL_H
#define MODEL_H
#include <string>

class Model {
public:
   Model();  // Default constructor
   ~Model(); // Default destructor
   
   std::string translateSingleConsonant(char c);
   std::string translateSingleVowel(char c);
   
   // Move isVowel to public section
   bool isVowel(char c);
   bool isConsonant(char c);
   
};

#endif
