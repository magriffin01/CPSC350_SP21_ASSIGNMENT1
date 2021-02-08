// FIXME: Delete once project completed
#include <iostream>

#include <string>
#include "Translator.h"

using namespace std;

Translator::Translator()
{
    // FIXME: Delete once project completed
    cout << "Translator constructor called" << endl;
}

Translator::~Translator()
{
    // FIXME: Delete once project completed
    cout << "Translator destructor called" << endl;
}

// Takes a single string representing a single English word and returns a string representing the Tutnese translation
string Translator::translateEnglishWord(string englishWord)
{
    // Take in word. check for double characters, convert each character, and return the word
    string translatedCharacter;
    string translatedWord;

    for (int i = 0; i < englishWord.size(); ++i)
    {
        if (isDoubleCharacter(i, englishWord)) // If double character, convert, and increment index to avoid doubling
        {
            translatedCharacter = model.translateDoubleCharacter(englishWord.at(i));
            ++i;
        }
        else
        {
            translatedCharacter = model.translateSingleCharacter(englishWord.at(i));
        }

        translatedWord = translatedWord + translatedCharacter;
    }

    return translatedWord;
}

// Takes a single string representing a single English sentence and returns a string representing Tutnese translation
string Translator::translateEnglishSentence(string englishSentence)
{

}

// Takes an index, and the original word and returns true if consecutive characters are the same, otherwise false
bool Translator::isDoubleCharacter(int index, string word)
{
    // Check to see if out of range, if yes return false, if no check characters and return appropriate value
    int nextIndex = index + 1;

    if (word.size() - 1 < nextIndex)
    {
        return false;
    }

    if (word.at(index) == word.at(nextIndex))
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

