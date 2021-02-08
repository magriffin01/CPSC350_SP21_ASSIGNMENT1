#include <iostream>
#include "Model.cpp"

using namespace std;

int main(int argc, char **argv)
{
    Model model;
    
    // Tests for single character
    for (char i = 'A'; i <= 'Z'; ++i)
    {
        cout << model.translateSingleCharacter(i) << endl;
    }

    for (char i = 'a'; i <= 'z'; ++i)
    {
        cout << model.translateSingleCharacter(i) << endl;
    }

    return 0;
}