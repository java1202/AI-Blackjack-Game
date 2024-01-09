//
//  main.cpp
//  AiBlackjack
//
//  Created by Javohir Abdurazzakov.
//

#include <iostream>
#include "Game.hpp"
#include "Simulation.hpp"

int main(int argc, const char * argv[]) {
    srand(static_cast<unsigned>(time(0)));

        // Assuming initial money values for AIPlayer and AIDealer (adjust as needed)
        int initialPlayerMoney = 1000;
        int initialDealerMoney = 10000;

        Simulation simulation(initialPlayerMoney, initialDealerMoney);
        simulation.run(10); // Run 10 simulations (adjust as needed)

        return 0;
}
