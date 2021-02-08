#include <string>

using namespace std;

class Model
{
    public:
        Model();
        ~Model();
        string translateSingleCharacter(char character);
        string translateDoubleCharacter(char character);

    private:
        string convertSingleCharacter(char character);
        string convertDoubleCharacter(char character);
        string determineCapitalization(string translation, char originalCharacter);
        bool isVowel(char letter);
        
};