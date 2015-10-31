#include "deck.h"
#include <iostream>
#include <cassert>

int main() {
    deck_of_cards deck;
    deck.init_cards();
    deck.show();

    assert(deck.size() == MAX_NUM_CARDS);

    card c;
    deck.deal_card(c);

    assert(c.suit_ == spade && c.rank_ == ace);

    deck.return_card_to_bottom(c);

    deck.deal_card(c);

    assert(c.suit_ == spade && c.rank_ == two);

    return 0;
}