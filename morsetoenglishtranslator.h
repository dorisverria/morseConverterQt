#ifndef MORSETOENGLISHTRANSLATOR_H
#define MORSETOENGLISHTRANSLATOR_H
#include "morsetranslator.h"

class MorseToEnglishTranslator : public MorseTranslator
{
public:
    MorseToEnglishTranslator();
    std::string translate(std::string input);
    std::unordered_map<std::string, char> dictionary;
    ~MorseToEnglishTranslator();
};

#endif // MORSETOENGLISHTRANSLATOR_H
