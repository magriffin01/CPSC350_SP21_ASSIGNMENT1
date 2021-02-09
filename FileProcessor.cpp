#include <iostream>
#include <fstream>
#include <string>

#include "FileProcessor.h"

using namespace std;

FileProcessor::FileProcessor()
{
    // FIXME: Delete once project completed
    cout << "FileProcessor constructor called" << endl;
}

FileProcessor::~FileProcessor()
{
    // FIXME: Delete once project completed
    cout << "FileProcessor destructor called" << endl;
}

// Takes a string for the input file and output file, reads the english file, and writes the translation to the output file
void FileProcessor::processFile(string inputFile, string outputFile)
{
    openFile(inputFile);
    readFile();
    closeFile(inputFile);
    // Delete after testing
    printEnglishText();
}

// FIXME: For testing purposes only
void FileProcessor::printEnglishText()
{
    cout << englishText << endl;
}

// Reads the input file and puts the text into a string
void FileProcessor::readFile()
{
    string line;
    englishText = "";

    getline(inputStream, line);

    while (!inputStream.fail())
    {
        englishText = englishText + line;
        englishText.append("\n");
        getline(inputStream, line);
    }

    if (!inputStream.eof())
    {
        cout << "Input failure before reaching end of file." << endl;
    }
}

// Takes a string for the inputFile and attempts to open it
void FileProcessor::openFile(string inputFile)
{
    // FIXME: Delete once project completed
    cout << "Attempting to open " << inputFile << endl;

    inputStream.open(inputFile);
    
    if (!inputStream.is_open())
    {
        cout << "Could not open " << inputFile << endl;
    }
    else
    {
        cout << "Successfully opened " << inputFile << endl;
    }
}

// Takes a string for the inputFile and attempts to close it
void FileProcessor::closeFile(string inputFile)
{
    // FIXME: Delete once project completed
    cout << "Closing " << inputFile << endl;

    inputStream.close();
}