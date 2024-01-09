//
//  AIPlayer.cpp
//  AiBlackjack
//
//  Created by Javohir Abdurazzakov.
//

#include "AIPlayer.hpp"

void AIPlayer::play(Deck& deck) {
    // Implement AI strategy for simulations
    // For now, AI player just draws a card if the total value is less than 15
    int totalValue = 0;
    for (const auto& card : hand) {
        totalValue += card.value;
    }

    if (totalValue < 15) {
        hand.push_back(deck.drawCard());
    }
}
