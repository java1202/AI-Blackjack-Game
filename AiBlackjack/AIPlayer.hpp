//
//  AIPlayer.hpp
//  AiBlackjack
//
//  Created by Javohir Abdurazzakov.
//

#ifndef AIPlayer_hpp
#define AIPlayer_hpp

#include <stdio.h>
#include "Player.hpp"

class AIPlayer : public Player {
public:
    void play(Deck& deck) override;
    // Add any additional functions needed for simulations
};

#endif /* AIPlayer_hpp */
