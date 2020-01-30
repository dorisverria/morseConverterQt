#include "morsetoenglishtranslator.h"

const std::unordered_map<std::string, char> MorseToEnglishTranslator::dictionary = {
    {".-", 'a'}, {"-...", 'b'}, {"-.-.", 'c'}, {"-..", 'd'}, {".", 'e'}, {"..-.", 'f'},
    {"--.", 'g'}, {"....", 'h'}, {"..", 'i'}, {".---", 'j'}, {"-.-", 'k'}, {".-..", 'l'},
    {"--", 'm'}, {"-.", 'n'}, {"---", 'o'}, {".--.", 'p'}, {"--.-", 'q'}, {".-.", 'r'},
    {"...", 's'}, {"-", 't'}, {"..-", 'u'}, {"...-", 'v'}, {".--", 'w'}, {"-..-", 'x'},
    {"-.--", 'y'}, {"--..", 'z'},
    {".----", '1'}, {"..---", '2'}, {"...--", '3'}, {"....-", '4'}, {".....", '5'},
    {"-....", '6'}, {"--...", '7'}, {"---..", '8'}, {"----.", '9'}, {"-----", '0'},
    {"--..--", ','}, {"-..-.", '/'}, {".-.-.-", '.'}, {"-.-.-.", ';'}, {"---...", ':'},
    {"-.--.", '('}, {"-.--.-", ')'}, {".--.-.", '@'}, {"···-··-", '='}, {".----.", '\\'},
    {".-.-.", '+'}, {"-....-", '-'}, {"..--.-", '_'}, {"/", ' '}

};
MorseToEnglishTranslator::MorseToEnglishTranslator()
{
    /*
    this->dictionary.insert(std::make_pair(".-", 'a'));
    this->dictionary.insert(std::make_pair("-...", 'b'));
    this->dictionary.insert(std::make_pair("-.-.", 'c'));
    this->dictionary.insert(std::make_pair("-..", 'd'));
    this->dictionary.insert(std::make_pair(".", 'e'));
    this->dictionary.insert(std::make_pair("..-.", 'f'));
    this->dictionary.insert(std::make_pair("--.", 'g'));
    this->dictionary.insert(std::make_pair("....", 'h'));
    this->dictionary.insert(std::make_pair("..", 'i'));
    this->dictionary.insert(std::make_pair(".---", 'j'));
    this->dictionary.insert(std::make_pair("-.-", 'k'));
    this->dictionary.insert(std::make_pair(".-..", 'l'));
    this->dictionary.insert(std::make_pair("--", 'm'));
    this->dictionary.insert(std::make_pair("-.", 'n'));
    this->dictionary.insert(std::make_pair("---", 'o'));
    this->dictionary.insert(std::make_pair(".--.", 'p'));
    this->dictionary.insert(std::make_pair("--.-", 'q'));
    this->dictionary.insert(std::make_pair(".-.", 'r'));
    this->dictionary.insert(std::make_pair("...", 's'));
    this->dictionary.insert(std::make_pair("-", 't'));
    this->dictionary.insert(std::make_pair("..-", 'u'));
    this->dictionary.insert(std::make_pair("...-", 'v'));
    this->dictionary.insert(std::make_pair(".--", 'w'));
    this->dictionary.insert(std::make_pair("-..-", 'x'));
    this->dictionary.insert(std::make_pair("-.--", 'y'));
    this->dictionary.insert(std::make_pair("--..", 'z'));

    this->dictionary.insert(std::make_pair(".----", '1'));
    this->dictionary.insert(std::make_pair("..---", '2'));
    this->dictionary.insert(std::make_pair("...--", '3'));
    this->dictionary.insert(std::make_pair("....-", '4'));
    this->dictionary.insert(std::make_pair(".....", '5'));
    this->dictionary.insert(std::make_pair("-....", '6'));
    this->dictionary.insert(std::make_pair("--...", '7'));
    this->dictionary.insert(std::make_pair("---..", '8'));
    this->dictionary.insert(std::make_pair("----.", '9'));
    this->dictionary.insert(std::make_pair("-----", '0'));

    this->dictionary.insert(std::make_pair("--..--", ','));
    this->dictionary.insert(std::make_pair("-..-.", '/'));
    this->dictionary.insert(std::make_pair(".-.-.-", '.'));
    this->dictionary.insert(std::make_pair("-.-.-.", ';'));
    this->dictionary.insert(std::make_pair("---...", ':'));
    this->dictionary.insert(std::make_pair("-.--.", '('));
    this->dictionary.insert(std::make_pair("-.--.-", ')'));
    this->dictionary.insert(std::make_pair(".--.-.", '@'));
    this->dictionary.insert(std::make_pair("···-··-", '='));
    this->dictionary.insert(std::make_pair(".----.", '\\'));
    this->dictionary.insert(std::make_pair(".-.-.", '+'));
    this->dictionary.insert(std::make_pair("-....-", '-'));
    this->dictionary.insert(std::make_pair("..--.-", '_'));
    this->dictionary.insert(std::make_pair("/", ' '));
    */
}

std::string MorseToEnglishTranslator::translate(std::string input) {
    std::string output;
    std::string word;
    std::istringstream stream(input);
    while(getline(stream, word, ' ')) {
        if(this->dictionary.find(word) != this->dictionary.end())
            output += this->dictionary.at(word);
    }
    return output;
}

MorseToEnglishTranslator::~MorseToEnglishTranslator() {
        //qDebug() << "Deleting object 1";
}
