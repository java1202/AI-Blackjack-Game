//
//  Deck.cpp
//  AiBlackjack
//
//  Created by Javohir Abdurazzakov.
//

#include "Deck.hpp"
#include <cstdlib>
#include <ctime>

Deck::Deck() {
    for (int i = 1; i <= 10; ++i) {
        cards.push_back(Card(i));
    }
}

Card Deck::drawCard() {
    int index = rand() % cards.size();
    Card drawnCard = cards[index];
    cards.erase(cards.begin() + index);
    return drawnCard;
}
