#ifndef FILEPROCESSOR_H
#define FILEPROCESSOR_H

#include <iostream>
#include <fstream>
#include <string>
#include "Translator.h"

using namespace std;

class FileProcessor
{
    public:
        FileProcessor();
        ~FileProcessor();
        void processFile(string inputFile, string outputFile);
        // For testing purposes
        void printEnglishText();

    private:
        void openFile(string inputFile);
        void readFile();
        void closeFile(string inputFile);
        Translator translator;
        ifstream inputStream;
        string englishText;
};

#endif