//
//  Deck.hpp
//  AiBlackjack
//
//  Created by Javohir Abdurazzakov.
//

#ifndef Deck_hpp
#define Deck_hpp

#include <stdio.h>
#include "Card.hpp"
#include <vector>

class Deck {
private:
    std::vector<Card> cards;

public:
    Deck();

    Card drawCard();
};

#endif /* Deck_hpp */
