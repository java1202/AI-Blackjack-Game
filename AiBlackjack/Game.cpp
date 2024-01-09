//
//  Game.cpp
//  AiBlackjack
//
//  Created by Javohir Abdurazzakov.
//

#include "Game.hpp"
#include <iostream>

void Game::run() {
    // Simulate multiple rounds (for simplicity, let's say 5 rounds)
    for (int round = 1; round <= 5; ++round) {
        std::cout << "Round " << round << "\n";

        aiPlayer.play(deck);
        aiDealer.play(deck);

        // Display hands after the round
        std::cout << "AI Player ";
        aiPlayer.displayHand();
        std::cout << "AI Dealer ";
        aiDealer.displayHand();

        // Reset hands for the next round
        aiPlayer.hand.clear();
        aiDealer.hand.clear();
    }
}
