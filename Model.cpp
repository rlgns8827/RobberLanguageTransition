// Kihoon Yoo
// 2486883
// kiyoo@chapman.edu 
// CPSC-350-04
// PA 1: Robber Language Transition

#include "Model.h"
#include <cctype>

Model::Model() {}
Model::~Model() {}

bool Model::isVowel(char c) {
   char lower = std::tolower(c);
   return (lower == 'a' || lower == 'e' || lower == 'i' || 
           lower == 'o' || lower == 'u');
}

bool Model::isConsonant(char c) {
   return std::isalpha(c) && !isVowel(c);
}

std::string Model::translateSingleConsonant(char c) {
   std::string result;
   result += c;
   result += 'o';
   result += std::islower(c) ? std::tolower(c) : std::toupper(c);
   return result;
}

std::string Model::translateSingleVowel(char c) {
   return std::string(1, c);
}
