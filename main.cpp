// Kihoon Yoo
// 2486883
// kiyoo@chapman.edu 
// CPSC-350-04
// PA 1: Robber Language Transition

#include "FileProcessor.h"
#include <iostream>

int main(int argc, char* argv[]) {
   if (argc != 3) {
       std::cerr << "Usage: " << argv[0] << " <input_file> <output_file>" << std::endl;
       return 1;
   }
   
   FileProcessor processor;
   processor.processFile(argv[1], argv[2]);
   
   return 0;
}
