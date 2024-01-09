//
//  AIDealer.cpp
//  AiBlackjack
//
//  Created by Javohir Abdurazzakov.
//

#include "AIDealer.hpp"
#include <iostream>

void AIDealer::play(Deck& deck) {
    // Implement AI dealer strategy here
    // For now, dealer draws until the total value is 17 or more
    int totalValue = 0;
    for (const auto& card : hand) {
        totalValue += card.value;
    }

    while (totalValue < 17) {
        hand.push_back(deck.drawCard());
        totalValue += hand.back().value;
    }
}

void AIDealer::displayProfitLoss() {
    std::cout << "Profit/Loss: $" << money << "\n";
}
