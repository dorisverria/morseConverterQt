#ifndef MORSETRANSLATOR_H
#define MORSETRANSLATOR_H
#include <unordered_map>
#include <utility>
#include <sstream>

class MorseTranslator
{
public:
    MorseTranslator();
    virtual std::string translate(std::string input) = 0;
    virtual ~MorseTranslator();
};

#endif // MORSETRANSLATOR_H
