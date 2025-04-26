# Robber Language Transition

## Identifying Information: 
1. Full name: Kihoon Yoo
2. Student ID: 2480883
3. Chapman Email: kiyoo@chapman.edu
4. Course number and section: CPSC-350-04
5. Assignment or exercise number: PA1: Robber Language Transition

## Project Description
This project implements a translator that converts English text into Robber Language (Rövarspråket), a playful encoding where every consonant is doubled with an 'o' inserted between. The program reads an input text file, applies the translation rules, and outputs the result into an HTML file that highlights the original and translated text. This assignment focuses on fundamental C++ programming skills, basic class design, and string manipulation without using complex data structures.

## Key Features
- Model Class: Encodes individual consonants and vowels according to Robber Language rules while preserving capitalization.
- Translator Class: Converts full English words and sentences into Robber Language using the Model class.
- FileProcessor Class: Reads English text from a .txt file and generates a styled .html output showing both the original and translated text.
- Simple and Clean Structure: Only primitive types (int, char, std::string) are used — no arrays, vectors, or advanced containers.
- Command-Line Driven: Takes input and output file names as command-line arguments, without interactive prompts.
- HTML Output Formatting: The output file displays the original English text in bold and the translated text in italics for clear readability.
- Memory-Safe Implementation: Adheres to good C++ practices with constructors, destructors, and separation of functionality across header and source files.

## Files
1. Model.cpp
2. Model.h
3. Translator.cpp
4. Translator.h
5. FileProcessor.cpp
6. FileProcessor.h
7. main.cpp
8. input.txt
9. output.html
10. Program
11. README.md
12. Robber
13. e.exe

## Known Error 
- There are no known errors in this program.

## References
- https://html.com/#Creating_Your_First_HTML_Webpage
- https://www.geeksforgeeks.org/ctype-hcctype-library-in-c-c-with-examples/
- Received debugging help from the Chapman TLC

## Instructions for compiling
- To compile: g++ main.cpp FileProcessor.cpp Translator.cpp Model.cpp -o program
- To run: ./robber input.txt output.html
