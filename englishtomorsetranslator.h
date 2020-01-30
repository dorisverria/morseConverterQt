#ifndef ENGLISHTOMORSETRANSLATOR_H
#define ENGLISHTOMORSETRANSLATOR_H
#include "morsetranslator.h"

class EnglishToMorseTranslator : public MorseTranslator
{
public:
    EnglishToMorseTranslator();
    std::string translate(std::string input);
    static const std::unordered_map<char, std::string> dictionary;
    /*
    std::unordered_map<char, std::string> dict = {
        {'a', ".-"}, {'b', "-..."}, {'c',"-.-."}, {'d',"-.."}, {'e',"."}, {'f',"..-."}, {'g',"--."},
        {'h',"...."}, {'i',".."}, {'j',".---"}, {'k',"-.-"}, {'l',".-.."}, {'m',"--"}, {'n',"-."},
        {'o',"---"}, {'p',".--."}, {'q',"--.-"}, {'r',".-."}, {'s',"..."}, {'t',"-"}, {'u',"..-"},
        {'v', "...-"}, {'w',".--"}, {'x',"-..-"}, {'y',"-.--"}, {'z',"--.."},
        {'1', ".----"}, {'2',"..---"}, {'3',"...--"}, {'4',"....-"}, {'5',"....."}, {'6',"-...."},
        {'7',"--..."}, {'8',"---.."}, {'9',"----."}, {'0',"-----"},
        {',',"--..--"}, {'/',"-..-."}, {'.',".-.-.-"}, {';',"-.-.-."}, {':',"---..."}, {'(',"-.--."},
        {')',"-.--.-"}, {'@',".--.-."}, {'=',"···-··-"}, {'\\',".----."}, {'+',".-.-."}, {'-',"-....-"},
        {'_',"..--.-"}, {' ', "/"}
    };
    */
    ~EnglishToMorseTranslator();
};

#endif // ENGLISHTOMORSETRANSLATOR_H
