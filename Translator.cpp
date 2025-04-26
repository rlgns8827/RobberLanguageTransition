// Kihoon Yoo
// 2486883
// kiyoo@chapman.edu 
// CPSC-350-04
// PA 1: Robber Language Transition

#include "Translator.h"
#include <cctype>

Translator::Translator() {}

Translator::~Translator() {}

std::string Translator::translateEnglishWord(const std::string& word) {
    std::string result = "";
    for (char c : word) {
        if (model.isVowel(c)) {
            result += model.translateSingleVowel(c);
        } else if (model.isConsonant(c)) {
            result += model.translateSingleConsonant(c);
        } else {
            result += c; // Keep non-alphabetic characters unchanged
        }
    }
    return result;
}

std::string Translator::translateEnglishSentence(const std::string& sentence) {
    std::string result = "";
    std::string word = "";
    
    for (char c : sentence) {
        if (isalpha(c)) {
            word += c;
        } else {
            if (!word.empty()) {
                result += translateEnglishWord(word);
                word = "";
            }
            result += c; // Maintain punctuation and spaces
        }
    }
    
    if (!word.empty()) {
        result += translateEnglishWord(word);
    }

    return result;
}
