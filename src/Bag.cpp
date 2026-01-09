#include "Bag.hpp"
#include <iostream>

/**
 * A Bag is a collection of Tokens (chips) that supports
 * functions that work by enumerating the contents.
 *
 * @author: YOUR NAME HERE
 */

Bag::Bag(int numTokens) : contents(numTokens) {}

void Bag::firstToken() const {
    if (!contents.empty())
        std::cout << contents[0].toString() << std::endl;
}

void Bag::allTokens() const {
    for (const auto& token : contents) {
        // TODO: print out the currently chosen Token
        
    }
}

void Bag::allTokensWhile() const {
    size_t i = 0;
    // TODO: turn this into a while loop that enumerates and
    // prints all of the tokens in the bag
    while () {
        
    }
}

int Bag::addTokens() const {
    // TODO: write a loop that enumerates the entire bag
	// and sums the total of all of the Token values
    return 0;
}

int Bag::highValueTokens() const {
    // TODO: write a loop that enumerates the entire bag
    // and returns the number of high value Tokens
    return 0;	
}

int Bag::firstGreen() const {
    // TODO: search bag for a green Token, if found, return its index
    return -1;
}