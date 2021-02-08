#include <string>
#include "Model.cpp"

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
        Model model;

};