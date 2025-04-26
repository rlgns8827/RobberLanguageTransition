// Kihoon Yoo
// 2486883
// kiyoo@chapman.edu 
// CPSC-350-04
// PA 1: Robber Language Transition

#include "FileProcessor.h"
#include <fstream>
#include <iostream>

FileProcessor::FileProcessor() {}
FileProcessor::~FileProcessor() {}

std::string FileProcessor::readFile(const std::string& filename) {
   std::ifstream file(filename);
   if (!file.is_open()) {
       std::cerr << "Error opening input file: " << filename << std::endl;
       return "";
   }
   
   std::string content;
   std::string line;
   while (std::getline(file, line)) {
       content += line + "\n";
   }
   
   file.close();
   return content;
}

void FileProcessor::writeHTMLFile(const std::string& outputFile,
                               const std::string& originalText,
                               const std::string& translatedText) {
   std::ofstream file(outputFile);
   if (!file.is_open()) {
       std::cerr << "Error opening output file: " << outputFile << std::endl;
       return;
   }
   
   file << "<!DOCTYPE html>\n<html>\n<head>\n"
        << "<title>Robber Language Translation</title>\n"
        << "</head>\n<body>\n"
        << "<p><b>" << originalText << "</b></p>\n"
        << "<p> </p>\n"
        << "<p><i>" << translatedText << "</i></p>\n"
        << "</body>\n</html>";
   
   file.close();
}

void FileProcessor::processFile(const std::string& inputFile,
                             const std::string& outputFile) {
   std::string originalText = readFile(inputFile);
   if (originalText.empty()) {
       return;
   }
   
   std::string translatedText = translator.translateEnglishSentence(originalText);
   writeHTMLFile(outputFile, originalText, translatedText);
}
