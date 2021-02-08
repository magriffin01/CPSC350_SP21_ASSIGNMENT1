#include <iostream>
#include "Translator.cpp"

using namespace std;

int main(int argc, char **argv)
{
    // Tests model class
    // Model model;
    
    // Tests for single character
    // for (char i = 'A'; i <= 'Z'; ++i)
    // {
    //     cout << model.translateSingleCharacter(i) << endl;
    // }

    // for (char i = 'a'; i <= 'z'; ++i)
    // {
    //     cout << model.translateSingleCharacter(i) << endl;
    // }

    // cout << model.translateDoubleCharacter('.') << endl;

    // Tests Translator class
    Translator translator;

    cout << translator.translateEnglishWord("walk") << endl;

    return 0;
}