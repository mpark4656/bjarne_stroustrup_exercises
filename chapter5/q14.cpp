/**
 * Read (day-of-the-week,value) pairs from standard input. For example:
 *
 * Tuesday 23 Friday 56 Tuesday -3 Thursday 99
 *
 * Collect all the values for each day of thw eek in a vector<int>. Write out the values of the
 * seven day-of-the-week vectors. Print out the sum of the values in each vector. Ignore illegal
 * days of thw week, such as Funday, but accept common synonyms such as Mon and monday.
 * Write out the number of rejected values.
 */
#include <iostream>
#include <vector>
#include <string>
#include <map>

class TrieNode {
private:
    char _character;
    bool _endOfWord = false;
    std::map<char, TrieNode*> _children;

public:
    explicit TrieNode(char character): _character(character) {
        setCharacter(character);
    }

    TrieNode(char character, bool endOfWord): _character(character), _endOfWord(endOfWord) {
        setCharacter(character);
    }

    char getCharacter() const {
        return _character;
    }

    void setCharacter(char character) {
        this->_character = static_cast<char>(std::toupper(character));
    }

    bool isEndOfWord() const {
        return _endOfWord;
    }

    void setEndOfWord(bool endOfWord) {
        _endOfWord = endOfWord;
    }

    TrieNode* addChildNode(char character) {
        character = static_cast<char>(std::toupper(character));
        return _children.insert(std::make_pair(character,new TrieNode(character))).first->second;
    }

    TrieNode* addChildNode(char character, bool endOfWord) {
        character = static_cast<char>(std::toupper(character));
        return _children.insert(std::make_pair(character, new TrieNode(character, endOfWord))).first->second;
    }

    void removeChildNode(char character) {
        character = static_cast<char>(std::toupper(character));
        _children.erase(_children.find(character));
    }

    TrieNode* findChild(char character) {
        character = static_cast<char>(std::toupper(character));
        if(_children.find(character) != _children.end()) {
            return _children.find(character)->second;
        }
        return nullptr;
    }

    bool compare(char character) const {
        return _character == static_cast<char>(std::toupper(character));
    }
};

class Trie {
private:
    TrieNode* _root = new TrieNode('.');

public:
    void add(const std::string &word) {
        TrieNode* node = nullptr;

        for(int i = 0; i < word.size(); i++) {
            if(node == nullptr) {
                node = _root->addChildNode(word[i]);
                if(i == word.size() - 1) {
                    node->setEndOfWord(true);
                }
            } else {
                node = node->addChildNode(word[i]);
                if(i == word.size() - 1) {
                    node->setEndOfWord(true);
                }
            }
        }
    }

    bool contains(const std::string &word) const {
        if(word.empty()) return true;
        TrieNode* node = _root;

        for(char character : word) {
            node = node->findChild(character);
            if(node == nullptr) return false;
        }

        return node->isEndOfWord();
    }
};

int main() {
    Trie trie;
    trie.add("mon");
    trie.add("monday");
    trie.add("tue");
    trie.add("tuesday");
    trie.add("wed");
    trie.add("wednesday");
    trie.add("thur");
    trie.add("thursday");
    trie.add("fri");
    trie.add("friday");
    trie.add("sat");
    trie.add("saturday");
    trie.add("sun");
    trie.add("sunday");

    std::vector<std::string> days;
    std::vector<int> values;
    std::vector<std::string> rejectedDays;

    std::string day;
    int value;
    int sum = 0;

    while(std::cin >> day && std::cin >> value) {
        if(trie.contains(day)) {
            days.push_back(day);
            values.push_back(value);
            sum += value;
        } else {
            rejectedDays.push_back(day);
        }
    }

    std::cout << "The sum is " << sum << std::endl;
    std::cout << "The rejected days string literals are\n";
    for(std::string day : rejectedDays) {
        std::cout << "\t" << day << std::endl;
    }

    return 0;
}