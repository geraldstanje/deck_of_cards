#include "deck.h"
#include <iostream>

int main() {
    deck_of_cards deck;
    deck.init_cards();
    deck.shuffle_cards();
    deck.show();

    card c;
    deck.deal_card(c);
    deck.return_card_to_bottom(c);

    deck.show();

    //deck.return_bottom_card(c);
    //std::cout << c.number_ << std::endl;

    return 0;
}