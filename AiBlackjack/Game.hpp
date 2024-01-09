//
//  Game.hpp
//  AiBlackjack
//
//  Created by Javohir Abdurazzakov.
//

#ifndef Game_hpp
#define Game_hpp

#include <stdio.h>
#include "AIPlayer.hpp"
#include "AIDealer.hpp"

class Game {
private:
    Deck deck;
    AIPlayer aiPlayer;
    AIDealer aiDealer;

public:
    void run();
};

#endif /* Game_hpp */
