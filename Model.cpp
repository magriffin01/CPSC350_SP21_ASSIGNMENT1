// FIXME: delete iostream when done
#include <iostream>

#include <cctype>
#include <string>
#include "Model.h"

using namespace std;

Model::Model()
{
    // FIXME: Delete when project completed
    cout << "Constructor called" << endl;
}

Model::~Model()
{
    // FIXME: Delete when project completed
    cout << "Destructor called" << endl;
}

// Takes a single character as input and return a string representing its encoding in Tutnese, Capitalization Preserved
string Model::translateSingleCharacter(char character)
{
    string translation;
    translation = convertSingleCharacter(character);
    return translation;
}

// Takes a single character as input and returns a string representing its encoding in Tutnese, Capitalization preserved
string Model::translateDoubleCharacter(char character)
{

}

string Model::convertSingleCharacter(char character)
{
    string conversion;

    switch (tolower(character))
    {
        case 'b':
            conversion = "bub";
            break;
        
        case 'c':
            conversion = "cash";
            break;

        case 'd':
            conversion = "dud";
            break;

        case 'f':
            conversion = "fuf";
            break;
        
        case 'g':
            conversion = "gug";
            break;
        
        case 'h':
            conversion = "hash";
            break;

        case 'j':
            conversion = "jay";
            break;

        case 'k':
            conversion = "kuck";
            break;

        case 'l':
            conversion = "lul";
            break;

        case 'm':
            conversion = "mum";
            break;
        
        case 'n':
            conversion = "nun";
            break;

        case 'p':
            conversion = "pub";
            break;

        case 'q':
            conversion = "quack";
            break;

        case 'r':
            conversion = "rug";
            break;

        case 's':
            conversion = "sus";
            break;
        
        case 't':
            conversion = "tut";
            break;
        
        case 'v':
            conversion = "vuv";
            break;

        case 'w':
            conversion = "wack";
            break;

        case 'x':
            conversion = "ex";
            break;

        case 'y':
            conversion = "yub";
            break;

        case 'z':
            conversion = "zub";
            break;

        default:
            conversion = character;
            break;
    }

    conversion = determineCapitalization(conversion, character);

    return conversion;
}

string Model::determineCapitalization(string translation, char originalCharacter)
{
    if (isupper(originalCharacter))
    {
        translation.at(0) = toupper(translation.at(0));
        return translation;
    }
    else
    {
        return translation;
    }
}

