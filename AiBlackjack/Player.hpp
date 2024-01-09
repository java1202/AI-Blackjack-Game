//
//  Player.hpp
//  AiBlackjack
//
//  Created by Javohir Abdurazzakov.
//

#ifndef Player_hpp
#define Player_hpp

#include <stdio.h>
#include "Deck.hpp"
#include <vector>

class Player {
public:
    std::vector<Card> hand;
    int money;  // Money value for the player

    Player(int initialMoney);

    virtual void play(Deck& deck) = 0;
    void displayHand();
    void displayMoney();
    void updateMoney(int amount);
};

#endif /* Player_hpp */
