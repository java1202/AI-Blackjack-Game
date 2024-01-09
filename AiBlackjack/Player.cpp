//
//  Player.cpp
//  AiBlackjack
//
//  Created by Javohir Abdurazzakov.
//

#include "Player.hpp"
#include <iostream>

Player::Player(int initialMoney) : money(initialMoney) {}

void Player::displayHand() {
    std::cout << "Hand: ";
    for (const auto& card : hand) {
        std::cout << card.value << " ";
    }
    std::cout << "\n";
}

void Player::displayMoney() {
    std::cout << "Money: $" << money << "\n";
}

void Player::updateMoney(int amount) {
    money += amount;
}
