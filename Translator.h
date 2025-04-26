// Kihoon Yoo
// 2486883
// kiyoo@chapman.edu 
// CPSC-350-04
// PA 1: Robber Language Transition

#ifndef TRANSLATOR_H
#define TRANSLATOR_H

#include "Model.h"
#include <string>

class Translator {
public:
    Translator();
    ~Translator();

    std::string translateEnglishWord(const std::string& word);
    std::string translateEnglishSentence(const std::string& sentence);

private:
    Model model;
};

#endif

