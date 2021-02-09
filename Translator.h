#ifndef TRANSLATOR_H
#define TRANSLATOR_H

#include <string>
#include "Model.h"

using namespace std;

class Translator
{
    public:
        Translator();
        ~Translator();
        string translateEnglishWord(string englishWord);
        string translateEnglishSentence(string englishSentence);

    private:
        bool isDoubleCharacter(int index, string word);
        bool hasNoMoreSpaces(int index);
        void updateWhitespaceIndices(int& indexOfPreviousWhitespace, int& indexOfNextWhitespace, string sentence);
        Model model;

};

#endif