//
//  Simulation.cpp
//  AiBlackjack
//
//  Created by Javohir Abdurazzakov.
//

#include "Simulation.hpp"
#include <iostream>

Simulation::Simulation(int initialPlayerMoney, int initialDealerMoney)
    : aiPlayer(initialPlayerMoney), aiDealer(initialDealerMoney), deck() {}

void Simulation::run(int numSimulations) {
    for (int i = 0; i < numSimulations; ++i) {
        aiPlayer.play(deck);
        aiDealer.play(deck);

        // Implement logic to track outcomes, update AI models, etc.
        // For simplicity, let's just display the hands and profit/loss.
        std::cout << "Simulation " << i + 1 << "\n";
        std::cout << "AI Player ";
        aiPlayer.displayHand();
        aiPlayer.displayMoney();
        std::cout << "AI Dealer ";
        aiDealer.displayHand();
        aiDealer.displayProfitLoss();

        // Reset hands and deck for the next simulation
        aiPlayer.hand.clear();
        aiDealer.hand.clear();
        deck = Deck();
    }
}
