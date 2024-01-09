//
//  AIDealer.hpp
//  AiBlackjack
//
//  Created by Javohir Abdurazzakov.
//

#ifndef AIDealer_hpp
#define AIDealer_hpp

#include <stdio.h>
#include "Player.hpp"

class AIDealer : public Player {
public:
    void play(Deck& deck) override;
    void displayProfitLoss();
};

#endif /* AIDealer_hpp */
