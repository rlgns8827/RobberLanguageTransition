// Kihoon Yoo
// 2486883
// kiyoo@chapman.edu 
// CPSC-350-04
// PA 1: Robber Language Transition

#ifndef FILEPROCESSOR_H
#define FILEPROCESSOR_H
#include "Translator.h"
#include <string>

class FileProcessor {
public:
   FileProcessor();  // Default constructor
   ~FileProcessor(); // Default destructor
   
   void processFile(const std::string& inputFile, const std::string& outputFile);

private:
   Translator translator;
   std::string readFile(const std::string& filename);
   void writeHTMLFile(const std::string& outputFile, 
                     const std::string& originalText,
                     const std::string& translatedText);
};

#endif
