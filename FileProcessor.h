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

    private:
        Translator translator;
        ifstream inputStream;
};

#endif