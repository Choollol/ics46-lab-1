#include "Bag.hpp"

#include <iostream>

/**
 * A Bag is a collection of Tokens (chips) that supports
 * functions that work by enumerating the contents.
 *
 * @author: CHRISTOPHER SUN
 */

Bag::Bag(int numTokens) : contents(numTokens) {}

void Bag::firstToken() const {
    if (!contents.empty())
        std::cout << contents[0].toString() << std::endl;
}

void Bag::allTokens() const {
    for (const auto& token : contents) {
        std::cout << token.toString() << " ";
    }
    std::cout << std::endl;
}

void Bag::allTokensWhile() const {
    size_t i = 0;
    while (i < contents.size()) {
        const Token& token = contents[i];
        std::cout << token.toString() << " ";
        ++i;
    }
    std::cout << std::endl;
}

int Bag::addTokens() const {
    int sum = 0;
    for (const Token& token : contents) {
        sum += token.getValue();
    }
    return sum;
}

int Bag::highValueTokens() const {
    int count = 0;
    for (const Token& token : contents) {
        if (token.isHighValue()) {
            ++count;
        }
    }
    return count;
}

int Bag::firstGreen() const {
    for (size_t i = 0; i < contents.size(); ++i) {
        if (contents[i].getColor() == "Green") {
            return i;
        }
    }
    return -1;
}