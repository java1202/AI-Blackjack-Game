//
//  Simulation.hpp
//  AiBlackjack
//
//  Created by Javohir Abdurazzakov.
//

#ifndef Simulation_hpp
#define Simulation_hpp

#include <stdio.h>
#include "AIPlayer.hpp"
#include "AIDealer.hpp"

class Simulation {
private:
    AIPlayer aiPlayer;
    AIDealer aiDealer;
    Deck deck;

public:
    Simulation(int initialPlayerMoney, int initialDealerMoney);  // Constructor
    void run(int numSimulations);
};

#endif /* Simulation_hpp */
